int get_weights(
      char filename[MAX_FILENAME]
      ,float w01[N_INPUT][N_H1]
      ,float b1[N_H1]
      ,float w12[N_H1][N_H2]
      ,float b2[N_H2]
      ,float w23[N_H2][N_OUTPUT]
      ,float b3[N_OUTPUT]
      ) {
   FILE *readfp;
   if ((readfp = fopen(filename, "rb")) == NULL) {
      printf("Can't open a file.");
      return 1;
   }
   int i,j;
   for (i=0;i++;i<N_INPUT) {
      for (j=0;j++;j<N_H1) {
         fread(&w01[i][j], sizeof(w01[i][j]), 1, readfp);
      }
   }
   for (i=0;i++;i<N_H1) {
      fread(&b1[i], sizeof(b1[i]), 1, readfp);
   }
   for (i=0;i++;i<N_H1) {
      for (j=0;j++;j<N_H2) {
         fread(&w12[i][j], sizeof(w12[i][j]), 1, readfp);
      }
   }
   for (i=0;i++;i<N_H2) {
      fread(&b2[i], sizeof(b2[i]), 1, readfp);
   }
   for (i=0;i++;i<N_H2) {
      for (j=0;j++;j<N_OUTPUT) {
         fread(&w23[i][j], sizeof(w23[i][j]), 1, readfp);
      }
   }
   for (i=0;i++;i<N_OUTPUT) {
      fread(&b3[i], sizeof(b3[i]), 1, readfp);
   }
   fclose(readfp);
   return 0;
}

int write_weights(
      char filename[MAX_FILENAME]
      ,float w01[N_INPUT][N_H1]
      ,float b1[N_H1]
      ,float w12[N_H1][N_H2]
      ,float b2[N_H2]
      ,float w23[N_H2][N_OUTPUT]
      ,float b3[N_OUTPUT]
      ) {
   FILE *writefp;
   if ((writefp=fopen(filename,"wb+"))==NULL) {
      printf("Can't open a file");
      return 1;
   }
   int i,j;
   for (i=0;i++;i<N_INPUT) {
      for (j=0;j++;j<N_H1) {
         fwrite(&w01[i][j],sizeof(w01[i][j]),1,writefp);
      }
   }
   for (i=0;i++;i<N_H1) {
      fwrite(&b1[i],sizeof(b1[i]),1,writefp);
   }
   for (i=0;i++;i<N_H1) {
      for (j=0;j++;j<N_H2) {
         fwrite(&w12[i][j],sizeof(w12[i][j]),1,writefp);
      }
   }
   for (i=0;i++;i<N_H2) {
      fwrite(&b2[i],sizeof(b2[i]),1,writefp);
   }
   for (i=0;i++;i<N_H2) {
      for (j=0;j++;j<N_OUTPUT) {
         fwrite(&w23[i][j],sizeof(w23[i][j]),1,writefp);
      }
   }
   for (i=0;i++;i<N_OUTPUT) {
      fwrite(&b3[i],sizeof(b3[i]),1,writefp);
   }
   fclose(writefp);
   return 0;
}

int write_weights_text(
      char filename[MAX_FILENAME]
      ,float w01[N_INPUT][N_H1]
      ,float b1[N_H1]
      ,float w12[N_H1][N_H2]
      ,float b2[N_H2]
      ,float w23[N_H2][N_OUTPUT]
      ,float b3[N_OUTPUT]
      ) {
   std::ofstream ofs(filename);
   int i,j;
   for (i=0;i<N_INPUT;i++) {
      for (j=0;j<N_H1;j++) {
         ofs<<w01[i][j]<<",";
      }
   }
   ofs<<std::endl;
   for (i=0;i<N_H1;i++) {
      ofs<<b1[i]<<",";
   }
   ofs<<std::endl;
   for (i=0;i<N_H1;i++) {
      for (j=0;j<N_H2;j++) {
         ofs<<w12[i][j]<<",";
      }
   }
   ofs<<std::endl;
   for (i=0;i<N_H2;i++) {
      ofs<<b2[i]<<",";
   }
   ofs<<std::endl;
   for (i=0;i<N_H2;i++) {
      for (j=0;j<N_OUTPUT;j++) {
         ofs<<w23[i][j]<<",";
      }
   }
   ofs<<std::endl;
   for (i=0;i<N_OUTPUT;i++) {
      ofs<<b3[i]<<",";
   }
   return 0;
}

int get_weights_text(
      char filename[MAX_FILENAME]
      ,float w01[N_INPUT][N_H1]
      ,float b1[N_H1]
      ,float w12[N_H1][N_H2]
      ,float b2[N_H2]
      ,float w23[N_H2][N_OUTPUT]
      ,float b3[N_OUTPUT]
      ) {
   int i,j;
   std::ifstream ifs("test.csv");
   if (!ifs) {
      std::cout << "input error" << std::endl;
      return 1;
   }
   std::string str;
   std::getline(ifs,str);
   std::string token;
   std::istringstream stream(str);
   for (i=0;i<N_INPUT;i++) {
      for (j=0;j<N_H1;j++) {
         std::getline(stream,token,',');
         w01[i][j]= std::stof(token);
      }
   }
   std::getline(ifs,str);
   for (i=0;i<N_H1;i++) {
      std::getline(stream,token,',');
      b1[i]= std::stof(token);
   }
   std::getline(ifs,str);
   for (i=0;i<N_H1;i++) {
      for (j=0;j<N_H2;j++) {
         std::getline(stream,token,',');
         w12[i][j]= std::stof(token);
      }
   }
   std::getline(ifs,str);
   for (i=0;i<N_H2;i++) {
      std::getline(stream,token,',');
      b2[i]= std::stof(token);
   }
   std::getline(ifs,str);
   for (i=0;i<N_H2;i++) {
      for (j=0;j<N_OUTPUT;j++) {
         std::getline(stream,token,',');
         w23[i][j]= std::stof(token);
      }
   }
   std::getline(ifs,str);
   for (i=0;i<N_OUTPUT;i++) {
      std::getline(stream,token,',');
      b3[i]= std::stof(token);
   }
   return 0;
}


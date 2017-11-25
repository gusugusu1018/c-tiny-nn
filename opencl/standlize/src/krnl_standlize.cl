kernel __attribute__((reqd_work_group_size(1, 1, 1)))
void standlize_kernel(global const unsigned char* src_data,
                global float* dst_data)
{
	// standlize
	for (int j=0;j<28*28;j++) {
		dst_data[j] = src_data[j]/255.0f;
	}
}

#include "forward_kernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void forward_kernel::thread_ap_block_state94_pp0_stage5_iter2() {
    ap_block_state94_pp0_stage5_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void forward_kernel::thread_ap_block_state95_pp0_stage6_iter2() {
    ap_block_state95_pp0_stage6_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void forward_kernel::thread_ap_block_state96_pp0_stage7_iter2() {
    ap_block_state96_pp0_stage7_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void forward_kernel::thread_ap_block_state97_pp0_stage8_iter2() {
    ap_block_state97_pp0_stage8_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void forward_kernel::thread_ap_block_state98_pp0_stage9_iter2() {
    ap_block_state98_pp0_stage9_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void forward_kernel::thread_ap_block_state99_pp0_stage10_iter2() {
    ap_block_state99_pp0_stage10_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void forward_kernel::thread_ap_block_state9_pp0_stage6_iter0() {
    ap_block_state9_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void forward_kernel::thread_ap_condition_2911() {
    ap_condition_2911 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage1_01001.read(), ap_const_boolean_0));
}

void forward_kernel::thread_ap_condition_2930() {
    ap_condition_2930 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_01001.read(), ap_const_boolean_0));
}

void forward_kernel::thread_ap_condition_2948() {
    ap_condition_2948 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage10_01001.read(), ap_const_boolean_0));
}

void forward_kernel::thread_ap_condition_2960() {
    ap_condition_2960 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage11_01001.read(), ap_const_boolean_0));
}

void forward_kernel::thread_ap_condition_2972() {
    ap_condition_2972 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage12_01001.read(), ap_const_boolean_0));
}

void forward_kernel::thread_ap_condition_3001() {
    ap_condition_3001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1955.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage3_01001.read(), ap_const_boolean_0));
}

void forward_kernel::thread_ap_condition_3013() {
    ap_condition_3013 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ifzero_reg_2000.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_block_pp1_stage2_01001.read(), ap_const_boolean_0));
}

void forward_kernel::thread_ap_condition_3029() {
    ap_condition_3029 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_2060.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage4_01001.read(), ap_const_boolean_0));
}

void forward_kernel::thread_ap_condition_3041() {
    ap_condition_3041 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, ifzero5_reg_2115.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage3_01001.read(), ap_const_boolean_0));
}

void forward_kernel::thread_ap_condition_pp0_exit_iter0_state3() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond3_fu_863_p2.read())) {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_condition_pp1_exit_iter0_state380() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten_fu_1188_p2.read())) {
        ap_condition_pp1_exit_iter0_state380 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state380 = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_condition_pp2_exit_iter0_state553() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten1_fu_1366_p2.read())) {
        ap_condition_pp2_exit_iter0_state553 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state553 = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_condition_pp3_exit_iter0_state724() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond6_fu_1518_p2.read())) {
        ap_condition_pp3_exit_iter0_state724 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state724 = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_condition_pp4_exit_iter0_state731() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond5_fu_1622_p2.read())) {
        ap_condition_pp4_exit_iter0_state731 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state731 = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_condition_pp5_exit_iter0_state777() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_1649_p2.read())) {
        ap_condition_pp5_exit_iter0_state777 = ap_const_logic_1;
    } else {
        ap_condition_pp5_exit_iter0_state777 = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read()) && 
         esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void forward_kernel::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void forward_kernel::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void forward_kernel::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void forward_kernel::thread_ap_enable_pp4() {
    ap_enable_pp4 = (ap_idle_pp4.read() ^ ap_const_logic_1);
}

void forward_kernel::thread_ap_enable_pp5() {
    ap_enable_pp5 = (ap_idle_pp5.read() ^ ap_const_logic_1);
}

void forward_kernel::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter15.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter15.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_idle_pp4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter4.read()))) {
        ap_idle_pp4 = ap_const_logic_1;
    } else {
        ap_idle_pp4 = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_idle_pp5() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter32.read()))) {
        ap_idle_pp5 = ap_const_logic_1;
    } else {
        ap_idle_pp5 = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read()) && 
         esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void forward_kernel::thread_ap_sig_ioackin_gmem_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) {
        ap_sig_ioackin_gmem_ARREADY = gmem_ARREADY.read();
    } else {
        ap_sig_ioackin_gmem_ARREADY = ap_const_logic_1;
    }
}

void forward_kernel::thread_ap_sig_ioackin_gmem_AWREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) {
        ap_sig_ioackin_gmem_AWREADY = gmem_AWREADY.read();
    } else {
        ap_sig_ioackin_gmem_AWREADY = ap_const_logic_1;
    }
}

void forward_kernel::thread_ap_sig_ioackin_gmem_WREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) {
        ap_sig_ioackin_gmem_WREADY = gmem_WREADY.read();
    } else {
        ap_sig_ioackin_gmem_WREADY = ap_const_logic_1;
    }
}

void forward_kernel::thread_arg_b1_i_0_sum_cast_fu_1126_p1() {
    arg_b1_i_0_sum_cast_fu_1126_p1 = esl_zext<64,63>(arg_b1_i_0_sum_fu_1122_p2.read());
}

void forward_kernel::thread_arg_b1_i_0_sum_fu_1122_p2() {
    arg_b1_i_0_sum_fu_1122_p2 = (!tmp_39_cast_reg_1689.read().is_01() || !tmp_44_cast_reg_1734.read().is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_39_cast_reg_1689.read()) + sc_biguint<63>(tmp_44_cast_reg_1734.read()));
}

void forward_kernel::thread_arg_b2_i_0_sum_cast_fu_1285_p1() {
    arg_b2_i_0_sum_cast_fu_1285_p1 = esl_zext<64,63>(arg_b2_i_0_sum_fu_1280_p2.read());
}

void forward_kernel::thread_arg_b2_i_0_sum_fu_1280_p2() {
    arg_b2_i_0_sum_fu_1280_p2 = (!tmp_41_cast_reg_1699.read().is_01() || !tmp_46_cast_mid2_fu_1277_p1.read().is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_41_cast_reg_1699.read()) + sc_biguint<63>(tmp_46_cast_mid2_fu_1277_p1.read()));
}

void forward_kernel::thread_arg_b3_i_0_sum_cast_fu_1485_p1() {
    arg_b3_i_0_sum_cast_fu_1485_p1 = esl_zext<64,63>(arg_b3_i_0_sum_fu_1480_p2.read());
}

void forward_kernel::thread_arg_b3_i_0_sum_fu_1480_p2() {
    arg_b3_i_0_sum_fu_1480_p2 = (!tmp_43_cast_reg_1709.read().is_01() || !tmp_56_cast_mid2_fu_1477_p1.read().is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_43_cast_reg_1709.read()) + sc_biguint<63>(tmp_56_cast_mid2_fu_1477_p1.read()));
}

void forward_kernel::thread_arg_src_data_i_0_sum_cast_fu_925_p1() {
    arg_src_data_i_0_sum_cast_fu_925_p1 = esl_zext<64,63>(arg_src_data_i_0_sum_fu_920_p2.read());
}

void forward_kernel::thread_arg_src_data_i_0_sum_fu_920_p2() {
    arg_src_data_i_0_sum_fu_920_p2 = (!tmp_cast_reg_1671.read().is_01() || !bus_addr70_i_i_cast_fu_916_p1.read().is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_cast_reg_1671.read()) + sc_biguint<63>(bus_addr70_i_i_cast_fu_916_p1.read()));
}

void forward_kernel::thread_arg_w01_i_0_sum_1_cast_fu_972_p1() {
    arg_w01_i_0_sum_1_cast_fu_972_p1 = esl_zext<64,63>(arg_w01_i_0_sum_1_fu_967_p2.read());
}

void forward_kernel::thread_arg_w01_i_0_sum_1_fu_967_p2() {
    arg_w01_i_0_sum_1_fu_967_p2 = (!tmp_38_cast_reg_1681.read().is_01() || !tmp_92_1_cast_fu_964_p1.read().is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_38_cast_reg_1681.read()) + sc_biguint<63>(tmp_92_1_cast_fu_964_p1.read()));
}

void forward_kernel::thread_arg_w01_i_0_sum_2_cast_fu_1014_p1() {
    arg_w01_i_0_sum_2_cast_fu_1014_p1 = esl_zext<64,63>(arg_w01_i_0_sum_2_fu_1009_p2.read());
}

void forward_kernel::thread_arg_w01_i_0_sum_2_fu_1009_p2() {
    arg_w01_i_0_sum_2_fu_1009_p2 = (!tmp_38_cast_reg_1681.read().is_01() || !tmp_92_2_cast_fu_1005_p1.read().is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_38_cast_reg_1681.read()) + sc_biguint<63>(tmp_92_2_cast_fu_1005_p1.read()));
}

void forward_kernel::thread_arg_w01_i_0_sum_3_cast_fu_1046_p1() {
    arg_w01_i_0_sum_3_cast_fu_1046_p1 = esl_zext<64,63>(arg_w01_i_0_sum_3_fu_1041_p2.read());
}

void forward_kernel::thread_arg_w01_i_0_sum_3_fu_1041_p2() {
    arg_w01_i_0_sum_3_fu_1041_p2 = (!tmp_38_cast_reg_1681.read().is_01() || !tmp_92_3_cast_fu_1038_p1.read().is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_38_cast_reg_1681.read()) + sc_biguint<63>(tmp_92_3_cast_fu_1038_p1.read()));
}

void forward_kernel::thread_arg_w01_i_0_sum_cast_fu_896_p1() {
    arg_w01_i_0_sum_cast_fu_896_p1 = esl_zext<64,63>(arg_w01_i_0_sum_fu_891_p2.read());
}

void forward_kernel::thread_arg_w01_i_0_sum_fu_891_p2() {
    arg_w01_i_0_sum_fu_891_p2 = (!tmp_38_cast_reg_1681.read().is_01() || !tmp_52_cast_fu_887_p1.read().is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_38_cast_reg_1681.read()) + sc_biguint<63>(tmp_52_cast_fu_887_p1.read()));
}

void forward_kernel::thread_arg_w12_i_0_sum_cast_fu_1256_p1() {
    arg_w12_i_0_sum_cast_fu_1256_p1 = esl_zext<64,63>(arg_w12_i_0_sum_fu_1251_p2.read());
}

void forward_kernel::thread_arg_w12_i_0_sum_fu_1251_p2() {
    arg_w12_i_0_sum_fu_1251_p2 = (!tmp_69_cast_fu_1248_p1.read().is_01() || !tmp_40_cast_reg_1694.read().is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_69_cast_fu_1248_p1.read()) + sc_biguint<63>(tmp_40_cast_reg_1694.read()));
}

void forward_kernel::thread_arg_w23_i_0_sum_cast_fu_1456_p1() {
    arg_w23_i_0_sum_cast_fu_1456_p1 = esl_zext<64,63>(arg_w23_i_0_sum_fu_1451_p2.read());
}

void forward_kernel::thread_arg_w23_i_0_sum_fu_1451_p2() {
    arg_w23_i_0_sum_fu_1451_p2 = (!tmp_79_cast_fu_1448_p1.read().is_01() || !tmp_42_cast_reg_1704.read().is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_79_cast_fu_1448_p1.read()) + sc_biguint<63>(tmp_42_cast_reg_1704.read()));
}

void forward_kernel::thread_bus_addr70_i_i_cast_fu_916_p1() {
    bus_addr70_i_i_cast_fu_916_p1 = esl_zext<63,8>(tmp_4_fu_906_p4.read());
}

void forward_kernel::thread_exitcond1_fu_839_p2() {
    exitcond1_fu_839_p2 = (!j_0_reg2mem102_0_i_i_reg_477.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg2mem102_0_i_i_reg_477.read() == ap_const_lv11_400);
}

void forward_kernel::thread_exitcond2_fu_1200_p2() {
    exitcond2_fu_1200_p2 = (!i2_0_reg2mem96_0_i_i_phi_fu_551_p4.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(i2_0_reg2mem96_0_i_i_phi_fu_551_p4.read() == ap_const_lv11_400);
}

void forward_kernel::thread_exitcond3_fu_863_p2() {
    exitcond3_fu_863_p2 = (!i_0_reg2mem100_0_i_i_phi_fu_505_p4.read().is_01() || !ap_const_lv10_310.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg2mem100_0_i_i_phi_fu_505_p4.read() == ap_const_lv10_310);
}

void forward_kernel::thread_exitcond4_fu_1378_p2() {
    exitcond4_fu_1378_p2 = (!i4_0_reg2mem92_0_i_i_phi_fu_597_p4.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(i4_0_reg2mem92_0_i_i_phi_fu_597_p4.read() == ap_const_lv11_400);
}

void forward_kernel::thread_exitcond5_fu_1622_p2() {
    exitcond5_fu_1622_p2 = (!i6_0_reg2mem82_0_i_i_phi_fu_632_p4.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i6_0_reg2mem82_0_i_i_phi_fu_632_p4.read() == ap_const_lv4_A);
}

void forward_kernel::thread_exitcond6_fu_1518_p2() {
    exitcond6_fu_1518_p2 = (!i5_0_reg2mem88_0_i_i_phi_fu_609_p4.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i5_0_reg2mem88_0_i_i_phi_fu_609_p4.read() == ap_const_lv4_A);
}

void forward_kernel::thread_exitcond_flatten1_fu_1366_p2() {
    exitcond_flatten1_fu_1366_p2 = (!indvar_flatten1_phi_fu_563_p4.read().is_01() || !ap_const_lv14_2800.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten1_phi_fu_563_p4.read() == ap_const_lv14_2800);
}

void forward_kernel::thread_exitcond_flatten_fu_1188_p2() {
    exitcond_flatten_fu_1188_p2 = (!indvar_flatten_phi_fu_517_p4.read().is_01() || !ap_const_lv21_100000.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_phi_fu_517_p4.read() == ap_const_lv21_100000);
}

void forward_kernel::thread_exitcond_fu_1649_p2() {
    exitcond_fu_1649_p2 = (!i7_0_reg2mem80_0_i_i_reg_651.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i7_0_reg2mem80_0_i_i_reg_651.read() == ap_const_lv4_A);
}

void forward_kernel::thread_gmem_ARADDR() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) {
        if (esl_seteq<1,1,1>(ap_condition_3041.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_5_reg_2119.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3029.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_6_reg_2104.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3013.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_3_reg_2004.read();
        } else if (esl_seteq<1,1,1>(ap_condition_3001.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_4_reg_1989.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read())) {
            gmem_ARADDR = gmem_addr_reg_1924.read();
        } else if (esl_seteq<1,1,1>(ap_condition_2972.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_9_reg_1788.read();
        } else if (esl_seteq<1,1,1>(ap_condition_2960.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_8_reg_1777.read();
        } else if (esl_seteq<1,1,1>(ap_condition_2948.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_7_reg_1771.read();
        } else if (esl_seteq<1,1,1>(ap_condition_2930.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_2_reg_1749.read();
        } else if (esl_seteq<1,1,1>(ap_condition_2911.read(), ap_const_boolean_1)) {
            gmem_ARADDR = gmem_addr_1_reg_1743.read();
        } else {
            gmem_ARADDR =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        gmem_ARADDR =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void forward_kernel::thread_gmem_ARVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_01001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_01001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_01001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_01001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_01001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1955.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_01001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ifzero_reg_2000.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_01001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_2060.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_01001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ifzero5_reg_2115.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_ARREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_01001.read(), ap_const_boolean_0)))) {
        gmem_ARVALID = ap_const_logic_1;
    } else {
        gmem_ARVALID = ap_const_logic_0;
    }
}

void forward_kernel::thread_gmem_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state776.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read()))) {
        gmem_AWVALID = ap_const_logic_1;
    } else {
        gmem_AWVALID = ap_const_logic_0;
    }
}

void forward_kernel::thread_gmem_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read()) && 
         esl_seteq<1,1,1>(gmem_BVALID.read(), ap_const_logic_1))) {
        gmem_BREADY = ap_const_logic_1;
    } else {
        gmem_BREADY = ap_const_logic_0;
    }
}

void forward_kernel::thread_gmem_RREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter3_exitcond3_reg_1739.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter3_exitcond3_reg_1739.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter3_exitcond3_reg_1739.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) && 
          esl_seteq<1,1,1>(gmem_RVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter12.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter12_exitcond_flatten_reg_1955.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter12.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter12_exitcond_flatten1_reg_2060.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter3_exitcond3_reg_1739.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter3_exitcond3_reg_1739.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter13.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter12_ifzero_reg_2000.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter13.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter12_ifzero5_reg_2115.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage5_11001.read(), ap_const_boolean_0)))) {
        gmem_RREADY = ap_const_logic_1;
    } else {
        gmem_RREADY = ap_const_logic_0;
    }
}

void forward_kernel::thread_gmem_WDATA() {
    gmem_WDATA = reg_703.read();
}

void forward_kernel::thread_gmem_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter31_exitcond_reg_2235.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0_01001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read()))) {
        gmem_WVALID = ap_const_logic_1;
    } else {
        gmem_WVALID = ap_const_logic_0;
    }
}

void forward_kernel::thread_gmem_blk_n_AR() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ifzero_reg_2000.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1955.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ifzero5_reg_2115.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_2060.read())))) {
        gmem_blk_n_AR = m_axi_gmem_ARREADY.read();
    } else {
        gmem_blk_n_AR = ap_const_logic_1;
    }
}

void forward_kernel::thread_gmem_blk_n_AW() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state776.read())) {
        gmem_blk_n_AW = m_axi_gmem_AWREADY.read();
    } else {
        gmem_blk_n_AW = ap_const_logic_1;
    }
}

void forward_kernel::thread_gmem_blk_n_B() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read())) {
        gmem_blk_n_B = m_axi_gmem_BVALID.read();
    } else {
        gmem_blk_n_B = ap_const_logic_1;
    }
}

void forward_kernel::thread_gmem_blk_n_R() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter3_exitcond3_reg_1739.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter3_exitcond3_reg_1739.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter3_exitcond3_reg_1739.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter3_exitcond3_reg_1739.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter3_exitcond3_reg_1739.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state364.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter12_ifzero_reg_2000.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter12_exitcond_flatten_reg_1955.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage5.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter12_ifzero5_reg_2115.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage6.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter12_exitcond_flatten1_reg_2060.read())))) {
        gmem_blk_n_R = m_axi_gmem_RVALID.read();
    } else {
        gmem_blk_n_R = ap_const_logic_1;
    }
}

void forward_kernel::thread_gmem_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter32.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp5_iter31_exitcond_reg_2235.read()))) {
        gmem_blk_n_W = m_axi_gmem_WREADY.read();
    } else {
        gmem_blk_n_W = ap_const_logic_1;
    }
}

void forward_kernel::thread_grp_exp_generic_float_s_fu_662_ap_start() {
    grp_exp_generic_float_s_fu_662_ap_start = ap_reg_grp_exp_generic_float_s_fu_662_ap_start.read();
}

void forward_kernel::thread_grp_fu_671_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state375.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state365.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state368.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state369.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state370.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state371.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state372.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state373.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state374.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)))) {
        grp_fu_671_ce = ap_const_logic_1;
    } else {
        grp_fu_671_ce = ap_const_logic_0;
    }
}

void forward_kernel::thread_grp_fu_671_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_2204.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage2_00001.read(), ap_const_boolean_0))) {
        grp_fu_671_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state365.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter4_exitcond3_reg_1739.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter4_exitcond3_reg_1739.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage21_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter4_exitcond3_reg_1739.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage32.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage32_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter4_exitcond3_reg_1739.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter13_exitcond_flatten_reg_1955.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter14.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter13_ifzero_reg_2000.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter13.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter13_exitcond_flatten1_reg_2060.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter14.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter13_ifzero5_reg_2115.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage4_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter3_exitcond5_reg_2204.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage1_00001.read(), ap_const_boolean_0)))) {
        grp_fu_671_opcode = ap_const_lv2_0;
    } else {
        grp_fu_671_opcode =  (sc_lv<2>) ("XX");
    }
}

void forward_kernel::thread_grp_fu_671_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        grp_fu_671_p0 = sum_0_reg2mem84_0_i_i_reg_639.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        grp_fu_671_p0 = reg_725.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter13.read()))) {
        grp_fu_671_p0 = tmp_63_mid2_reg_2145.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter13.read()))) {
        grp_fu_671_p0 = tmp_57_mid2_reg_2030.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state365.read())) {
        grp_fu_671_p0 = tmp_11_reg_489.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage32.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage32.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter14.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter14.read())))) {
        grp_fu_671_p0 = reg_708.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_671_p0 = tmp_11_phi_fu_493_p4.read();
    } else {
        grp_fu_671_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void forward_kernel::thread_grp_fu_671_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        grp_fu_671_p1 = tmp_i_i_i_reg_2223.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        grp_fu_671_p1 = max_0_reg2mem90_0_i_i_reg_616.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter14.read()))) {
        grp_fu_671_p1 = tmp_52_fu_1510_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter14.read()))) {
        grp_fu_671_p1 = tmp_38_fu_1310_p1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter13.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter13.read())))) {
        grp_fu_671_p1 = reg_697.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state365.read())) {
        grp_fu_671_p1 = tmp_19_fu_1136_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_671_p1 = tmp_99_3_reg_1919.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage32.read(), ap_const_boolean_0))) {
        grp_fu_671_p1 = tmp_99_2_reg_1914.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage21.read(), ap_const_boolean_0))) {
        grp_fu_671_p1 = tmp_99_1_reg_1909.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_fu_671_p1 = reg_703.read();
    } else {
        grp_fu_671_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void forward_kernel::thread_grp_fu_678_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage9_11001.read(), ap_const_boolean_0)))) {
        grp_fu_678_ce = ap_const_logic_1;
    } else {
        grp_fu_678_ce = ap_const_logic_0;
    }
}

void forward_kernel::thread_grp_fu_678_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage7.read(), ap_const_boolean_0))) {
        grp_fu_678_p0 = tmp_48_fu_1499_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_678_p0 = tmp_15_fu_1299_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0))) {
        grp_fu_678_p0 = tmp_93_3_fu_1118_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0))) {
        grp_fu_678_p0 = tmp_93_2_fu_1114_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0))) {
        grp_fu_678_p0 = tmp_93_1_fu_1110_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0))) {
        grp_fu_678_p0 = tmp_29_fu_1106_p1.read();
    } else {
        grp_fu_678_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void forward_kernel::thread_grp_fu_678_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage7.read(), ap_const_boolean_0))) {
        grp_fu_678_p1 = a2_load_reg_2135.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_678_p1 = a1_load_reg_2020.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage19.read(), ap_const_boolean_0))) {
        grp_fu_678_p1 = tmp_97_3_reg_1884.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage18.read(), ap_const_boolean_0))) {
        grp_fu_678_p1 = tmp_97_2_reg_1869.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage17.read(), ap_const_boolean_0))) {
        grp_fu_678_p1 = tmp_97_1_reg_1854.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage16.read(), ap_const_boolean_0))) {
        grp_fu_678_p1 = tmp_31_reg_1839.read();
    } else {
        grp_fu_678_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void forward_kernel::thread_grp_fu_682_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)))) {
        grp_fu_682_ce = ap_const_logic_1;
    } else {
        grp_fu_682_ce = ap_const_logic_0;
    }
}

void forward_kernel::thread_grp_fu_682_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter2.read()))) {
        grp_fu_682_p0 = a3_load_reg_2249.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0))) {
        grp_fu_682_p0 = tmp_98_3_reg_1904.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0))) {
        grp_fu_682_p0 = tmp_98_2_reg_1899.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0))) {
        grp_fu_682_p0 = tmp_98_1_reg_1894.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0))) {
        grp_fu_682_p0 = reg_697.read();
    } else {
        grp_fu_682_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void forward_kernel::thread_grp_fu_682_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter2.read()))) {
        grp_fu_682_p1 = sum_0_reg2mem84_0_i_i_reg_639.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage23.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage25.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage26.read(), ap_const_boolean_0)))) {
        grp_fu_682_p1 = ap_const_lv32_437F0000;
    } else {
        grp_fu_682_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void forward_kernel::thread_grp_fu_688_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)))) {
        grp_fu_688_ce = ap_const_logic_1;
    } else {
        grp_fu_688_ce = ap_const_logic_0;
    }
}

void forward_kernel::thread_grp_fu_688_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0))) {
            grp_fu_688_p0 = tmp_96_3_fu_1102_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0))) {
            grp_fu_688_p0 = tmp_96_2_fu_1098_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
            grp_fu_688_p0 = tmp_96_1_fu_1094_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
            grp_fu_688_p0 = tmp_30_fu_1090_p1.read();
        } else {
            grp_fu_688_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_688_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void forward_kernel::thread_grp_fu_691_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state378.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state377.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)))) {
        grp_fu_691_ce = ap_const_logic_1;
    } else {
        grp_fu_691_ce = ap_const_logic_0;
    }
}

void forward_kernel::thread_grp_fu_691_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_2160.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage2_00001.read(), ap_const_boolean_0))) {
        grp_fu_691_opcode = ap_const_lv5_4;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter15.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp1_iter14_ifzero_reg_2000.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3_00001.read(), ap_const_boolean_0)))) {
        grp_fu_691_opcode = ap_const_lv5_2;
    } else {
        grp_fu_691_opcode =  (sc_lv<5>) ("XXXXX");
    }
}

void forward_kernel::thread_grp_fu_691_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        grp_fu_691_p0 = max_0_reg2mem90_0_i_i_phi_fu_620_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter15.read()))) {
        grp_fu_691_p0 = reg_717.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read())) {
        grp_fu_691_p0 = reg_708.read();
    } else {
        grp_fu_691_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void forward_kernel::thread_grp_fu_691_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        grp_fu_691_p1 = reg_725.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state376.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter15.read())))) {
        grp_fu_691_p1 = ap_const_lv32_0;
    } else {
        grp_fu_691_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void forward_kernel::thread_i2_0_reg2mem96_0_i_i_mid2_fu_1220_p3() {
    i2_0_reg2mem96_0_i_i_mid2_fu_1220_p3 = (!exitcond2_reg_1964.read()[0].is_01())? sc_lv<11>(): ((exitcond2_reg_1964.read()[0].to_bool())? ap_const_lv11_0: i2_0_reg2mem96_0_i_i_reg_547.read());
}

void forward_kernel::thread_i2_0_reg2mem96_0_i_i_phi_fu_551_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1955.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        i2_0_reg2mem96_0_i_i_phi_fu_551_p4 = p_reg2mem50_0_i_i_reg_1995.read();
    } else {
        i2_0_reg2mem96_0_i_i_phi_fu_551_p4 = i2_0_reg2mem96_0_i_i_reg_547.read();
    }
}

void forward_kernel::thread_i4_0_reg2mem92_0_i_i_mid2_fu_1398_p3() {
    i4_0_reg2mem92_0_i_i_mid2_fu_1398_p3 = (!exitcond4_reg_2069.read()[0].is_01())? sc_lv<11>(): ((exitcond4_reg_2069.read()[0].to_bool())? ap_const_lv11_0: i4_0_reg2mem92_0_i_i_reg_593.read());
}

void forward_kernel::thread_i4_0_reg2mem92_0_i_i_phi_fu_597_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_2060.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        i4_0_reg2mem92_0_i_i_phi_fu_597_p4 = p_reg2mem36_0_i_i_reg_2110.read();
    } else {
        i4_0_reg2mem92_0_i_i_phi_fu_597_p4 = i4_0_reg2mem92_0_i_i_reg_593.read();
    }
}

void forward_kernel::thread_i5_0_reg2mem88_0_i_i_phi_fu_609_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_2160.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        i5_0_reg2mem88_0_i_i_phi_fu_609_p4 = p_reg2mem25_0_i_i_reg_2164.read();
    } else {
        i5_0_reg2mem88_0_i_i_phi_fu_609_p4 = i5_0_reg2mem88_0_i_i_reg_605.read();
    }
}

void forward_kernel::thread_i6_0_reg2mem82_0_i_i_phi_fu_632_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_2204.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        i6_0_reg2mem82_0_i_i_phi_fu_632_p4 = p_reg2mem16_0_i_i_reg_2208.read();
    } else {
        i6_0_reg2mem82_0_i_i_phi_fu_632_p4 = i6_0_reg2mem82_0_i_i_reg_628.read();
    }
}

void forward_kernel::thread_i_0_reg2mem100_0_i_i_phi_fu_505_p4() {
    if ((esl_seteq<1,1,1>(exitcond3_reg_1739.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        i_0_reg2mem100_0_i_i_phi_fu_505_p4 = p_reg2mem66_0_i_i_3_reg_1766.read();
    } else {
        i_0_reg2mem100_0_i_i_phi_fu_505_p4 = i_0_reg2mem100_0_i_i_reg_501.read();
    }
}

void forward_kernel::thread_ifzero5_fu_1471_p2() {
    ifzero5_fu_1471_p2 = (!p_reg2mem36_0_i_i_fu_1466_p2.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(p_reg2mem36_0_i_i_fu_1466_p2.read() == ap_const_lv11_400);
}

void forward_kernel::thread_ifzero_fu_1271_p2() {
    ifzero_fu_1271_p2 = (!p_reg2mem50_0_i_i_fu_1266_p2.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(p_reg2mem50_0_i_i_fu_1266_p2.read() == ap_const_lv11_400);
}

void forward_kernel::thread_indvar_flatten1_phi_fu_563_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_2060.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        indvar_flatten1_phi_fu_563_p4 = indvar_flatten_next1_reg_2064.read();
    } else {
        indvar_flatten1_phi_fu_563_p4 = indvar_flatten1_reg_559.read();
    }
}

void forward_kernel::thread_indvar_flatten_next1_fu_1372_p2() {
    indvar_flatten_next1_fu_1372_p2 = (!indvar_flatten1_phi_fu_563_p4.read().is_01() || !ap_const_lv14_1.is_01())? sc_lv<14>(): (sc_biguint<14>(indvar_flatten1_phi_fu_563_p4.read()) + sc_biguint<14>(ap_const_lv14_1));
}

void forward_kernel::thread_indvar_flatten_next_fu_1194_p2() {
    indvar_flatten_next_fu_1194_p2 = (!indvar_flatten_phi_fu_517_p4.read().is_01() || !ap_const_lv21_1.is_01())? sc_lv<21>(): (sc_biguint<21>(indvar_flatten_phi_fu_517_p4.read()) + sc_biguint<21>(ap_const_lv21_1));
}

void forward_kernel::thread_indvar_flatten_phi_fu_517_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1955.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        indvar_flatten_phi_fu_517_p4 = indvar_flatten_next_reg_1959.read();
    } else {
        indvar_flatten_phi_fu_517_p4 = indvar_flatten_reg_513.read();
    }
}

void forward_kernel::thread_j1_0_reg2mem98_0_i_i_cast_mid2_fu_1227_p1() {
    j1_0_reg2mem98_0_i_i_cast_mid2_fu_1227_p1 = esl_zext<20,11>(j1_0_reg2mem98_0_i_i_cast_mid2_v_reg_1970.read());
}

void forward_kernel::thread_j1_0_reg2mem98_0_i_i_cast_mid2_v_fu_1212_p3() {
    j1_0_reg2mem98_0_i_i_cast_mid2_v_fu_1212_p3 = (!exitcond2_fu_1200_p2.read()[0].is_01())? sc_lv<11>(): ((exitcond2_fu_1200_p2.read()[0].to_bool())? p_reg2mem47_0_i_i_dup_fu_1206_p2.read(): j1_0_reg2mem98_0_i_i_phi_fu_528_p4.read());
}

void forward_kernel::thread_j1_0_reg2mem98_0_i_i_phi_fu_528_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_1955.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        j1_0_reg2mem98_0_i_i_phi_fu_528_p4 = j1_0_reg2mem98_0_i_i_cast_mid2_v_reg_1970.read();
    } else {
        j1_0_reg2mem98_0_i_i_phi_fu_528_p4 = j1_0_reg2mem98_0_i_i_reg_524.read();
    }
}

void forward_kernel::thread_j3_0_reg2mem94_0_i_i_cast8_mid2_fu_1405_p1() {
    j3_0_reg2mem94_0_i_i_cast8_mid2_fu_1405_p1 = esl_zext<12,4>(j3_0_reg2mem94_0_i_i_cast8_mid2_v_reg_2075.read());
}

void forward_kernel::thread_j3_0_reg2mem94_0_i_i_cast8_mid2_v_fu_1390_p3() {
    j3_0_reg2mem94_0_i_i_cast8_mid2_v_fu_1390_p3 = (!exitcond4_fu_1378_p2.read()[0].is_01())? sc_lv<4>(): ((exitcond4_fu_1378_p2.read()[0].to_bool())? p_reg2mem34_0_i_i_dup_fu_1384_p2.read(): j3_0_reg2mem94_0_i_i_phi_fu_574_p4.read());
}

void forward_kernel::thread_j3_0_reg2mem94_0_i_i_phi_fu_574_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_2060.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        j3_0_reg2mem94_0_i_i_phi_fu_574_p4 = j3_0_reg2mem94_0_i_i_cast8_mid2_v_reg_2075.read();
    } else {
        j3_0_reg2mem94_0_i_i_phi_fu_574_p4 = j3_0_reg2mem94_0_i_i_reg_570.read();
    }
}

void forward_kernel::thread_j_0_reg2mem102_0_i_i_cast_fu_851_p1() {
    j_0_reg2mem102_0_i_i_cast_fu_851_p1 = esl_zext<21,11>(j_0_reg2mem102_0_i_i_reg_477.read());
}

void forward_kernel::thread_max_0_reg2mem90_0_i_i_phi_fu_620_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter1_exitcond6_reg_2160.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        max_0_reg2mem90_0_i_i_phi_fu_620_p4 = max_1_reg2mem86_0_i_i_fu_1614_p3.read();
    } else {
        max_0_reg2mem90_0_i_i_phi_fu_620_p4 = max_0_reg2mem90_0_i_i_reg_616.read();
    }
}

void forward_kernel::thread_max_0_reg2mem90_0_i_i_to_int_fu_1535_p1() {
    max_0_reg2mem90_0_i_i_to_int_fu_1535_p1 = max_0_reg2mem90_0_i_i_reg_616.read();
}

void forward_kernel::thread_max_1_reg2mem86_0_i_i_fu_1614_p3() {
    max_1_reg2mem86_0_i_i_fu_1614_p3 = (!tmp_63_fu_1609_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_63_fu_1609_p2.read()[0].to_bool())? ap_reg_pp3_iter1_reg_725.read(): max_0_reg2mem90_0_i_i_reg_616.read());
}

void forward_kernel::thread_notlhs1_fu_1332_p2() {
    notlhs1_fu_1332_p2 = (!tmp_40_fu_1318_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_40_fu_1318_p4.read() != ap_const_lv8_FF);
}

void forward_kernel::thread_notlhs2_fu_1571_p2() {
    notlhs2_fu_1571_p2 = (!tmp_55_fu_1539_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_55_fu_1539_p4.read() != ap_const_lv8_FF);
}

void forward_kernel::thread_notlhs3_fu_1583_p2() {
    notlhs3_fu_1583_p2 = (!tmp_57_fu_1557_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_fu_1557_p4.read() != ap_const_lv8_FF);
}

void forward_kernel::thread_notlhs_fu_1158_p2() {
    notlhs_fu_1158_p2 = (!tmp_21_fu_1144_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_21_fu_1144_p4.read() != ap_const_lv8_FF);
}

void forward_kernel::thread_notrhs1_fu_1338_p2() {
    notrhs1_fu_1338_p2 = (!tmp_45_fu_1328_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_45_fu_1328_p1.read() == ap_const_lv23_0);
}

void forward_kernel::thread_notrhs2_fu_1577_p2() {
    notrhs2_fu_1577_p2 = (!tmp_58_fu_1549_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_58_fu_1549_p1.read() == ap_const_lv23_0);
}

void forward_kernel::thread_notrhs3_fu_1589_p2() {
    notrhs3_fu_1589_p2 = (!tmp_68_fu_1567_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_68_fu_1567_p1.read() == ap_const_lv23_0);
}

void forward_kernel::thread_notrhs_fu_1164_p2() {
    notrhs_fu_1164_p2 = (!tmp_22_fu_1154_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_22_fu_1154_p1.read() == ap_const_lv23_0);
}

void forward_kernel::thread_p_reg2mem16_0_i_i_fu_1628_p2() {
    p_reg2mem16_0_i_i_fu_1628_p2 = (!i6_0_reg2mem82_0_i_i_phi_fu_632_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i6_0_reg2mem82_0_i_i_phi_fu_632_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void forward_kernel::thread_p_reg2mem25_0_i_i_fu_1524_p2() {
    p_reg2mem25_0_i_i_fu_1524_p2 = (!i5_0_reg2mem88_0_i_i_phi_fu_609_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i5_0_reg2mem88_0_i_i_phi_fu_609_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void forward_kernel::thread_p_reg2mem34_0_i_i_dup_fu_1384_p2() {
    p_reg2mem34_0_i_i_dup_fu_1384_p2 = (!ap_const_lv4_1.is_01() || !j3_0_reg2mem94_0_i_i_phi_fu_574_p4.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(j3_0_reg2mem94_0_i_i_phi_fu_574_p4.read()));
}

void forward_kernel::thread_p_reg2mem36_0_i_i_fu_1466_p2() {
    p_reg2mem36_0_i_i_fu_1466_p2 = (!ap_const_lv11_1.is_01() || !i4_0_reg2mem92_0_i_i_mid2_reg_2083.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_biguint<11>(i4_0_reg2mem92_0_i_i_mid2_reg_2083.read()));
}

void forward_kernel::thread_p_reg2mem47_0_i_i_dup_fu_1206_p2() {
    p_reg2mem47_0_i_i_dup_fu_1206_p2 = (!ap_const_lv11_1.is_01() || !j1_0_reg2mem98_0_i_i_phi_fu_528_p4.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_biguint<11>(j1_0_reg2mem98_0_i_i_phi_fu_528_p4.read()));
}

void forward_kernel::thread_p_reg2mem50_0_i_i_fu_1266_p2() {
    p_reg2mem50_0_i_i_fu_1266_p2 = (!ap_const_lv11_1.is_01() || !i2_0_reg2mem96_0_i_i_mid2_reg_1978.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_biguint<11>(i2_0_reg2mem96_0_i_i_mid2_reg_1978.read()));
}

void forward_kernel::thread_p_reg2mem63_0_i_i_fu_845_p2() {
    p_reg2mem63_0_i_i_fu_845_p2 = (!j_0_reg2mem102_0_i_i_reg_477.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(j_0_reg2mem102_0_i_i_reg_477.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void forward_kernel::thread_p_reg2mem66_0_i_i_3_fu_958_p2() {
    p_reg2mem66_0_i_i_3_fu_958_p2 = (!ap_const_lv10_4.is_01() || !i_0_reg2mem100_0_i_i_reg_501.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_4) + sc_biguint<10>(i_0_reg2mem100_0_i_i_reg_501.read()));
}

void forward_kernel::thread_p_reg2mem_0_i_i_fu_1655_p2() {
    p_reg2mem_0_i_i_fu_1655_p2 = (!i7_0_reg2mem80_0_i_i_reg_651.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i7_0_reg2mem80_0_i_i_reg_651.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void forward_kernel::thread_p_shl1_cast_fu_1418_p1() {
    p_shl1_cast_fu_1418_p1 = esl_zext<12,11>(tmp_56_fu_1412_p2.read());
}

void forward_kernel::thread_p_shl_cast_fu_1435_p1() {
    p_shl_cast_fu_1435_p1 = esl_zext<14,13>(p_shl_fu_1428_p3.read());
}

void forward_kernel::thread_p_shl_fu_1428_p3() {
    p_shl_fu_1428_p3 = esl_concat<10,3>(tmp_46_reg_2089.read(), ap_const_lv3_0);
}

void forward_kernel::thread_tmp1_cast_fu_1439_p1() {
    tmp1_cast_fu_1439_p1 = esl_zext<14,12>(tmp1_reg_2094.read());
}

void forward_kernel::thread_tmp1_fu_1422_p2() {
    tmp1_fu_1422_p2 = (!j3_0_reg2mem94_0_i_i_cast8_mid2_fu_1405_p1.read().is_01() || !p_shl1_cast_fu_1418_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(j3_0_reg2mem94_0_i_i_cast8_mid2_fu_1405_p1.read()) + sc_biguint<12>(p_shl1_cast_fu_1418_p1.read()));
}

void forward_kernel::thread_tmp_10_phi_fu_539_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter14_exitcond_flatten_reg_1955.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        tmp_10_phi_fu_539_p4 = grp_fu_671_p2.read();
    } else {
        tmp_10_phi_fu_539_p4 = tmp_10_reg_535.read();
    }
}

void forward_kernel::thread_tmp_11_phi_fu_493_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter5_exitcond3_reg_1739.read()))) {
        tmp_11_phi_fu_493_p4 = grp_fu_671_p2.read();
    } else {
        tmp_11_phi_fu_493_p4 = tmp_11_reg_489.read();
    }
}

void forward_kernel::thread_tmp_12_fu_1230_p1() {
    tmp_12_fu_1230_p1 = i2_0_reg2mem96_0_i_i_mid2_fu_1220_p3.read().range(10-1, 0);
}

void forward_kernel::thread_tmp_13_fu_1234_p3() {
    tmp_13_fu_1234_p3 = esl_concat<10,10>(tmp_12_fu_1230_p1.read(), ap_const_lv10_0);
}

void forward_kernel::thread_tmp_14_fu_1242_p2() {
    tmp_14_fu_1242_p2 = (!tmp_13_fu_1234_p3.read().is_01() || !j1_0_reg2mem98_0_i_i_cast_mid2_fu_1227_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_13_fu_1234_p3.read()) + sc_biguint<20>(j1_0_reg2mem98_0_i_i_cast_mid2_fu_1227_p1.read()));
}

void forward_kernel::thread_tmp_15_fu_1299_p1() {
    tmp_15_fu_1299_p1 = gmem_addr_4_read_reg_2015.read();
}

void forward_kernel::thread_tmp_16_fu_1295_p1() {
    tmp_16_fu_1295_p1 = esl_zext<64,11>(ap_reg_pp1_iter12_i2_0_reg2mem96_0_i_i_mid2_reg_1978.read());
}

void forward_kernel::thread_tmp_19_fu_1136_p1() {
    tmp_19_fu_1136_p1 = gmem_addr_read_reg_1930.read();
}

void forward_kernel::thread_tmp_21_fu_1144_p4() {
    tmp_21_fu_1144_p4 = tmp_48_to_int_fu_1140_p1.read().range(30, 23);
}

void forward_kernel::thread_tmp_22_fu_1154_p1() {
    tmp_22_fu_1154_p1 = tmp_48_to_int_fu_1140_p1.read().range(23-1, 0);
}

void forward_kernel::thread_tmp_23_fu_1170_p2() {
    tmp_23_fu_1170_p2 = (notrhs_reg_1945.read() | notlhs_reg_1940.read());
}

void forward_kernel::thread_tmp_25_fu_1174_p2() {
    tmp_25_fu_1174_p2 = (tmp_23_fu_1170_p2.read() & tmp_24_reg_1950.read());
}

void forward_kernel::thread_tmp_26_fu_935_p3() {
    tmp_26_fu_935_p3 = esl_concat<10,10>(i_0_reg2mem100_0_i_i_reg_501.read(), ap_const_lv10_0);
}

void forward_kernel::thread_tmp_27_fu_869_p4() {
    tmp_27_fu_869_p4 = i_0_reg2mem100_0_i_i_phi_fu_505_p4.read().range(9, 1);
}

void forward_kernel::thread_tmp_28_fu_879_p3() {
    tmp_28_fu_879_p3 = esl_concat<9,11>(tmp_27_fu_869_p4.read(), j_0_reg2mem102_0_i_i_reg_477.read());
}

void forward_kernel::thread_tmp_29_fu_1106_p1() {
    tmp_29_fu_1106_p1 = gmem_addr_1_read_reg_1794.read();
}

void forward_kernel::thread_tmp_30_fu_1090_p1() {
    tmp_30_fu_1090_p1 = esl_zext<32,8>(tmp_41_reg_1799.read());
}

void forward_kernel::thread_tmp_35_fu_987_p4() {
    tmp_35_fu_987_p4 = tmp_90_2_fu_982_p2.read().range(19, 11);
}

void forward_kernel::thread_tmp_36_fu_997_p3() {
    tmp_36_fu_997_p3 = esl_concat<9,11>(tmp_35_fu_987_p4.read(), j_0_reg2mem102_0_i_i_reg_477.read());
}

void forward_kernel::thread_tmp_37_phi_fu_585_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp2_iter14_exitcond_flatten1_reg_2060.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        tmp_37_phi_fu_585_p4 = grp_fu_671_p2.read();
    } else {
        tmp_37_phi_fu_585_p4 = tmp_37_reg_581.read();
    }
}

void forward_kernel::thread_tmp_38_cast_fu_765_p1() {
    tmp_38_cast_fu_765_p1 = esl_zext<63,62>(tmp_3_fu_755_p4.read());
}

void forward_kernel::thread_tmp_38_fu_1310_p1() {
    tmp_38_fu_1310_p1 = gmem_addr_3_read_reg_2035.read();
}

void forward_kernel::thread_tmp_39_cast_fu_779_p1() {
    tmp_39_cast_fu_779_p1 = esl_zext<63,62>(tmp_5_fu_769_p4.read());
}

void forward_kernel::thread_tmp_3_fu_755_p4() {
    tmp_3_fu_755_p4 = w01.read().range(63, 2);
}

void forward_kernel::thread_tmp_40_cast_fu_793_p1() {
    tmp_40_cast_fu_793_p1 = esl_zext<63,62>(tmp_6_fu_783_p4.read());
}

void forward_kernel::thread_tmp_40_fu_1318_p4() {
    tmp_40_fu_1318_p4 = tmp_65_to_int_fu_1314_p1.read().range(30, 23);
}

void forward_kernel::thread_tmp_40_mid2_fu_1344_p1() {
    tmp_40_mid2_fu_1344_p1 = esl_zext<64,11>(ap_reg_pp1_iter15_j1_0_reg2mem98_0_i_i_cast_mid2_v_reg_1970.read());
}

void forward_kernel::thread_tmp_41_cast_fu_807_p1() {
    tmp_41_cast_fu_807_p1 = esl_zext<63,62>(tmp_7_fu_797_p4.read());
}

void forward_kernel::thread_tmp_41_fu_1056_p1() {
    tmp_41_fu_1056_p1 = gmem_RDATA.read().range(8-1, 0);
}

void forward_kernel::thread_tmp_42_cast_fu_821_p1() {
    tmp_42_cast_fu_821_p1 = esl_zext<63,62>(tmp_8_fu_811_p4.read());
}

void forward_kernel::thread_tmp_42_fu_1348_p2() {
    tmp_42_fu_1348_p2 = (notrhs1_reg_2050.read() | notlhs1_reg_2045.read());
}

void forward_kernel::thread_tmp_43_cast_fu_835_p1() {
    tmp_43_cast_fu_835_p1 = esl_zext<63,62>(tmp_9_fu_825_p4.read());
}

void forward_kernel::thread_tmp_44_cast_fu_859_p1() {
    tmp_44_cast_fu_859_p1 = esl_zext<63,11>(j_0_reg2mem102_0_i_i_reg_477.read());
}

void forward_kernel::thread_tmp_44_fu_1352_p2() {
    tmp_44_fu_1352_p2 = (tmp_42_fu_1348_p2.read() & tmp_43_reg_2055.read());
}

void forward_kernel::thread_tmp_45_fu_1328_p1() {
    tmp_45_fu_1328_p1 = tmp_65_to_int_fu_1314_p1.read().range(23-1, 0);
}

void forward_kernel::thread_tmp_46_cast_mid2_fu_1277_p1() {
    tmp_46_cast_mid2_fu_1277_p1 = esl_zext<63,11>(ap_reg_pp1_iter1_j1_0_reg2mem98_0_i_i_cast_mid2_v_reg_1970.read());
}

void forward_kernel::thread_tmp_46_fu_1408_p1() {
    tmp_46_fu_1408_p1 = i4_0_reg2mem92_0_i_i_mid2_fu_1398_p3.read().range(10-1, 0);
}

void forward_kernel::thread_tmp_47_fu_1442_p2() {
    tmp_47_fu_1442_p2 = (!p_shl_cast_fu_1435_p1.read().is_01() || !tmp1_cast_fu_1439_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl_cast_fu_1435_p1.read()) + sc_biguint<14>(tmp1_cast_fu_1439_p1.read()));
}

void forward_kernel::thread_tmp_48_fu_1499_p1() {
    tmp_48_fu_1499_p1 = gmem_addr_6_read_reg_2130.read();
}

void forward_kernel::thread_tmp_48_to_int_fu_1140_p1() {
    tmp_48_to_int_fu_1140_p1 = reg_708.read();
}

void forward_kernel::thread_tmp_49_fu_1495_p1() {
    tmp_49_fu_1495_p1 = esl_zext<64,11>(ap_reg_pp2_iter12_i4_0_reg2mem92_0_i_i_mid2_reg_2083.read());
}

void forward_kernel::thread_tmp_4_fu_906_p4() {
    tmp_4_fu_906_p4 = i_0_reg2mem100_0_i_i_reg_501.read().range(9, 2);
}

void forward_kernel::thread_tmp_52_cast_fu_887_p1() {
    tmp_52_cast_fu_887_p1 = esl_zext<63,20>(tmp_28_fu_879_p3.read());
}

void forward_kernel::thread_tmp_52_fu_1510_p1() {
    tmp_52_fu_1510_p1 = gmem_addr_5_read_reg_2150.read();
}

void forward_kernel::thread_tmp_54_fu_1530_p1() {
    tmp_54_fu_1530_p1 = esl_zext<64,4>(i5_0_reg2mem88_0_i_i_phi_fu_609_p4.read());
}

void forward_kernel::thread_tmp_55_fu_1539_p4() {
    tmp_55_fu_1539_p4 = max_0_reg2mem90_0_i_i_to_int_fu_1535_p1.read().range(30, 23);
}

void forward_kernel::thread_tmp_56_cast_mid2_fu_1477_p1() {
    tmp_56_cast_mid2_fu_1477_p1 = esl_zext<63,4>(ap_reg_pp2_iter1_j3_0_reg2mem94_0_i_i_cast8_mid2_v_reg_2075.read());
}

void forward_kernel::thread_tmp_56_fu_1412_p2() {
    tmp_56_fu_1412_p2 = (!ap_const_lv11_1.is_01())? sc_lv<11>(): i4_0_reg2mem92_0_i_i_mid2_fu_1398_p3.read() << (unsigned short)ap_const_lv11_1.to_uint();
}

void forward_kernel::thread_tmp_56_mid2_fu_1514_p1() {
    tmp_56_mid2_fu_1514_p1 = esl_zext<64,4>(ap_reg_pp2_iter15_j3_0_reg2mem94_0_i_i_cast8_mid2_v_reg_2075.read());
}

void forward_kernel::thread_tmp_57_fu_1557_p4() {
    tmp_57_fu_1557_p4 = z3_load_to_int_fu_1553_p1.read().range(30, 23);
}

void forward_kernel::thread_tmp_57_mid2_fu_1303_p3() {
    tmp_57_mid2_fu_1303_p3 = (!ap_reg_pp1_iter13_exitcond2_reg_1964.read()[0].is_01())? sc_lv<32>(): ((ap_reg_pp1_iter13_exitcond2_reg_1964.read()[0].to_bool())? ap_const_lv32_0: tmp_10_phi_fu_539_p4.read());
}

void forward_kernel::thread_tmp_58_fu_1549_p1() {
    tmp_58_fu_1549_p1 = max_0_reg2mem90_0_i_i_to_int_fu_1535_p1.read().range(23-1, 0);
}

void forward_kernel::thread_tmp_59_fu_1595_p2() {
    tmp_59_fu_1595_p2 = (notrhs2_reg_2179.read() | notlhs2_reg_2174.read());
}

void forward_kernel::thread_tmp_5_fu_769_p4() {
    tmp_5_fu_769_p4 = b1.read().range(63, 2);
}

void forward_kernel::thread_tmp_60_fu_1599_p2() {
    tmp_60_fu_1599_p2 = (notrhs3_reg_2189.read() | notlhs3_reg_2184.read());
}

void forward_kernel::thread_tmp_61_fu_1603_p2() {
    tmp_61_fu_1603_p2 = (tmp_59_fu_1595_p2.read() & tmp_60_fu_1599_p2.read());
}

void forward_kernel::thread_tmp_63_fu_1609_p2() {
    tmp_63_fu_1609_p2 = (tmp_61_fu_1603_p2.read() & tmp_62_reg_2194.read());
}

void forward_kernel::thread_tmp_63_mid2_fu_1503_p3() {
    tmp_63_mid2_fu_1503_p3 = (!ap_reg_pp2_iter13_exitcond4_reg_2069.read()[0].is_01())? sc_lv<32>(): ((ap_reg_pp2_iter13_exitcond4_reg_2069.read()[0].to_bool())? ap_const_lv32_0: tmp_37_phi_fu_585_p4.read());
}

void forward_kernel::thread_tmp_64_fu_1639_p1() {
    tmp_64_fu_1639_p1 = esl_zext<64,62>(tmp_2_reg_1676.read());
}

void forward_kernel::thread_tmp_65_fu_1634_p1() {
    tmp_65_fu_1634_p1 = esl_zext<64,4>(i6_0_reg2mem82_0_i_i_phi_fu_632_p4.read());
}

void forward_kernel::thread_tmp_65_to_int_fu_1314_p1() {
    tmp_65_to_int_fu_1314_p1 = reg_717.read();
}

void forward_kernel::thread_tmp_66_fu_1661_p1() {
    tmp_66_fu_1661_p1 = esl_zext<64,4>(i7_0_reg2mem80_0_i_i_reg_651.read());
}

void forward_kernel::thread_tmp_68_fu_1567_p1() {
    tmp_68_fu_1567_p1 = z3_load_to_int_fu_1553_p1.read().range(23-1, 0);
}

void forward_kernel::thread_tmp_69_cast_fu_1248_p1() {
    tmp_69_cast_fu_1248_p1 = esl_zext<63,20>(tmp_14_reg_1984.read());
}

void forward_kernel::thread_tmp_6_fu_783_p4() {
    tmp_6_fu_783_p4 = w12.read().range(63, 2);
}

void forward_kernel::thread_tmp_79_cast_fu_1448_p1() {
    tmp_79_cast_fu_1448_p1 = esl_zext<63,14>(tmp_47_reg_2099.read());
}

void forward_kernel::thread_tmp_7_fu_797_p4() {
    tmp_7_fu_797_p4 = b2.read().range(63, 2);
}

void forward_kernel::thread_tmp_8_fu_811_p4() {
    tmp_8_fu_811_p4 = w23.read().range(63, 2);
}

void forward_kernel::thread_tmp_90_1_cast_fu_949_p1() {
    tmp_90_1_cast_fu_949_p1 = esl_zext<21,20>(tmp_90_1_fu_943_p2.read());
}

void forward_kernel::thread_tmp_90_1_fu_943_p2() {
    tmp_90_1_fu_943_p2 = (tmp_26_fu_935_p3.read() | ap_const_lv20_400);
}

void forward_kernel::thread_tmp_90_2_fu_982_p2() {
    tmp_90_2_fu_982_p2 = (tmp_26_reg_1755.read() | ap_const_lv20_800);
}

void forward_kernel::thread_tmp_90_3_cast_fu_1029_p1() {
    tmp_90_3_cast_fu_1029_p1 = esl_zext<21,20>(tmp_90_3_fu_1024_p2.read());
}

void forward_kernel::thread_tmp_90_3_fu_1024_p2() {
    tmp_90_3_fu_1024_p2 = (tmp_26_reg_1755.read() | ap_const_lv20_C00);
}

void forward_kernel::thread_tmp_91_1_fu_953_p2() {
    tmp_91_1_fu_953_p2 = (!j_0_reg2mem102_0_i_i_cast_reg_1723.read().is_01() || !tmp_90_1_cast_fu_949_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(j_0_reg2mem102_0_i_i_cast_reg_1723.read()) + sc_biguint<21>(tmp_90_1_cast_fu_949_p1.read()));
}

void forward_kernel::thread_tmp_91_3_fu_1033_p2() {
    tmp_91_3_fu_1033_p2 = (!j_0_reg2mem102_0_i_i_cast_reg_1723.read().is_01() || !tmp_90_3_cast_fu_1029_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(j_0_reg2mem102_0_i_i_cast_reg_1723.read()) + sc_biguint<21>(tmp_90_3_cast_fu_1029_p1.read()));
}

void forward_kernel::thread_tmp_92_1_cast_fu_964_p1() {
    tmp_92_1_cast_fu_964_p1 = esl_zext<63,21>(tmp_91_1_reg_1761.read());
}

void forward_kernel::thread_tmp_92_2_cast_fu_1005_p1() {
    tmp_92_2_cast_fu_1005_p1 = esl_zext<63,20>(tmp_36_fu_997_p3.read());
}

void forward_kernel::thread_tmp_92_3_cast_fu_1038_p1() {
    tmp_92_3_cast_fu_1038_p1 = esl_zext<63,21>(tmp_91_3_reg_1783.read());
}

void forward_kernel::thread_tmp_93_1_fu_1110_p1() {
    tmp_93_1_fu_1110_p1 = gmem_addr_7_read_reg_1844.read();
}

void forward_kernel::thread_tmp_93_2_fu_1114_p1() {
    tmp_93_2_fu_1114_p1 = gmem_addr_8_read_reg_1859.read();
}

void forward_kernel::thread_tmp_93_3_fu_1118_p1() {
    tmp_93_3_fu_1118_p1 = gmem_addr_9_read_reg_1874.read();
}

void forward_kernel::thread_tmp_96_1_fu_1094_p1() {
    tmp_96_1_fu_1094_p1 = esl_zext<32,8>(p_part_i_i_1_reg_1804.read());
}

void forward_kernel::thread_tmp_96_2_fu_1098_p1() {
    tmp_96_2_fu_1098_p1 = esl_zext<32,8>(p_part_i_i_2_reg_1809.read());
}

void forward_kernel::thread_tmp_96_3_fu_1102_p1() {
    tmp_96_3_fu_1102_p1 = esl_zext<32,8>(p_part_i_i_3_reg_1814.read());
}

void forward_kernel::thread_tmp_9_fu_825_p4() {
    tmp_9_fu_825_p4 = b3.read().range(63, 2);
}

void forward_kernel::thread_tmp_cast_fu_741_p1() {
    tmp_cast_fu_741_p1 = esl_zext<63,62>(tmp_fu_731_p4.read());
}

void forward_kernel::thread_tmp_fu_731_p4() {
    tmp_fu_731_p4 = src_data.read().range(63, 2);
}

void forward_kernel::thread_tmp_s_fu_855_p1() {
    tmp_s_fu_855_p1 = esl_zext<64,11>(j_0_reg2mem102_0_i_i_reg_477.read());
}

void forward_kernel::thread_z3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        z3_address0 =  (sc_lv<4>) (tmp_65_fu_1634_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        z3_address0 =  (sc_lv<4>) (tmp_54_fu_1530_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter15.read()))) {
        z3_address0 =  (sc_lv<4>) (tmp_56_mid2_fu_1514_p1.read());
    } else {
        z3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void forward_kernel::thread_z3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0)))) {
        z3_ce0 = ap_const_logic_1;
    } else {
        z3_ce0 = ap_const_logic_0;
    }
}

void forward_kernel::thread_z3_load_to_int_fu_1553_p1() {
    z3_load_to_int_fu_1553_p1 = reg_725.read();
}

void forward_kernel::thread_z3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp2_iter14_ifzero5_reg_2115.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0))) {
        z3_we0 = ap_const_logic_1;
    } else {
        z3_we0 = ap_const_logic_0;
    }
}

}


/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002983696250_3200882050_init();
    work_m_00000000001427022483_0858947855_init();
    xilinxcorelib_ver_m_00000000001358910285_1420689212_init();
    xilinxcorelib_ver_m_00000000001687936702_1862936372_init();
    xilinxcorelib_ver_m_00000000000277421008_1897377976_init();
    xilinxcorelib_ver_m_00000000001603977570_3643679153_init();
    work_m_00000000000403262735_1948799799_init();
    work_m_00000000001225806013_1206942748_init();
    work_m_00000000001865091448_2997739285_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001865091448_2997739285");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}

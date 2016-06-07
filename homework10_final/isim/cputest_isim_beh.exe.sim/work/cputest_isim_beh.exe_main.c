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
    work_m_00000000002589079378_3913188552_init();
    work_m_00000000003768637632_3301592064_init();
    work_m_00000000003353619839_0886308060_init();
    xilinxcorelib_ver_m_00000000001358910285_1420689212_init();
    xilinxcorelib_ver_m_00000000001687936702_1862936372_init();
    xilinxcorelib_ver_m_00000000000277421008_2567359768_init();
    xilinxcorelib_ver_m_00000000001603977570_4032029966_init();
    work_m_00000000002489990758_0317860448_init();
    work_m_00000000003387975640_0904823622_init();
    xilinxcorelib_ver_m_00000000000277421008_4161208565_init();
    xilinxcorelib_ver_m_00000000001603977570_2506477816_init();
    work_m_00000000000403262735_2356217838_init();
    work_m_00000000001884173120_1368203981_init();
    work_m_00000000002729329895_1200043877_init();
    work_m_00000000000827501967_3167923096_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000827501967_3167923096");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}

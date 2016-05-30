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
    work_m_00000000002589079378_2373528457_init();
    work_m_00000000001277570575_3233043740_init();
    xilinxcorelib_ver_m_00000000001358910285_2873178159_init();
    xilinxcorelib_ver_m_00000000001687936702_1862936372_init();
    xilinxcorelib_ver_m_00000000000277421008_2561415943_init();
    xilinxcorelib_ver_m_00000000001603977570_1863068372_init();
    work_m_00000000000403262735_1878273126_init();
    work_m_00000000003404199167_1333751481_init();
    work_m_00000000001642482328_0844393251_init();
    work_m_00000000000402145922_2580493143_init();
    work_m_00000000001832988861_3411084382_init();
    work_m_00000000003166303385_2098150157_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003166303385_2098150157");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}

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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/ComputerOrganazationHomework/Homework8_1/Expetiment8_1_DigitalOutput.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {0, 0};
static int ng7[] = {1, 0};



static void Always_31_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2008);
    *((int *)t2) = 1;
    t3 = (t0 + 1840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);
    t8 = (t0 + 876U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 255U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 255U);
    t17 = (t0 + 1104);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 8);
    goto LAB17;

LAB9:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 876U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t7 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 8);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t9 = (t0 + 1104);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB17;

LAB11:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 876U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t7 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 16);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 16);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t9 = (t0 + 1104);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB17;

LAB13:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 876U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t7 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 24);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 24);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t9 = (t0 + 1104);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB17;

LAB15:    xsi_set_current_line(39, ng0);

LAB18:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1196);
    t4 = (t3 + 36U);
    t8 = *((char **)t4);
    t9 = (t0 + 1104);
    t10 = (t0 + 1104);
    t17 = (t10 + 44U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t7, t18, 2, t19, 32, 1);
    t20 = (t7 + 4);
    t11 = *((unsigned int *)t20);
    t21 = (!(t11));
    if (t21 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t8 = (t0 + 1104);
    t9 = (t0 + 1104);
    t10 = (t9 + 44U);
    t17 = *((char **)t10);
    t18 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t7, t17, 2, t18, 32, 1);
    t19 = (t7 + 4);
    t11 = *((unsigned int *)t19);
    t6 = (!(t11));
    if (t6 == 1)
        goto LAB21;

LAB22:    goto LAB17;

LAB19:    xsi_vlogvar_assign_value(t9, t8, 0, *((unsigned int *)t7), 1);
    goto LAB20;

LAB21:    xsi_vlogvar_assign_value(t8, t4, 0, *((unsigned int *)t7), 1);
    goto LAB22;

}


extern void work_m_00000000001800595513_3411084382_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000001800595513_3411084382", "isim/UPUP8_1_test_isim_beh.exe.sim/work/m_00000000001800595513_3411084382.didat");
	xsi_register_executes(pe);
}

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
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

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
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);
    t8 = (t0 + 1196);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 255U);
    t19 = (t0 + 1104);
    xsi_vlogvar_assign_value(t19, t7, 0, 0, 8);
    goto LAB15;

LAB9:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1196);
    t4 = (t3 + 36U);
    t8 = *((char **)t4);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 8);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    t16 = (t15 >> 8);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 255U);
    t11 = (t0 + 1104);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 8);
    goto LAB15;

LAB11:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1196);
    t4 = (t3 + 36U);
    t8 = *((char **)t4);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 16);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    t16 = (t15 >> 16);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 255U);
    t11 = (t0 + 1104);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 8);
    goto LAB15;

LAB13:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1196);
    t4 = (t3 + 36U);
    t8 = *((char **)t4);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 24);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    t16 = (t15 >> 24);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 255U);
    t11 = (t0 + 1104);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 8);
    goto LAB15;

}


extern void work_m_00000000000764008377_3411084382_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000000764008377_3411084382", "isim/UPUP_8_1_test2_isim_beh.exe.sim/work/m_00000000000764008377_3411084382.didat");
	xsi_register_executes(pe);
}

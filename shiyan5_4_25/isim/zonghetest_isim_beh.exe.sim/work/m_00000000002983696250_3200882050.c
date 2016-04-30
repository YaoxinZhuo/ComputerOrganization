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
static const char *ng0 = "//Mac/Home/Desktop/ComputerOrganization/shiyan5_4_25/Register_4.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};



static void Cont_35_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1472);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1472);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 600U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2632);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 2572);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_36_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1472);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1472);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 692U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2668);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 2580);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_41_2(char *t0)
{
    char t13[8];
    char t18[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;

LAB0:    t1 = (t0 + 2376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2588);
    *((int *)t2) = 1;
    t3 = (t0 + 2404);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);

LAB21:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB22;

LAB23:
LAB24:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1564);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 6);

LAB10:    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB12;

LAB11:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB13;

LAB14:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:    goto LAB8;

LAB12:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB16:    xsi_set_current_line(46, ng0);

LAB18:    xsi_set_current_line(47, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 1472);
    t20 = (t0 + 1472);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t23 = (t0 + 1472);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 1564);
    t27 = (t26 + 36U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t18, t19, t22, t25, 2, 1, t28, 6, 2);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 6, t5, 32);
    t11 = (t0 + 1564);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 6);
    goto LAB10;

LAB19:    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, *((unsigned int *)t19), t39, 0LL);
    goto LAB20;

LAB22:    xsi_set_current_line(53, ng0);

LAB25:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t30 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t4);
    t36 = (t30 ^ t33);
    t37 = *((unsigned int *)t11);
    t40 = *((unsigned int *)t12);
    t41 = (t37 ^ t40);
    t42 = (t36 | t41);
    t43 = *((unsigned int *)t11);
    t44 = *((unsigned int *)t12);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB29;

LAB26:    if (t45 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t13) = 1;

LAB29:    t15 = (t13 + 4);
    t48 = *((unsigned int *)t15);
    t49 = (~(t48));
    t50 = *((unsigned int *)t13);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(59, ng0);

LAB36:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 1472);
    t4 = (t0 + 1472);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1472);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    t16 = (t0 + 784U);
    t17 = *((char **)t16);
    xsi_vlog_generic_convert_array_indices(t13, t18, t11, t15, 2, 1, t17, 5, 2);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t31 = (!(t6));
    t20 = (t18 + 4);
    t7 = *((unsigned int *)t20);
    t34 = (!(t7));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB37;

LAB38:
LAB32:    goto LAB24;

LAB28:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(55, ng0);

LAB33:    xsi_set_current_line(56, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 1472);
    t20 = (t0 + 1472);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t23 = (t0 + 1472);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 784U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t18, t19, t22, t25, 2, 1, t27, 5, 2);
    t26 = (t18 + 4);
    t53 = *((unsigned int *)t26);
    t31 = (!(t53));
    t28 = (t19 + 4);
    t54 = *((unsigned int *)t28);
    t34 = (!(t54));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB34;

LAB35:    goto LAB32;

LAB34:    t55 = *((unsigned int *)t18);
    t56 = *((unsigned int *)t19);
    t38 = (t55 - t56);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, *((unsigned int *)t19), t39, 0LL);
    goto LAB35;

LAB37:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t18);
    t38 = (t8 - t9);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t18), t39, 0LL);
    goto LAB38;

}


extern void work_m_00000000002983696250_3200882050_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Cont_36_1,(void *)Always_41_2};
	xsi_register_didat("work_m_00000000002983696250_3200882050", "isim/zonghetest_isim_beh.exe.sim/work/m_00000000002983696250_3200882050.didat");
	xsi_register_executes(pe);
}

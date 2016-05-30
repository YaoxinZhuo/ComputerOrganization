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
static const char *ng0 = "C:/ComputerOrganazationHomework/Homework8_1/ALU_8_1fromExperiment3.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {7U, 0U};



static void Always_29_0(char *t0)
{
    char t7[8];
    char t15[8];
    char t25[8];
    char t58[8];
    char t65[16];
    char t66[16];
    char t67[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1824);
    *((int *)t2) = 1;
    t3 = (t0 + 1656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 4294967295U);
    t16 = (t0 + 784U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 4294967295U);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t15);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t29 = (t7 + 4);
    t30 = (t15 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB24;

LAB25:
LAB26:    t57 = (t0 + 1012);
    xsi_vlogvar_assign_value(t57, t25, 0, 0, 32);
    goto LAB23;

LAB9:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 4294967295U);
    t16 = (t0 + 784U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 4294967295U);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t15);
    t28 = (t26 | t27);
    *((unsigned int *)t25) = t28;
    t29 = (t7 + 4);
    t30 = (t15 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB27;

LAB28:
LAB29:    t57 = (t0 + 1012);
    xsi_vlogvar_assign_value(t57, t25, 0, 0, 32);
    goto LAB23;

LAB11:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 4294967295U);
    t16 = (t0 + 784U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 4294967295U);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t15);
    t28 = (t26 ^ t27);
    *((unsigned int *)t25) = t28;
    t29 = (t7 + 4);
    t30 = (t15 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB30;

LAB31:
LAB32:    t39 = (t0 + 1012);
    xsi_vlogvar_assign_value(t39, t25, 0, 0, 32);
    goto LAB23;

LAB13:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t4 = (t15 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 4294967295U);
    t16 = (t0 + 784U);
    t17 = *((char **)t16);
    memset(t25, 0, 8);
    t16 = (t25 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t25) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 4294967295U);
    t26 = *((unsigned int *)t15);
    t27 = *((unsigned int *)t25);
    t28 = (t26 | t27);
    *((unsigned int *)t58) = t28;
    t29 = (t15 + 4);
    t30 = (t25 + 4);
    t31 = (t58 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB33;

LAB34:
LAB35:    memset(t7, 0, 8);
    t57 = (t7 + 4);
    t59 = (t58 + 4);
    t53 = *((unsigned int *)t58);
    t54 = (~(t53));
    *((unsigned int *)t7) = t54;
    *((unsigned int *)t57) = 0;
    if (*((unsigned int *)t59) != 0)
        goto LAB37;

LAB36:    t62 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t62 & 4294967295U);
    t63 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t63 & 4294967295U);
    t64 = (t0 + 1012);
    xsi_vlogvar_assign_value(t64, t7, 0, 0, 32);
    goto LAB23;

LAB15:    xsi_set_current_line(38, ng0);

LAB38:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    xsi_vlog_get_part_select_value(t65, 33, t5, 31, 0);
    t4 = (t0 + 784U);
    t8 = *((char **)t4);
    xsi_vlog_get_part_select_value(t66, 33, t8, 31, 0);
    xsi_vlog_unsigned_add(t67, 33, t65, 33, t66, 33);
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t67, 0, 0, 32);
    t16 = (t0 + 1104);
    xsi_vlogvar_assign_value(t16, t67, 32, 0, 1);
    goto LAB23;

LAB17:    xsi_set_current_line(42, ng0);

LAB39:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    xsi_vlog_get_part_select_value(t65, 33, t5, 31, 0);
    t4 = (t0 + 784U);
    t8 = *((char **)t4);
    xsi_vlog_get_part_select_value(t66, 33, t8, 31, 0);
    xsi_vlog_unsigned_minus(t67, 33, t65, 33, t66, 33);
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t67, 0, 0, 32);
    t16 = (t0 + 1104);
    xsi_vlogvar_assign_value(t16, t67, 32, 0, 1);
    goto LAB23;

LAB19:    xsi_set_current_line(46, ng0);

LAB40:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 4294967295U);
    t16 = (t0 + 784U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 4294967295U);
    memset(t25, 0, 8);
    t29 = (t7 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB42;

LAB41:    t30 = (t15 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB42;

LAB45:    if (*((unsigned int *)t7) < *((unsigned int *)t15))
        goto LAB43;

LAB44:    t39 = (t25 + 4);
    t26 = *((unsigned int *)t39);
    t27 = (~(t26));
    t28 = *((unsigned int *)t25);
    t32 = (t28 & t27);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(52, ng0);

LAB50:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB48:    goto LAB23;

LAB21:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 4294967295U);
    t16 = (t0 + 692U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 4294967295U);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_lshift(t25, 32, t7, 32, t15, 32);
    t29 = (t0 + 1012);
    xsi_vlogvar_assign_value(t29, t25, 0, 0, 32);
    goto LAB23;

LAB24:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t7 + 4);
    t40 = (t15 + 4);
    t41 = *((unsigned int *)t7);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t15);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = (t42 & t44);
    t50 = (t46 & t48);
    t51 = (~(t49));
    t52 = (~(t50));
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    t56 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t56 & t52);
    goto LAB26;

LAB27:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t7 + 4);
    t40 = (t15 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t7);
    t49 = (t43 & t42);
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t15);
    t50 = (t46 & t45);
    t47 = (~(t49));
    t48 = (~(t50));
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t47);
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & t48);
    goto LAB29;

LAB30:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    goto LAB32;

LAB33:    t37 = *((unsigned int *)t58);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t58) = (t37 | t38);
    t39 = (t15 + 4);
    t40 = (t25 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t15);
    t49 = (t43 & t42);
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t25);
    t50 = (t46 & t45);
    t47 = (~(t49));
    t48 = (~(t50));
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t47);
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & t48);
    goto LAB35;

LAB37:    t55 = *((unsigned int *)t7);
    t56 = *((unsigned int *)t59);
    *((unsigned int *)t7) = (t55 | t56);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t59);
    *((unsigned int *)t57) = (t60 | t61);
    goto LAB36;

LAB42:    t31 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB44;

LAB43:    *((unsigned int *)t25) = 1;
    goto LAB44;

LAB46:    xsi_set_current_line(48, ng0);

LAB49:    xsi_set_current_line(49, ng0);
    t40 = ((char*)((ng9)));
    t57 = (t0 + 1012);
    xsi_vlogvar_assign_value(t57, t40, 0, 0, 32);
    goto LAB48;

}


extern void work_m_00000000001277570575_3233043740_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000001277570575_3233043740", "isim/UPUP_8_1_test2_isim_beh.exe.sim/work/m_00000000001277570575_3233043740.didat");
	xsi_register_executes(pe);
}

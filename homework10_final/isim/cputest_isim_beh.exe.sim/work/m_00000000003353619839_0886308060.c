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
static const char *ng0 = "C:/ComputerOrganazationHomework/homework10_final/ALU.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};



static void Cont_31_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1104);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) > *((unsigned int *)t7))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB12:    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB13;

LAB14:    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t28, 8);

LAB21:    t29 = (t0 + 2204);
    t30 = (t29 + 32U);
    t31 = *((char **)t30);
    t32 = (t31 + 40U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t3 + 4);
    t37 = *((unsigned int *)t3);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 2152);
    *((int *)t42) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = ((char*)((ng1)));
    goto LAB14;

LAB15:    t28 = ((char*)((ng2)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 32, t23, 32, t28, 32);
    goto LAB21;

LAB19:    memcpy(t3, t23, 8);
    goto LAB21;

}

static void Always_33_1(char *t0)
{
    char t7[8];
    char t15[8];
    char t25[8];
    char t58[8];
    char t65[16];
    char t66[16];
    char t67[16];
    char t68[8];
    char t74[8];
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
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2160);
    *((int *)t2) = 1;
    t3 = (t0 + 1984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(37, ng0);

LAB24:    xsi_set_current_line(37, ng0);
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
        goto LAB25;

LAB26:
LAB27:    t57 = (t0 + 1104);
    xsi_vlogvar_assign_value(t57, t25, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB9:    xsi_set_current_line(38, ng0);

LAB28:    xsi_set_current_line(38, ng0);
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
        goto LAB29;

LAB30:
LAB31:    t57 = (t0 + 1104);
    xsi_vlogvar_assign_value(t57, t25, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB11:    xsi_set_current_line(39, ng0);

LAB32:    xsi_set_current_line(39, ng0);
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
        goto LAB33;

LAB34:
LAB35:    t39 = (t0 + 1104);
    xsi_vlogvar_assign_value(t39, t25, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB13:    xsi_set_current_line(40, ng0);

LAB36:    xsi_set_current_line(40, ng0);
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
        goto LAB37;

LAB38:
LAB39:    memset(t7, 0, 8);
    t57 = (t7 + 4);
    t59 = (t58 + 4);
    t53 = *((unsigned int *)t58);
    t54 = (~(t53));
    *((unsigned int *)t7) = t54;
    *((unsigned int *)t57) = 0;
    if (*((unsigned int *)t59) != 0)
        goto LAB41;

LAB40:    t62 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t62 & 4294967295U);
    t63 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t63 & 4294967295U);
    t64 = (t0 + 1104);
    xsi_vlogvar_assign_value(t64, t7, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB15:    xsi_set_current_line(41, ng0);

LAB42:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    xsi_vlog_get_part_select_value(t65, 33, t5, 31, 0);
    t4 = (t0 + 784U);
    t8 = *((char **)t4);
    xsi_vlog_get_part_select_value(t66, 33, t8, 31, 0);
    xsi_vlog_unsigned_add(t67, 33, t65, 33, t66, 33);
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t67, 0, 0, 32);
    t16 = (t0 + 1196);
    xsi_vlogvar_assign_value(t16, t67, 32, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t8 = (t0 + 784U);
    t16 = *((char **)t8);
    memset(t15, 0, 8);
    t8 = (t15 + 4);
    t17 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t17);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t8) = t24;
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t15);
    t28 = (t26 ^ t27);
    *((unsigned int *)t25) = t28;
    t18 = (t7 + 4);
    t29 = (t15 + 4);
    t30 = (t25 + 4);
    t32 = *((unsigned int *)t18);
    t33 = *((unsigned int *)t29);
    t34 = (t32 | t33);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t30);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB43;

LAB44:
LAB45:    t31 = (t0 + 1104);
    t39 = (t31 + 36U);
    t40 = *((char **)t39);
    memset(t58, 0, 8);
    t57 = (t58 + 4);
    t59 = (t40 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (t41 >> 31);
    t43 = (t42 & 1);
    *((unsigned int *)t58) = t43;
    t44 = *((unsigned int *)t59);
    t45 = (t44 >> 31);
    t46 = (t45 & 1);
    *((unsigned int *)t57) = t46;
    t47 = *((unsigned int *)t25);
    t48 = *((unsigned int *)t58);
    t51 = (t47 ^ t48);
    *((unsigned int *)t68) = t51;
    t64 = (t25 + 4);
    t69 = (t58 + 4);
    t70 = (t68 + 4);
    t52 = *((unsigned int *)t64);
    t53 = *((unsigned int *)t69);
    t54 = (t52 | t53);
    *((unsigned int *)t70) = t54;
    t55 = *((unsigned int *)t70);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB46;

LAB47:
LAB48:    t71 = (t0 + 1196);
    t72 = (t71 + 36U);
    t73 = *((char **)t72);
    t62 = *((unsigned int *)t68);
    t63 = *((unsigned int *)t73);
    t75 = (t62 ^ t63);
    *((unsigned int *)t74) = t75;
    t76 = (t68 + 4);
    t77 = (t73 + 4);
    t78 = (t74 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB49;

LAB50:
LAB51:    t86 = (t0 + 1288);
    xsi_vlogvar_assign_value(t86, t74, 0, 0, 1);
    goto LAB23;

LAB17:    xsi_set_current_line(42, ng0);

LAB52:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    xsi_vlog_get_part_select_value(t65, 33, t5, 31, 0);
    t4 = (t0 + 784U);
    t8 = *((char **)t4);
    xsi_vlog_get_part_select_value(t66, 33, t8, 31, 0);
    xsi_vlog_unsigned_minus(t67, 33, t65, 33, t66, 33);
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t67, 0, 0, 32);
    t16 = (t0 + 1196);
    xsi_vlogvar_assign_value(t16, t67, 32, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t8 = (t0 + 784U);
    t16 = *((char **)t8);
    memset(t15, 0, 8);
    t8 = (t15 + 4);
    t17 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t17);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t8) = t24;
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t15);
    t28 = (t26 ^ t27);
    *((unsigned int *)t25) = t28;
    t18 = (t7 + 4);
    t29 = (t15 + 4);
    t30 = (t25 + 4);
    t32 = *((unsigned int *)t18);
    t33 = *((unsigned int *)t29);
    t34 = (t32 | t33);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t30);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB53;

LAB54:
LAB55:    t31 = (t0 + 1104);
    t39 = (t31 + 36U);
    t40 = *((char **)t39);
    memset(t58, 0, 8);
    t57 = (t58 + 4);
    t59 = (t40 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (t41 >> 31);
    t43 = (t42 & 1);
    *((unsigned int *)t58) = t43;
    t44 = *((unsigned int *)t59);
    t45 = (t44 >> 31);
    t46 = (t45 & 1);
    *((unsigned int *)t57) = t46;
    t47 = *((unsigned int *)t25);
    t48 = *((unsigned int *)t58);
    t51 = (t47 ^ t48);
    *((unsigned int *)t68) = t51;
    t64 = (t25 + 4);
    t69 = (t58 + 4);
    t70 = (t68 + 4);
    t52 = *((unsigned int *)t64);
    t53 = *((unsigned int *)t69);
    t54 = (t52 | t53);
    *((unsigned int *)t70) = t54;
    t55 = *((unsigned int *)t70);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB56;

LAB57:
LAB58:    t71 = (t0 + 1196);
    t72 = (t71 + 36U);
    t73 = *((char **)t72);
    t62 = *((unsigned int *)t68);
    t63 = *((unsigned int *)t73);
    t75 = (t62 ^ t63);
    *((unsigned int *)t74) = t75;
    t76 = (t68 + 4);
    t77 = (t73 + 4);
    t78 = (t74 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB59;

LAB60:
LAB61:    t86 = (t0 + 1288);
    xsi_vlogvar_assign_value(t86, t74, 0, 0, 1);
    goto LAB23;

LAB19:    xsi_set_current_line(44, ng0);

LAB62:    xsi_set_current_line(45, ng0);
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
        goto LAB64;

LAB63:    t30 = (t15 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB64;

LAB67:    if (*((unsigned int *)t7) < *((unsigned int *)t15))
        goto LAB65;

LAB66:    t39 = (t25 + 4);
    t26 = *((unsigned int *)t39);
    t27 = (~(t26));
    t28 = *((unsigned int *)t25);
    t32 = (t28 & t27);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB70:    goto LAB23;

LAB21:    xsi_set_current_line(48, ng0);
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
    t29 = (t0 + 1104);
    xsi_vlogvar_assign_value(t29, t25, 0, 0, 32);
    goto LAB23;

LAB25:    t37 = *((unsigned int *)t25);
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
    goto LAB27;

LAB29:    t37 = *((unsigned int *)t25);
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
    goto LAB31;

LAB33:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    goto LAB35;

LAB37:    t37 = *((unsigned int *)t58);
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
    goto LAB39;

LAB41:    t55 = *((unsigned int *)t7);
    t56 = *((unsigned int *)t59);
    *((unsigned int *)t7) = (t55 | t56);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t59);
    *((unsigned int *)t57) = (t60 | t61);
    goto LAB40;

LAB43:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t25) = (t37 | t38);
    goto LAB45;

LAB46:    t60 = *((unsigned int *)t68);
    t61 = *((unsigned int *)t70);
    *((unsigned int *)t68) = (t60 | t61);
    goto LAB48;

LAB49:    t84 = *((unsigned int *)t74);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t74) = (t84 | t85);
    goto LAB51;

LAB53:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t25) = (t37 | t38);
    goto LAB55;

LAB56:    t60 = *((unsigned int *)t68);
    t61 = *((unsigned int *)t70);
    *((unsigned int *)t68) = (t60 | t61);
    goto LAB58;

LAB59:    t84 = *((unsigned int *)t74);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t74) = (t84 | t85);
    goto LAB61;

LAB64:    t31 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB66;

LAB65:    *((unsigned int *)t25) = 1;
    goto LAB66;

LAB68:    xsi_set_current_line(45, ng0);
    t40 = ((char*)((ng2)));
    t57 = (t0 + 1104);
    xsi_vlogvar_assign_value(t57, t40, 0, 0, 32);
    goto LAB70;

}


extern void work_m_00000000003353619839_0886308060_init()
{
	static char *pe[] = {(void *)Cont_31_0,(void *)Always_33_1};
	xsi_register_didat("work_m_00000000003353619839_0886308060", "isim/cputest_isim_beh.exe.sim/work/m_00000000003353619839_0886308060.didat");
	xsi_register_executes(pe);
}

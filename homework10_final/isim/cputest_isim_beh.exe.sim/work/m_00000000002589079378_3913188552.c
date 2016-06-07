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
static const char *ng0 = "C:/ComputerOrganazationHomework/homework10_final/register.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};



static void Cont_36_0(char *t0)
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

LAB0:    t1 = (t0 + 2180U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1564);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1564);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 600U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2724);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 2664);
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

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1564);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1564);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 692U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2760);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 2672);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_38_2(char *t0)
{
    char t13[8];
    char t18[8];
    char t19[8];
    char t63[8];
    char t69[8];
    char t101[8];
    char t102[8];
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
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    int t117;

LAB0:    t1 = (t0 + 2468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2680);
    *((int *)t2) = 1;
    t3 = (t0 + 2496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);

LAB20:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t30 = (t9 ^ t10);
    t33 = (t8 | t30);
    t36 = *((unsigned int *)t4);
    t37 = *((unsigned int *)t5);
    t40 = (t36 | t37);
    t41 = (~(t40));
    t42 = (t33 & t41);
    if (t42 != 0)
        goto LAB24;

LAB21:    if (t40 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t13) = 1;

LAB24:    memset(t18, 0, 8);
    t12 = (t13 + 4);
    t43 = *((unsigned int *)t12);
    t44 = (~(t43));
    t45 = *((unsigned int *)t13);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t12) != 0)
        goto LAB27;

LAB28:    t15 = (t18 + 4);
    t48 = *((unsigned int *)t18);
    t49 = *((unsigned int *)t15);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB29;

LAB30:    memcpy(t69, t18, 8);

LAB31:    t32 = (t69 + 4);
    t94 = *((unsigned int *)t32);
    t95 = (~(t94));
    t96 = *((unsigned int *)t69);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB43;

LAB44:
LAB45:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1656);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 6);

LAB10:    t2 = (t0 + 1656);
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

LAB16:    xsi_set_current_line(40, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 1564);
    t20 = (t0 + 1564);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t23 = (t0 + 1564);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 1656);
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
        goto LAB18;

LAB19:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 6, t5, 32);
    t11 = (t0 + 1656);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 6);
    goto LAB10;

LAB18:    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, *((unsigned int *)t19), t39, 0LL);
    goto LAB19;

LAB23:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t18) = 1;
    goto LAB28;

LAB27:    t14 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB28;

LAB29:    t16 = (t0 + 784U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng1)));
    memset(t19, 0, 8);
    t20 = (t17 + 4);
    t21 = (t16 + 4);
    t51 = *((unsigned int *)t17);
    t52 = *((unsigned int *)t16);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t20);
    t55 = *((unsigned int *)t21);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t20);
    t59 = *((unsigned int *)t21);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB33;

LAB32:    if (t60 != 0)
        goto LAB34;

LAB35:    memset(t63, 0, 8);
    t23 = (t19 + 4);
    t64 = *((unsigned int *)t23);
    t65 = (~(t64));
    t66 = *((unsigned int *)t19);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t23) != 0)
        goto LAB38;

LAB39:    t70 = *((unsigned int *)t18);
    t71 = *((unsigned int *)t63);
    t72 = (t70 & t71);
    *((unsigned int *)t69) = t72;
    t25 = (t18 + 4);
    t26 = (t63 + 4);
    t27 = (t69 + 4);
    t73 = *((unsigned int *)t25);
    t74 = *((unsigned int *)t26);
    t75 = (t73 | t74);
    *((unsigned int *)t27) = t75;
    t76 = *((unsigned int *)t27);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB31;

LAB33:    *((unsigned int *)t19) = 1;
    goto LAB35;

LAB34:    t22 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t63) = 1;
    goto LAB39;

LAB38:    t24 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB39;

LAB40:    t78 = *((unsigned int *)t69);
    t79 = *((unsigned int *)t27);
    *((unsigned int *)t69) = (t78 | t79);
    t28 = (t18 + 4);
    t29 = (t63 + 4);
    t80 = *((unsigned int *)t18);
    t81 = (~(t80));
    t82 = *((unsigned int *)t28);
    t83 = (~(t82));
    t84 = *((unsigned int *)t63);
    t85 = (~(t84));
    t86 = *((unsigned int *)t29);
    t87 = (~(t86));
    t31 = (t81 & t83);
    t34 = (t85 & t87);
    t88 = (~(t31));
    t89 = (~(t34));
    t90 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t90 & t88);
    t91 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t88);
    t93 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t93 & t89);
    goto LAB42;

LAB43:    xsi_set_current_line(44, ng0);

LAB46:    xsi_set_current_line(45, ng0);
    t99 = (t0 + 876U);
    t100 = *((char **)t99);
    t99 = (t0 + 1564);
    t103 = (t0 + 1564);
    t104 = (t103 + 44U);
    t105 = *((char **)t104);
    t106 = (t0 + 1564);
    t107 = (t106 + 40U);
    t108 = *((char **)t107);
    t109 = (t0 + 784U);
    t110 = *((char **)t109);
    xsi_vlog_generic_convert_array_indices(t101, t102, t105, t108, 2, 1, t110, 5, 2);
    t109 = (t101 + 4);
    t111 = *((unsigned int *)t109);
    t35 = (!(t111));
    t112 = (t102 + 4);
    t113 = *((unsigned int *)t112);
    t38 = (!(t113));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB47;

LAB48:    goto LAB45;

LAB47:    t114 = *((unsigned int *)t101);
    t115 = *((unsigned int *)t102);
    t116 = (t114 - t115);
    t117 = (t116 + 1);
    xsi_vlogvar_wait_assign_value(t99, t100, 0, *((unsigned int *)t102), t117, 0LL);
    goto LAB48;

}


extern void work_m_00000000002589079378_3913188552_init()
{
	static char *pe[] = {(void *)Cont_36_0,(void *)Cont_36_1,(void *)Always_38_2};
	xsi_register_didat("work_m_00000000002589079378_3913188552", "isim/cputest_isim_beh.exe.sim/work/m_00000000002589079378_3913188552.didat");
	xsi_register_executes(pe);
}

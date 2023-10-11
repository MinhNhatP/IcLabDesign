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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "G:/HK7/IClab/W3/COMBINE4MODE/COMBINE4MODE/MODE3_LEDCHAY_TRAIPHAI.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {7, 0};
static int ng4[] = {0, 0};



static void Always_30_0(char *t0)
{
    char t13[8];
    char t39[8];
    char t41[8];
    char t44[8];
    char t50[8];
    char t65[8];
    char t73[8];
    char t107[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
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
    unsigned int t63;
    char *t64;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);

LAB9:    xsi_set_current_line(34, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB10:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB17;

LAB14:    if (t25 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t13) = 1;

LAB17:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 8, t4, 8, t5, 32);
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 8);

LAB20:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t13, 32, t4, t12, 2, t14, 32, 1);
    t15 = ((char*)((ng2)));
    memset(t39, 0, 8);
    t28 = (t13 + 4);
    t29 = (t15 + 4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t15);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t28);
    t10 = *((unsigned int *)t29);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t28);
    t19 = *((unsigned int *)t29);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB24;

LAB21:    if (t20 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t39) = 1;

LAB24:    memset(t41, 0, 8);
    t36 = (t39 + 4);
    t23 = *((unsigned int *)t36);
    t24 = (~(t23));
    t25 = *((unsigned int *)t39);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t36) != 0)
        goto LAB27;

LAB28:    t38 = (t41 + 4);
    t30 = *((unsigned int *)t41);
    t31 = (!(t30));
    t32 = *((unsigned int *)t38);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB29;

LAB30:    memcpy(t73, t41, 8);

LAB31:    t101 = (t73 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (~(t102));
    t104 = *((unsigned int *)t73);
    t105 = (t104 & t103);
    t106 = (t105 != 0);
    if (t106 > 0)
        goto LAB43;

LAB44:
LAB45:    goto LAB12;

LAB16:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(41, ng0);
    t35 = (t0 + 1768);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_lshift(t39, 8, t37, 8, t38, 32);
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 8);
    goto LAB20;

LAB23:    t35 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t37 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB28;

LAB29:    t40 = (t0 + 1768);
    t42 = (t40 + 56U);
    t43 = *((char **)t42);
    t45 = (t0 + 1768);
    t46 = (t45 + 72U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t44, 32, t43, t47, 2, t48, 32, 1);
    t49 = ((char*)((ng2)));
    memset(t50, 0, 8);
    t51 = (t44 + 4);
    t52 = (t49 + 4);
    t34 = *((unsigned int *)t44);
    t53 = *((unsigned int *)t49);
    t54 = (t34 ^ t53);
    t55 = *((unsigned int *)t51);
    t56 = *((unsigned int *)t52);
    t57 = (t55 ^ t56);
    t58 = (t54 | t57);
    t59 = *((unsigned int *)t51);
    t60 = *((unsigned int *)t52);
    t61 = (t59 | t60);
    t62 = (~(t61));
    t63 = (t58 & t62);
    if (t63 != 0)
        goto LAB35;

LAB32:    if (t61 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t50) = 1;

LAB35:    memset(t65, 0, 8);
    t66 = (t50 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t50);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t66) != 0)
        goto LAB38;

LAB39:    t74 = *((unsigned int *)t41);
    t75 = *((unsigned int *)t65);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = (t41 + 4);
    t78 = (t65 + 4);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t77);
    t81 = *((unsigned int *)t78);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = *((unsigned int *)t79);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB31;

LAB34:    t64 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t65) = 1;
    goto LAB39;

LAB38:    t72 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB39;

LAB40:    t85 = *((unsigned int *)t73);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t73) = (t85 | t86);
    t87 = (t41 + 4);
    t88 = (t65 + 4);
    t89 = *((unsigned int *)t87);
    t90 = (~(t89));
    t91 = *((unsigned int *)t41);
    t92 = (t91 & t90);
    t93 = *((unsigned int *)t88);
    t94 = (~(t93));
    t95 = *((unsigned int *)t65);
    t96 = (t95 & t94);
    t97 = (~(t92));
    t98 = (~(t96));
    t99 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t99 & t97);
    t100 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t100 & t98);
    goto LAB42;

LAB43:    xsi_set_current_line(45, ng0);
    t108 = (t0 + 1928);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    memset(t107, 0, 8);
    t111 = (t110 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t110);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB49;

LAB47:    if (*((unsigned int *)t111) == 0)
        goto LAB46;

LAB48:    t117 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t117) = 1;

LAB49:    t118 = (t107 + 4);
    t119 = (t110 + 4);
    t120 = *((unsigned int *)t110);
    t121 = (~(t120));
    *((unsigned int *)t107) = t121;
    *((unsigned int *)t118) = 0;
    if (*((unsigned int *)t119) != 0)
        goto LAB51;

LAB50:    t126 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t126 & 1U);
    t127 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t127 & 1U);
    t128 = (t0 + 1928);
    xsi_vlogvar_assign_value(t128, t107, 0, 0, 1);
    goto LAB45;

LAB46:    *((unsigned int *)t107) = 1;
    goto LAB49;

LAB51:    t122 = *((unsigned int *)t107);
    t123 = *((unsigned int *)t119);
    *((unsigned int *)t107) = (t122 | t123);
    t124 = *((unsigned int *)t118);
    t125 = *((unsigned int *)t119);
    *((unsigned int *)t118) = (t124 | t125);
    goto LAB50;

}


extern void work_m_00000000003607862332_0000069476_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000003607862332_0000069476", "isim/TEST_TOP_isim_beh.exe.sim/work/m_00000000003607862332_0000069476.didat");
	xsi_register_executes(pe);
}

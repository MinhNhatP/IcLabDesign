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
static const char *ng0 = "G:/HK7/IClab/W3/COMBINE4MODE/COMBINE4MODE/MODE4_SANGDON.v";
static unsigned int ng1[] = {255U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {128U, 0U};
static unsigned int ng6[] = {192U, 0U};
static unsigned int ng7[] = {224U, 0U};
static unsigned int ng8[] = {240U, 0U};
static unsigned int ng9[] = {248U, 0U};
static unsigned int ng10[] = {252U, 0U};
static unsigned int ng11[] = {254U, 0U};



static void Always_28_0(char *t0)
{
    char t6[8];
    char t22[8];
    char t38[8];
    char t46[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t46, t6, 8);

LAB12:    t74 = (t46 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t46);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(36, ng0);

LAB28:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);

LAB31:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB43:    t5 = ((char*)((ng5)));
    t65 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t65 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng6)));
    t65 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t65 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng7)));
    t65 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t65 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng8)));
    t65 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t65 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng9)));
    t65 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t65 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng10)));
    t65 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t65 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng11)));
    t65 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t65 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng1)));
    t65 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t65 == 1)
        goto LAB58;

LAB59:
LAB60:
LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1768);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng1)));
    memset(t22, 0, 8);
    t23 = (t20 + 4);
    t24 = (t21 + 4);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB16;

LAB13:    if (t34 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t22) = 1;

LAB16:    memset(t38, 0, 8);
    t39 = (t22 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t22);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t39) != 0)
        goto LAB19;

LAB20:    t47 = *((unsigned int *)t6);
    t48 = *((unsigned int *)t38);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = (t6 + 4);
    t51 = (t38 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t38) = 1;
    goto LAB20;

LAB19:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB20;

LAB21:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t6 + 4);
    t61 = (t38 + 4);
    t62 = *((unsigned int *)t60);
    t63 = (~(t62));
    t64 = *((unsigned int *)t6);
    t65 = (t64 & t63);
    t66 = *((unsigned int *)t61);
    t67 = (~(t66));
    t68 = *((unsigned int *)t38);
    t69 = (t68 & t67);
    t70 = (~(t65));
    t71 = (~(t69));
    t72 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t72 & t70);
    t73 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t73 & t71);
    goto LAB23;

LAB24:    xsi_set_current_line(31, ng0);

LAB27:    xsi_set_current_line(32, ng0);
    t80 = ((char*)((ng2)));
    t81 = (t0 + 1768);
    xsi_vlogvar_assign_value(t81, t80, 0, 0, 8);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB26;

LAB29:    xsi_set_current_line(38, ng0);

LAB32:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 8, t12, 8, t13, 32);
    t18 = (t0 + 1768);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 8);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t13);
    t9 = (t7 | t8);
    *((unsigned int *)t6) = t9;
    t18 = (t4 + 4);
    t19 = (t13 + 4);
    t20 = (t6 + 4);
    t10 = *((unsigned int *)t18);
    t11 = *((unsigned int *)t19);
    t14 = (t10 | t11);
    *((unsigned int *)t20) = t14;
    t15 = *((unsigned int *)t20);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB33;

LAB34:
LAB35:    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 8);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    memset(t6, 0, 8);
    t18 = (t4 + 4);
    t19 = (t13 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t18);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t18);
    t17 = *((unsigned int *)t19);
    t25 = (t16 | t17);
    t26 = (~(t25));
    t27 = (t15 & t26);
    if (t27 != 0)
        goto LAB39;

LAB36:    if (t25 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t6) = 1;

LAB39:    t21 = (t6 + 4);
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB40;

LAB41:
LAB42:    goto LAB31;

LAB33:    t17 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t20);
    *((unsigned int *)t6) = (t17 | t25);
    t21 = (t4 + 4);
    t23 = (t13 + 4);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t65 = (t28 & t27);
    t29 = *((unsigned int *)t23);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t69 = (t31 & t30);
    t32 = (~(t65));
    t33 = (~(t69));
    t34 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t34 & t32);
    t35 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t35 & t33);
    goto LAB35;

LAB38:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(42, ng0);
    t23 = (t0 + 1768);
    t24 = (t23 + 56U);
    t37 = *((char **)t24);
    t39 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t37, 8, t39, 32);
    t45 = (t0 + 1768);
    xsi_vlogvar_assign_value(t45, t22, 0, 0, 8);
    goto LAB42;

LAB44:    xsi_set_current_line(50, ng0);

LAB61:    xsi_set_current_line(50, ng0);
    t12 = (t0 + 1768);
    t13 = (t12 + 56U);
    t18 = *((char **)t13);
    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 8);
    goto LAB60;

LAB46:    xsi_set_current_line(51, ng0);

LAB62:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1768);
    t5 = (t3 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    goto LAB60;

LAB48:    xsi_set_current_line(52, ng0);

LAB63:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1768);
    t5 = (t3 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    goto LAB60;

LAB50:    xsi_set_current_line(53, ng0);

LAB64:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1768);
    t5 = (t3 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    goto LAB60;

LAB52:    xsi_set_current_line(54, ng0);

LAB65:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1768);
    t5 = (t3 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    goto LAB60;

LAB54:    xsi_set_current_line(55, ng0);

LAB66:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1768);
    t5 = (t3 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    goto LAB60;

LAB56:    xsi_set_current_line(56, ng0);

LAB67:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1768);
    t5 = (t3 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    goto LAB60;

LAB58:    xsi_set_current_line(57, ng0);

LAB68:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB60;

}


extern void work_m_00000000002024848146_3096238361_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000002024848146_3096238361", "isim/TEST_TOP_isim_beh.exe.sim/work/m_00000000002024848146_3096238361.didat");
	xsi_register_executes(pe);
}

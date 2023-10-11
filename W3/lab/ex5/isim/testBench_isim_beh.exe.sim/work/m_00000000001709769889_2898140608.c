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
static const char *ng0 = "G:/HK7/IClab/W3/lab/ex5/ShiftLed.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {7, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {255U, 0U};



static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t20[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
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

LAB7:    xsi_set_current_line(40, ng0);
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

LAB11:    xsi_set_current_line(65, ng0);

LAB37:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(77, ng0);

LAB51:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_lshift(t20, 8, t4, 8, t5, 32);
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t20, 0, 0, 8);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t20, t11, 2, t12, 32, 1);
    t18 = (t20 + 4);
    t6 = *((unsigned int *)t18);
    t27 = (!(t6));
    if (t27 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t20, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t13 = (t9 ^ t10);
    t14 = (t8 | t13);
    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t12);
    t17 = (t15 | t16);
    t26 = (~(t17));
    t28 = (t14 & t26);
    if (t28 != 0)
        goto LAB57;

LAB54:    if (t17 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t20) = 1;

LAB57:    t19 = (t20 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    t31 = *((unsigned int *)t20);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB58;

LAB59:
LAB60:
LAB40:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);

LAB9:    xsi_set_current_line(36, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(53, ng0);

LAB27:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_rshift(t20, 8, t4, 8, t5, 32);
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t20, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t20, t11, 2, t12, 32, 1);
    t18 = (t20 + 4);
    t6 = *((unsigned int *)t18);
    t27 = (!(t6));
    if (t27 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t20, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t13 = (t9 ^ t10);
    t14 = (t8 | t13);
    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t12);
    t17 = (t15 | t16);
    t26 = (~(t17));
    t28 = (t14 & t26);
    if (t28 != 0)
        goto LAB33;

LAB30:    if (t17 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t20) = 1;

LAB33:    t19 = (t20 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    t31 = *((unsigned int *)t20);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB34;

LAB35:
LAB36:
LAB16:    goto LAB12;

LAB14:    xsi_set_current_line(43, ng0);

LAB17:    xsi_set_current_line(45, ng0);
    t18 = ((char*)((ng2)));
    t19 = (t0 + 1768);
    t21 = (t0 + 1768);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t20, t23, 2, t24, 32, 1);
    t25 = (t20 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    if (t27 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_rshift(t20, 8, t4, 8, t5, 32);
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t20, 0, 0, 8);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t20, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t13 = (t9 ^ t10);
    t14 = (t8 | t13);
    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t12);
    t17 = (t15 | t16);
    t26 = (~(t17));
    t28 = (t14 & t26);
    if (t28 != 0)
        goto LAB23;

LAB20:    if (t17 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t20) = 1;

LAB23:    t19 = (t20 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    t31 = *((unsigned int *)t20);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB16;

LAB18:    xsi_vlogvar_assign_value(t19, t18, 0, *((unsigned int *)t20), 1);
    goto LAB19;

LAB22:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(49, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB26;

LAB28:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t20), 1);
    goto LAB29;

LAB32:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(59, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB36;

LAB38:    xsi_set_current_line(67, ng0);

LAB41:    xsi_set_current_line(69, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1768);
    t18 = (t0 + 1768);
    t19 = (t18 + 72U);
    t21 = *((char **)t19);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t20, t21, 2, t22, 32, 1);
    t23 = (t20 + 4);
    t13 = *((unsigned int *)t23);
    t27 = (!(t13));
    if (t27 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_lshift(t20, 8, t4, 8, t5, 32);
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t20, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t20, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t13 = (t9 ^ t10);
    t14 = (t8 | t13);
    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t12);
    t17 = (t15 | t16);
    t26 = (~(t17));
    t28 = (t14 & t26);
    if (t28 != 0)
        goto LAB47;

LAB44:    if (t17 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t20) = 1;

LAB47:    t19 = (t20 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    t31 = *((unsigned int *)t20);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB48;

LAB49:
LAB50:    goto LAB40;

LAB42:    xsi_vlogvar_assign_value(t12, t11, 0, *((unsigned int *)t20), 1);
    goto LAB43;

LAB46:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(73, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB50;

LAB52:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t20), 1);
    goto LAB53;

LAB56:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(83, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB60;

}


extern void work_m_00000000001709769889_2898140608_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_32_1};
	xsi_register_didat("work_m_00000000001709769889_2898140608", "isim/testBench_isim_beh.exe.sim/work/m_00000000001709769889_2898140608.didat");
	xsi_register_executes(pe);
}

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
static const char *ng0 = "G:/HK7/IClab/W1/lab4/Demux1to4/demux14.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {3, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};



static void Always_28_0(char *t0)
{
    char t9[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    unsigned int t19;
    int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    char *t30;
    int t31;

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1640);
    *((int *)t2) = 1;
    t3 = (t0 + 1472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);

LAB16:    xsi_set_current_line(31, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 920);
    t10 = (t0 + 920);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t9, t12, 2, t13, 32, 1);
    t14 = (t9 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    t4 = (t0 + 920);
    t7 = (t4 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    t11 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t17, t18, ((int*)(t8)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t9 + 4);
    t15 = *((unsigned int *)t12);
    t6 = (!(t15));
    t13 = (t17 + 4);
    t19 = *((unsigned int *)t13);
    t16 = (!(t19));
    t20 = (t6 && t16);
    t14 = (t18 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (!(t21));
    t23 = (t20 && t22);
    if (t23 == 1)
        goto LAB19;

LAB20:    goto LAB15;

LAB9:    xsi_set_current_line(34, ng0);

LAB21:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 920);
    t7 = (t0 + 920);
    t8 = (t7 + 44U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t9, t10, 2, t11, 32, 1);
    t12 = (t9 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 920);
    t4 = (t0 + 920);
    t7 = (t4 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    t4 = (t0 + 920);
    t7 = (t4 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    t11 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t9, t17, t18, ((int*)(t8)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t9 + 4);
    t15 = *((unsigned int *)t12);
    t6 = (!(t15));
    t13 = (t17 + 4);
    t19 = *((unsigned int *)t13);
    t16 = (!(t19));
    t20 = (t6 && t16);
    t14 = (t18 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (!(t21));
    t23 = (t20 && t22);
    if (t23 == 1)
        goto LAB26;

LAB27:    goto LAB15;

LAB11:    xsi_set_current_line(39, ng0);

LAB28:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 920);
    t7 = (t0 + 920);
    t8 = (t7 + 44U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng4)));
    t12 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t9, t17, t18, ((int*)(t10)), 2, t11, 32, 1, t12, 32, 1);
    t13 = (t9 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (!(t15));
    t14 = (t17 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t22 = (t16 && t20);
    t30 = (t18 + 4);
    t21 = *((unsigned int *)t30);
    t23 = (!(t21));
    t25 = (t22 && t23);
    if (t25 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 920);
    t4 = (t0 + 920);
    t7 = (t4 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    t4 = (t0 + 920);
    t7 = (t4 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB33;

LAB34:    goto LAB15;

LAB13:    xsi_set_current_line(44, ng0);

LAB35:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 920);
    t7 = (t0 + 920);
    t8 = (t7 + 44U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng6)));
    t12 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t9, t17, t18, ((int*)(t10)), 2, t11, 32, 1, t12, 32, 1);
    t13 = (t9 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (!(t15));
    t14 = (t17 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t22 = (t16 && t20);
    t30 = (t18 + 4);
    t21 = *((unsigned int *)t30);
    t23 = (!(t21));
    t25 = (t22 && t23);
    if (t25 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 920);
    t4 = (t0 + 920);
    t7 = (t4 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB38;

LAB39:    goto LAB15;

LAB17:    xsi_vlogvar_assign_value(t7, t8, 0, *((unsigned int *)t9), 1);
    goto LAB18;

LAB19:    t24 = *((unsigned int *)t18);
    t25 = (t24 + 0);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t17);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t3, t2, t25, *((unsigned int *)t17), t29);
    goto LAB20;

LAB22:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t9), 1);
    goto LAB23;

LAB24:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t9), 1);
    goto LAB25;

LAB26:    t24 = *((unsigned int *)t18);
    t25 = (t24 + 0);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t17);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t3, t2, t25, *((unsigned int *)t17), t29);
    goto LAB27;

LAB29:    t24 = *((unsigned int *)t18);
    t28 = (t24 + 0);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t17);
    t29 = (t26 - t27);
    t31 = (t29 + 1);
    xsi_vlogvar_assign_value(t4, t3, t28, *((unsigned int *)t17), t31);
    goto LAB30;

LAB31:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t9), 1);
    goto LAB32;

LAB33:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t9), 1);
    goto LAB34;

LAB36:    t24 = *((unsigned int *)t18);
    t28 = (t24 + 0);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t17);
    t29 = (t26 - t27);
    t31 = (t29 + 1);
    xsi_vlogvar_assign_value(t4, t3, t28, *((unsigned int *)t17), t31);
    goto LAB37;

LAB38:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t9), 1);
    goto LAB39;

}


extern void work_m_00000000002291354588_1647305004_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000002291354588_1647305004", "isim/test14_isim_beh.exe.sim/work/m_00000000002291354588_1647305004.didat");
	xsi_register_executes(pe);
}

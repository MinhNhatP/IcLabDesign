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
static const char *ng0 = "G:/HK7/IClab/W1/lab5/Mux4to1/test41.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};



static void Initial_41_0(char *t0)
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
    unsigned int t11;
    int t12;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);

LAB4:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB7:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB8;

LAB9:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB10:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB11;

LAB12:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB13:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB14;

LAB15:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB16:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB17;

LAB18:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB20:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB21;

LAB22:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB23:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB24;

LAB25:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB26:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB27;

LAB28:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB29:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB30;

LAB31:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB33:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB34;

LAB35:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB36:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB37;

LAB38:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB39:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB40;

LAB41:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB42:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB43;

LAB44:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB46:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB47;

LAB48:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB49:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB50;

LAB51:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB52:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB53;

LAB54:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB55:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB56;

LAB57:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB1;

}


extern void work_m_00000000002928467923_3619580100_init()
{
	static char *pe[] = {(void *)Initial_41_0};
	xsi_register_didat("work_m_00000000002928467923_3619580100", "isim/test41_isim_beh.exe.sim/work/m_00000000002928467923_3619580100.didat");
	xsi_register_executes(pe);
}

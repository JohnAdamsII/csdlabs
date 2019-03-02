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
static const char *ng0 = "G:/My Drive/Classes/CSD_Lab/Labs/Lab4/John_FSM.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};



static void Always_44_0(char *t0)
{
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
    int t13;

LAB0:    t1 = (t0 + 2844U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3040);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1172U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2320);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB9:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t13 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(45, ng0);

LAB8:    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(53, ng0);

LAB21:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1860);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2044);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2228);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1264U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1356U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB28:
LAB24:    goto LAB20;

LAB12:    xsi_set_current_line(77, ng0);

LAB30:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2044);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1264U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1356U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB37:
LAB33:    goto LAB20;

LAB14:    xsi_set_current_line(97, ng0);

LAB39:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2044);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1264U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1356U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB46:
LAB42:    goto LAB20;

LAB16:    xsi_set_current_line(120, ng0);

LAB48:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2044);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1264U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 1356U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB55:
LAB51:    goto LAB20;

LAB18:    xsi_set_current_line(144, ng0);

LAB57:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2044);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 1632U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB60:    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB20;

LAB22:    xsi_set_current_line(62, ng0);

LAB25:    xsi_set_current_line(63, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2044);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB24;

LAB26:    xsi_set_current_line(68, ng0);

LAB29:    xsi_set_current_line(69, ng0);
    t5 = ((char*)((ng5)));
    t11 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB28;

LAB31:    xsi_set_current_line(82, ng0);

LAB34:    xsi_set_current_line(83, ng0);
    t5 = ((char*)((ng5)));
    t11 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2044);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB35:    xsi_set_current_line(88, ng0);

LAB38:    xsi_set_current_line(89, ng0);
    t5 = ((char*)((ng6)));
    t11 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB40:    xsi_set_current_line(103, ng0);

LAB43:    xsi_set_current_line(104, ng0);
    t5 = ((char*)((ng6)));
    t11 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2044);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB42;

LAB44:    xsi_set_current_line(109, ng0);

LAB47:    xsi_set_current_line(110, ng0);
    t5 = ((char*)((ng7)));
    t11 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB46;

LAB49:    xsi_set_current_line(126, ng0);

LAB52:    xsi_set_current_line(127, ng0);
    t5 = ((char*)((ng7)));
    t11 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2044);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB51;

LAB53:    xsi_set_current_line(132, ng0);

LAB56:    xsi_set_current_line(133, ng0);
    t5 = ((char*)((ng8)));
    t11 = (t0 + 2320);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB55;

LAB58:    xsi_set_current_line(150, ng0);
    t5 = ((char*)((ng4)));
    t11 = (t0 + 1860);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 1);
    goto LAB60;

}


extern void work_m_00000000003403579699_2858508475_init()
{
	static char *pe[] = {(void *)Always_44_0};
	xsi_register_didat("work_m_00000000003403579699_2858508475", "isim/T1_isim_beh.exe.sim/work/m_00000000003403579699_2858508475.didat");
	xsi_register_executes(pe);
}

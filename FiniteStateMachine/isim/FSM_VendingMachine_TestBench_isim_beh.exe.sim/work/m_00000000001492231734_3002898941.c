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
static const char *ng0 = "F:/Xilinx/Working/FiniteStateMachine/FSM_VendingMachine.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};



static void Always_48_0(char *t0)
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

LAB0:    t1 = (t0 + 5328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5648);
    *((int *)t2) = 1;
    t3 = (t0 + 5360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2568U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB9:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t13 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB28;

LAB29:
LAB30:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(49, ng0);

LAB8:    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(57, ng0);

LAB31:    xsi_set_current_line(59, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3608);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB42:
LAB38:
LAB34:    goto LAB30;

LAB12:    xsi_set_current_line(88, ng0);

LAB44:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB55:
LAB51:
LAB47:    goto LAB30;

LAB14:    xsi_set_current_line(114, ng0);

LAB57:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB68:
LAB64:
LAB60:    goto LAB30;

LAB16:    xsi_set_current_line(143, ng0);

LAB70:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB81:
LAB77:
LAB73:    goto LAB30;

LAB18:    xsi_set_current_line(173, ng0);

LAB83:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB94:
LAB90:
LAB86:    goto LAB30;

LAB20:    xsi_set_current_line(204, ng0);

LAB96:    xsi_set_current_line(206, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB107:
LAB103:
LAB99:    goto LAB30;

LAB22:    xsi_set_current_line(237, ng0);

LAB109:    xsi_set_current_line(239, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(243, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(249, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(255, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(263, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB120:
LAB116:
LAB112:    goto LAB30;

LAB24:    xsi_set_current_line(269, ng0);

LAB122:    xsi_set_current_line(271, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(272, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(273, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(275, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB123;

LAB124:    xsi_set_current_line(281, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB127;

LAB128:    xsi_set_current_line(287, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB131;

LAB132:    xsi_set_current_line(295, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB133:
LAB129:
LAB125:    goto LAB30;

LAB26:    xsi_set_current_line(300, ng0);

LAB135:    xsi_set_current_line(302, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(303, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(306, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB136;

LAB137:    xsi_set_current_line(312, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB140;

LAB141:    xsi_set_current_line(318, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB144;

LAB145:    xsi_set_current_line(326, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB146:
LAB142:
LAB138:    goto LAB30;

LAB28:    xsi_set_current_line(330, ng0);

LAB148:    xsi_set_current_line(332, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(333, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(334, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(336, ng0);
    t2 = (t0 + 3208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB149;

LAB150:    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB151:    xsi_set_current_line(342, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB30;

LAB32:    xsi_set_current_line(66, ng0);

LAB35:    xsi_set_current_line(67, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB34;

LAB36:    xsi_set_current_line(72, ng0);

LAB39:    xsi_set_current_line(73, ng0);
    t5 = ((char*)((ng5)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB38;

LAB40:    xsi_set_current_line(79, ng0);

LAB43:    xsi_set_current_line(80, ng0);
    t5 = ((char*)((ng6)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB42;

LAB45:    xsi_set_current_line(93, ng0);

LAB48:    xsi_set_current_line(94, ng0);
    t5 = ((char*)((ng5)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB47;

LAB49:    xsi_set_current_line(99, ng0);

LAB52:    xsi_set_current_line(100, ng0);
    t5 = ((char*)((ng7)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB51;

LAB53:    xsi_set_current_line(105, ng0);

LAB56:    xsi_set_current_line(106, ng0);
    t5 = ((char*)((ng8)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB55;

LAB58:    xsi_set_current_line(120, ng0);

LAB61:    xsi_set_current_line(121, ng0);
    t5 = ((char*)((ng7)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB60;

LAB62:    xsi_set_current_line(126, ng0);

LAB65:    xsi_set_current_line(127, ng0);
    t5 = ((char*)((ng9)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB64;

LAB66:    xsi_set_current_line(132, ng0);

LAB69:    xsi_set_current_line(133, ng0);
    t5 = ((char*)((ng10)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB71:    xsi_set_current_line(149, ng0);

LAB74:    xsi_set_current_line(150, ng0);
    t5 = ((char*)((ng9)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB73;

LAB75:    xsi_set_current_line(155, ng0);

LAB78:    xsi_set_current_line(156, ng0);
    t5 = ((char*)((ng6)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB77;

LAB79:    xsi_set_current_line(161, ng0);

LAB82:    xsi_set_current_line(162, ng0);
    t5 = ((char*)((ng11)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB81;

LAB84:    xsi_set_current_line(179, ng0);

LAB87:    xsi_set_current_line(180, ng0);
    t5 = ((char*)((ng6)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB86;

LAB88:    xsi_set_current_line(185, ng0);

LAB91:    xsi_set_current_line(186, ng0);
    t5 = ((char*)((ng8)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB90;

LAB92:    xsi_set_current_line(191, ng0);

LAB95:    xsi_set_current_line(192, ng0);
    t5 = ((char*)((ng12)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB94;

LAB97:    xsi_set_current_line(211, ng0);

LAB100:    xsi_set_current_line(212, ng0);
    t5 = ((char*)((ng8)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB99;

LAB101:    xsi_set_current_line(217, ng0);

LAB104:    xsi_set_current_line(218, ng0);
    t5 = ((char*)((ng10)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB103;

LAB105:    xsi_set_current_line(223, ng0);

LAB108:    xsi_set_current_line(224, ng0);
    t5 = ((char*)((ng12)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB107;

LAB110:    xsi_set_current_line(244, ng0);

LAB113:    xsi_set_current_line(245, ng0);
    t5 = ((char*)((ng10)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(246, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB112;

LAB114:    xsi_set_current_line(250, ng0);

LAB117:    xsi_set_current_line(251, ng0);
    t5 = ((char*)((ng11)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB116;

LAB118:    xsi_set_current_line(256, ng0);

LAB121:    xsi_set_current_line(257, ng0);
    t5 = ((char*)((ng12)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB120;

LAB123:    xsi_set_current_line(276, ng0);

LAB126:    xsi_set_current_line(277, ng0);
    t5 = ((char*)((ng11)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(278, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB125;

LAB127:    xsi_set_current_line(282, ng0);

LAB130:    xsi_set_current_line(283, ng0);
    t5 = ((char*)((ng12)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(284, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB129;

LAB131:    xsi_set_current_line(288, ng0);

LAB134:    xsi_set_current_line(289, ng0);
    t5 = ((char*)((ng12)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(290, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB133;

LAB136:    xsi_set_current_line(307, ng0);

LAB139:    xsi_set_current_line(308, ng0);
    t5 = ((char*)((ng12)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(309, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB138;

LAB140:    xsi_set_current_line(313, ng0);

LAB143:    xsi_set_current_line(314, ng0);
    t5 = ((char*)((ng12)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB142;

LAB144:    xsi_set_current_line(319, ng0);

LAB147:    xsi_set_current_line(320, ng0);
    t5 = ((char*)((ng12)));
    t11 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(321, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB146;

LAB149:    xsi_set_current_line(337, ng0);
    t5 = ((char*)((ng4)));
    t11 = (t0 + 3768);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 1);
    goto LAB151;

}


extern void work_m_00000000001492231734_3002898941_init()
{
	static char *pe[] = {(void *)Always_48_0};
	xsi_register_didat("work_m_00000000001492231734_3002898941", "isim/FSM_VendingMachine_TestBench_isim_beh.exe.sim/work/m_00000000001492231734_3002898941.didat");
	xsi_register_executes(pe);
}

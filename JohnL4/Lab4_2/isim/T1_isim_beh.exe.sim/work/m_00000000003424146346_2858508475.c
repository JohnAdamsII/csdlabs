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
static const char *ng0 = "G:/My Drive/Classes/CSD_Lab/Labs/Lab4_2/John_FSM.v";
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



static void Always_46_0(char *t0)
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

LAB0:    t1 = (t0 + 3004U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3200);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1332U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2480);
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

LAB15:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB22;

LAB23:
LAB24:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(47, ng0);

LAB8:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(55, ng0);

LAB25:    xsi_set_current_line(57, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2020);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2204);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2388);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1424U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1516U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB36:
LAB32:
LAB28:    goto LAB24;

LAB12:    xsi_set_current_line(86, ng0);

LAB38:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2204);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1424U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1516U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB49:
LAB45:
LAB41:    goto LAB24;

LAB14:    xsi_set_current_line(112, ng0);

LAB51:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2204);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1424U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1516U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB58:
LAB54:    goto LAB24;

LAB16:    xsi_set_current_line(135, ng0);

LAB60:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2204);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 1424U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1516U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB67:
LAB63:    goto LAB24;

LAB18:    xsi_set_current_line(159, ng0);

LAB69:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2204);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 1424U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 1516U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB76:
LAB72:    goto LAB24;

LAB20:    xsi_set_current_line(184, ng0);

LAB78:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2204);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2388);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 1424U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 1516U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB85:
LAB81:    goto LAB24;

LAB22:    xsi_set_current_line(211, ng0);

LAB87:    xsi_set_current_line(213, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2204);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2388);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 1792U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB90:    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB24;

LAB26:    xsi_set_current_line(64, ng0);

LAB29:    xsi_set_current_line(65, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2204);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB28;

LAB30:    xsi_set_current_line(70, ng0);

LAB33:    xsi_set_current_line(71, ng0);
    t5 = ((char*)((ng5)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB32;

LAB34:    xsi_set_current_line(77, ng0);

LAB37:    xsi_set_current_line(78, ng0);
    t5 = ((char*)((ng6)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2388);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB36;

LAB39:    xsi_set_current_line(91, ng0);

LAB42:    xsi_set_current_line(92, ng0);
    t5 = ((char*)((ng5)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2204);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB41;

LAB43:    xsi_set_current_line(97, ng0);

LAB46:    xsi_set_current_line(98, ng0);
    t5 = ((char*)((ng7)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB45;

LAB47:    xsi_set_current_line(103, ng0);

LAB50:    xsi_set_current_line(104, ng0);
    t5 = ((char*)((ng8)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2388);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB49;

LAB52:    xsi_set_current_line(118, ng0);

LAB55:    xsi_set_current_line(119, ng0);
    t5 = ((char*)((ng7)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2204);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB54;

LAB56:    xsi_set_current_line(124, ng0);

LAB59:    xsi_set_current_line(125, ng0);
    t5 = ((char*)((ng9)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB58;

LAB61:    xsi_set_current_line(141, ng0);

LAB64:    xsi_set_current_line(142, ng0);
    t5 = ((char*)((ng9)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2204);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB63;

LAB65:    xsi_set_current_line(147, ng0);

LAB68:    xsi_set_current_line(148, ng0);
    t5 = ((char*)((ng6)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB67;

LAB70:    xsi_set_current_line(165, ng0);

LAB73:    xsi_set_current_line(166, ng0);
    t5 = ((char*)((ng6)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2204);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB72;

LAB74:    xsi_set_current_line(171, ng0);

LAB77:    xsi_set_current_line(172, ng0);
    t5 = ((char*)((ng8)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB76;

LAB79:    xsi_set_current_line(191, ng0);

LAB82:    xsi_set_current_line(192, ng0);
    t5 = ((char*)((ng8)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2204);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB81;

LAB83:    xsi_set_current_line(197, ng0);

LAB86:    xsi_set_current_line(198, ng0);
    t5 = ((char*)((ng10)));
    t11 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB85;

LAB88:    xsi_set_current_line(218, ng0);
    t5 = ((char*)((ng4)));
    t11 = (t0 + 2020);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 1);
    goto LAB90;

}


extern void work_m_00000000003424146346_2858508475_init()
{
	static char *pe[] = {(void *)Always_46_0};
	xsi_register_didat("work_m_00000000003424146346_2858508475", "isim/T1_isim_beh.exe.sim/work/m_00000000003424146346_2858508475.didat");
	xsi_register_executes(pe);
}

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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/test_base.vh";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {1U, 1U};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static const char *ng7 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/test_ldi.vh";
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {22, 0};
static const char *ng10 = "LDI R%2d, %3d - ID: OK";
static const char *ng11 = "LDI R%2d, %3d - ID: FAILED";
static const char *ng12 = "LDI R%2d, %3d - WB: OK (R%2d = %3d)";
static const char *ng13 = "LDI R%2d, %3d - WB: FAILED => (%3d) vs (%3d)";
static const char *ng14 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/test_lds.vh";
static int ng15[] = {11, 0};
static int ng16[] = {128, 0};
static int ng17[] = {64, 0};
static const char *ng18 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/test_sts.vh";
static int ng19[] = {21, 0};
static int ng20[] = {7, 0};
static const char *ng21 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/test_ldy.vh";
static int ng22[] = {8, 0};
static const char *ng23 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/test_mov.vh";
static int ng24[] = {23, 0};
static const char *ng25 = "MOV R%2d, R%2d - ID: OK";
static const char *ng26 = "MOV R%2d, R%2d - ID: FAILED";
static const char *ng27 = "MOV R%2d, R%2d - WB: OK (R%2d = %3d) ";
static const char *ng28 = "MOV R%2d, R%2d - WB: FAILED";
static const char *ng29 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/test_add.vh";
static int ng30[] = {37, 0};
static const char *ng31 = "SUB R%2d, R%2d - ID: OK";
static const char *ng32 = "SUB R%2d, R%2d - ID: FAILED";
static const char *ng33 = "ADD R%2d, R%2d - EX: OK (alu_out = %3d)";
static const char *ng34 = "ADD R%2d, R%2d - EX: FAILED => (%b) vs (%b)";
static const char *ng35 = "ADD R%2d, R%2d - WB: OK (R%2d = %3d)";
static const char *ng36 = "ADD R%2d, R%2d - WB: FAILED => (%b) vs (%b)";
static const char *ng37 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/test_sub.vh";
static int ng38[] = {39, 0};
static const char *ng39 = "SUB R%2d, R%2d - EX: OK (alu_out = %3d)";
static const char *ng40 = "SUB R%2d, R%2d - EX: FAILED => (%b) vs (%b)";
static const char *ng41 = "SUB R%2d, R%2d - WB: OK (R%2d = %3d)";
static const char *ng42 = "SUB R%2d, R%2d - WB: FAILED => (%b) vs (%b)";
static const char *ng43 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/test_pop.vh";
static int ng44[] = {29, 0};
static const char *ng45 = "POP R%2d - EX: OK";
static const char *ng46 = "POP R%2d - EX: FAILED => signals[`CONTROL_STACK_PREINC]: 1 vs 0";
static const char *ng47 = "POP R%2d - EX: FAILED => sp: (%2H) vs (%2H)";
static unsigned int ng48[] = {64U, 0U};
static const char *ng49 = "POP R%2d - MEM: OK (bus_addr = %2H)";
static const char *ng50 = "POP R%2d - MEM: FAILED => bus_addr: (%2H) vs (%2H)";
static const char *ng51 = "POP R%2d - WB: OK (R%2d = %3d)";
static const char *ng52 = "POP R%2d - WB: FAILED => R%2d:(%3d) vs (%3d)";
static const char *ng53 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/test_push.vh";
static int ng54[] = {30, 0};
static const char *ng55 = "PUSH R%2d - ID: OK";
static const char *ng56 = "PUSH R%2d - ID: FAILED";
static const char *ng57 = "PUSH R%2d - MEM: OK (bus_address = %2H, signals[`CONTROL_STACK_POSTDEC] = 1)";
static const char *ng58 = "PUSH R%2d - MEM: FAILED => bus_address: (%2H) vs (%2H)";
static int ng59[] = {6, 0};
static const char *ng60 = "PUSH R%2d - MEM: OK (sp = %2H)";
static const char *ng61 = "PUSH R%2d - WB: FAILED => signals[`CONTROL_STACK_POSTDEC]: 1 vs 0";
static const char *ng62 = "PUSH R%2d - WB: FAILED =>  sp: (%2H) vs (%2H)";
static const char *ng63 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/test_brbs.vh";
static int ng64[] = {24, 0};
static const char *ng65 = "BRBS LABEL - ID: OK (FLAG: (%b)). Check defines.vh.";
static const char *ng66 = "BRBS LABEL - ID: FAILED => OPCODE_TYPE: (%b) vs %(%b), FLAG: (%b) vs %(%b). Check defines.vh.";
static const char *ng67 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/test_brcs.vh";
static int ng68[] = {25, 0};
static const char *ng69 = "BRBC LABEL - ID: OK (FLAG: (%b)). Check defines.vh.";
static const char *ng70 = "BRBC LABEL - ID: FAILED => OPCODE_TYPE: (%b) vs %(%b), FLAG: (%b) vs %(%b). Check defines.vh.";
static const char *ng71 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/test_rjmp.vh";
static int ng72[] = {26, 0};
static const char *ng73 = "RJMP LABEL - ID: OK";
static const char *ng74 = "RJMP LABEL - ID: FAILED => OPCODE_TYPE: (%b) vs %(%b). Check defines.vh.";
static const char *ng75 = "/home/student/Desktop/Laborator 4/lab04_skel/lab04_skel/unitTest.v";
static int ng76[] = {28, 0};
static const char *ng77 = "Init regs..";
static unsigned int ng78[] = {4294967295U, 4294967295U};
static unsigned int ng79[] = {191U, 0U};
static int ng80[] = {0, 0};
static unsigned int ng81[] = {16U, 0U};
static unsigned int ng82[] = {17U, 0U};
static int ng83[] = {15, 0};
static unsigned int ng84[] = {30U, 0U};
static unsigned int ng85[] = {2U, 0U};
static int ng86[] = {9, 0};
static int ng87[] = {10, 0};
static int ng88[] = {12, 0};
static int ng89[] = {13, 0};
static unsigned int ng90[] = {20U, 0U};
static int ng91[] = {14, 0};
static unsigned int ng92[] = {21U, 0U};
static unsigned int ng93[] = {22U, 0U};
static unsigned int ng94[] = {0U, 1U};



static int sp_TEST_XXX(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(18, ng0);

LAB2:    xsi_set_current_line(19, ng0);
    t3 = (t1 + 12504);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(20, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 12344);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(21, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 12344);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB8:    xsi_set_current_line(22, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 12344);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB10:    xsi_set_current_line(23, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 12344);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB12:    xsi_set_current_line(24, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 12344);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

}

static int sp_TEST_LDI(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t90[8];
    char t108[8];
    char t124[8];
    char t132[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    int t156;
    int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    char *t172;
    char *t173;

LAB0:    t0 = 1;
    xsi_set_current_line(18, ng7);

LAB2:    xsi_set_current_line(19, ng7);
    t3 = (t1 + 15224);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(20, ng7);
    t8 = ((char*)((ng8)));
    t9 = (t1 + 15064);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(22, ng7);
    t4 = (t1 + 15384);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 5);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 5);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) != 0)
        goto LAB17;

LAB18:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB19;

LAB20:    memcpy(t58, t18, 8);

LAB21:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t91) != 0)
        goto LAB35;

LAB36:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB37;

LAB38:    memcpy(t132, t90, 8);

LAB39:    t164 = (t132 + 4);
    t165 = *((unsigned int *)t164);
    t166 = (~(t165));
    t167 = *((unsigned int *)t132);
    t168 = (t167 & t166);
    t169 = (t168 != 0);
    if (t169 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(30, ng7);

LAB55:    xsi_set_current_line(31, ng7);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 15064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(32, ng7);
    t3 = (t1 + 17464);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 17624);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng11, 3, t19, (char)119, t6, 32, (char)119, t11, 32);

LAB53:    goto LAB14;

LAB8:    xsi_set_current_line(34, ng7);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 15064);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB10:    xsi_set_current_line(35, ng7);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 15064);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB12:    xsi_set_current_line(37, ng7);
    t4 = (t1 + 15864);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 17624);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    memset(t10, 0, 8);
    t25 = (t8 + 4);
    t26 = (t19 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t19);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t25);
    t16 = *((unsigned int *)t26);
    t17 = (t15 ^ t16);
    t20 = (t14 | t17);
    t21 = *((unsigned int *)t25);
    t22 = *((unsigned int *)t26);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t27 = (t20 & t24);
    if (t27 != 0)
        goto LAB59;

LAB56:    if (t23 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t10) = 1;

LAB59:    memset(t18, 0, 8);
    t31 = (t10 + 4);
    t28 = *((unsigned int *)t31);
    t29 = (~(t28));
    t37 = *((unsigned int *)t10);
    t38 = (t37 & t29);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t31) != 0)
        goto LAB62;

LAB63:    t33 = (t18 + 4);
    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t33);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB64;

LAB65:    memcpy(t58, t18, 8);

LAB66:    memset(t90, 0, 8);
    t98 = (t58 + 4);
    t92 = *((unsigned int *)t98);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t98) != 0)
        goto LAB76;

LAB77:    t103 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t103);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB78;

LAB79:    memcpy(t132, t90, 8);

LAB80:    t171 = (t132 + 4);
    t165 = *((unsigned int *)t171);
    t166 = (~(t165));
    t167 = *((unsigned int *)t132);
    t168 = (t167 & t166);
    t169 = (t168 != 0);
    if (t169 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(45, ng7);

LAB96:    xsi_set_current_line(46, ng7);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 15064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(47, ng7);
    t3 = (t1 + 16344);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 17624);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 15864);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t30 = (t1 + 17624);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng13, 5, t33, (char)118, t6, 5, (char)119, t11, 32, (char)118, t26, 8, (char)119, t32, 32);

LAB94:    goto LAB14;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    t30 = (t1 + 15544);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng9)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB25;

LAB22:    if (t46 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t34) = 1;

LAB25:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t51) != 0)
        goto LAB28;

LAB29:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t50) = 1;
    goto LAB29;

LAB28:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB29;

LAB30:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB32;

LAB33:    *((unsigned int *)t90) = 1;
    goto LAB36;

LAB35:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB36;

LAB37:    t102 = (t1 + 15704);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = (t1 + 17624);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    memset(t108, 0, 8);
    t109 = (t104 + 4);
    t110 = (t107 + 4);
    t111 = *((unsigned int *)t104);
    t112 = *((unsigned int *)t107);
    t113 = (t111 ^ t112);
    t114 = *((unsigned int *)t109);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = (t113 | t116);
    t118 = *((unsigned int *)t109);
    t119 = *((unsigned int *)t110);
    t120 = (t118 | t119);
    t121 = (~(t120));
    t122 = (t117 & t121);
    if (t122 != 0)
        goto LAB43;

LAB40:    if (t120 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t108) = 1;

LAB43:    memset(t124, 0, 8);
    t125 = (t108 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t108);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t125) != 0)
        goto LAB46;

LAB47:    t133 = *((unsigned int *)t90);
    t134 = *((unsigned int *)t124);
    t135 = (t133 & t134);
    *((unsigned int *)t132) = t135;
    t136 = (t90 + 4);
    t137 = (t124 + 4);
    t138 = (t132 + 4);
    t139 = *((unsigned int *)t136);
    t140 = *((unsigned int *)t137);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB39;

LAB42:    t123 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t124) = 1;
    goto LAB47;

LAB46:    t131 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB47;

LAB48:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t132) = (t144 | t145);
    t146 = (t90 + 4);
    t147 = (t124 + 4);
    t148 = *((unsigned int *)t90);
    t149 = (~(t148));
    t150 = *((unsigned int *)t146);
    t151 = (~(t150));
    t152 = *((unsigned int *)t124);
    t153 = (~(t152));
    t154 = *((unsigned int *)t147);
    t155 = (~(t154));
    t156 = (t149 & t151);
    t157 = (t153 & t155);
    t158 = (~(t156));
    t159 = (~(t157));
    t160 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t160 & t158);
    t161 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t161 & t159);
    t162 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t162 & t158);
    t163 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t163 & t159);
    goto LAB50;

LAB51:    xsi_set_current_line(25, ng7);

LAB54:    xsi_set_current_line(26, ng7);
    t170 = ((char*)((ng8)));
    t171 = (t1 + 15064);
    xsi_vlogvar_assign_value(t171, t170, 0, 0, 1);
    xsi_set_current_line(27, ng7);
    t3 = (t1 + 17464);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 17624);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t19, (char)119, t6, 32, (char)119, t11, 32);
    goto LAB53;

LAB58:    t30 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t18) = 1;
    goto LAB63;

LAB62:    t32 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB63;

LAB64:    t35 = (t1 + 16024);
    t36 = (t35 + 56U);
    t49 = *((char **)t36);
    memset(t34, 0, 8);
    t51 = (t34 + 4);
    t57 = (t49 + 4);
    t43 = *((unsigned int *)t49);
    t44 = (t43 >> 5);
    t45 = (t44 & 1);
    *((unsigned int *)t34) = t45;
    t46 = *((unsigned int *)t57);
    t47 = (t46 >> 5);
    t48 = (t47 & 1);
    *((unsigned int *)t51) = t48;
    memset(t50, 0, 8);
    t62 = (t34 + 4);
    t52 = *((unsigned int *)t62);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t62) != 0)
        goto LAB69;

LAB70:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t64 = (t18 + 4);
    t72 = (t50 + 4);
    t73 = (t58 + 4);
    t65 = *((unsigned int *)t64);
    t66 = *((unsigned int *)t72);
    t67 = (t65 | t66);
    *((unsigned int *)t73) = t67;
    t68 = *((unsigned int *)t73);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB66;

LAB67:    *((unsigned int *)t50) = 1;
    goto LAB70;

LAB69:    t63 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB70;

LAB71:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t73);
    *((unsigned int *)t58) = (t70 | t71);
    t91 = (t18 + 4);
    t97 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t91);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t97);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t86 & t84);
    t87 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB73;

LAB74:    *((unsigned int *)t90) = 1;
    goto LAB77;

LAB76:    t102 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB77;

LAB78:    t104 = (t1 + 16344);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = (t1 + 17464);
    t109 = (t107 + 56U);
    t110 = *((char **)t109);
    memset(t108, 0, 8);
    t123 = (t106 + 4);
    t125 = (t110 + 4);
    t111 = *((unsigned int *)t106);
    t112 = *((unsigned int *)t110);
    t113 = (t111 ^ t112);
    t114 = *((unsigned int *)t123);
    t115 = *((unsigned int *)t125);
    t116 = (t114 ^ t115);
    t117 = (t113 | t116);
    t118 = *((unsigned int *)t123);
    t119 = *((unsigned int *)t125);
    t120 = (t118 | t119);
    t121 = (~(t120));
    t122 = (t117 & t121);
    if (t122 != 0)
        goto LAB84;

LAB81:    if (t120 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t108) = 1;

LAB84:    memset(t124, 0, 8);
    t136 = (t108 + 4);
    t126 = *((unsigned int *)t136);
    t127 = (~(t126));
    t128 = *((unsigned int *)t108);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t136) != 0)
        goto LAB87;

LAB88:    t133 = *((unsigned int *)t90);
    t134 = *((unsigned int *)t124);
    t135 = (t133 & t134);
    *((unsigned int *)t132) = t135;
    t138 = (t90 + 4);
    t146 = (t124 + 4);
    t147 = (t132 + 4);
    t139 = *((unsigned int *)t138);
    t140 = *((unsigned int *)t146);
    t141 = (t139 | t140);
    *((unsigned int *)t147) = t141;
    t142 = *((unsigned int *)t147);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB80;

LAB83:    t131 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t124) = 1;
    goto LAB88;

LAB87:    t137 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t137) = 1;
    goto LAB88;

LAB89:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t147);
    *((unsigned int *)t132) = (t144 | t145);
    t164 = (t90 + 4);
    t170 = (t124 + 4);
    t148 = *((unsigned int *)t90);
    t149 = (~(t148));
    t150 = *((unsigned int *)t164);
    t151 = (~(t150));
    t152 = *((unsigned int *)t124);
    t153 = (~(t152));
    t154 = *((unsigned int *)t170);
    t155 = (~(t154));
    t156 = (t149 & t151);
    t157 = (t153 & t155);
    t158 = (~(t156));
    t159 = (~(t157));
    t160 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t160 & t158);
    t161 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t161 & t159);
    t162 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t162 & t158);
    t163 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t163 & t159);
    goto LAB91;

LAB92:    xsi_set_current_line(40, ng7);

LAB95:    xsi_set_current_line(41, ng7);
    t172 = ((char*)((ng8)));
    t173 = (t1 + 15064);
    xsi_vlogvar_assign_value(t173, t172, 0, 0, 1);
    xsi_set_current_line(42, ng7);
    t3 = (t1 + 16344);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 17624);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 16344);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t30 = (t1 + 17624);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t33, (char)118, t6, 5, (char)119, t11, 32, (char)118, t26, 5, (char)119, t32, 32);
    goto LAB94;

}

static int sp_TEST_LDS(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t90[8];
    char t109[8];
    char t137[8];
    char t153[8];
    char t161[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    int t185;
    int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    char *t199;
    char *t200;

LAB0:    t0 = 1;
    xsi_set_current_line(18, ng14);

LAB2:    xsi_set_current_line(19, ng14);
    t3 = (t1 + 17944);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(20, ng14);
    t8 = ((char*)((ng8)));
    t9 = (t1 + 17784);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(23, ng14);
    t4 = (t1 + 18104);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 8);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 8);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) != 0)
        goto LAB17;

LAB18:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB19;

LAB20:    memcpy(t58, t18, 8);

LAB21:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t91) != 0)
        goto LAB35;

LAB36:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB37;

LAB38:    memcpy(t161, t90, 8);

LAB39:    t193 = (t161 + 4);
    t194 = *((unsigned int *)t193);
    t195 = (~(t194));
    t196 = *((unsigned int *)t161);
    t197 = (t196 & t195);
    t198 = (t197 != 0);
    if (t198 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(29, ng14);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 17784);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB56:    goto LAB14;

LAB8:    xsi_set_current_line(30, ng14);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 17784);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB10:    xsi_set_current_line(33, ng14);
    t4 = (t1 + 19704);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng17)));
    t11 = (t1 + 19864);
    t19 = (t11 + 56U);
    t25 = *((char **)t19);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t25);
    t14 = (t12 | t13);
    *((unsigned int *)t10) = t14;
    t26 = (t9 + 4);
    t30 = (t25 + 4);
    t31 = (t10 + 4);
    t15 = *((unsigned int *)t26);
    t16 = *((unsigned int *)t30);
    t17 = (t15 | t16);
    *((unsigned int *)t31) = t17;
    t20 = *((unsigned int *)t31);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB57;

LAB58:
LAB59:    memset(t18, 0, 8);
    t35 = (t8 + 4);
    t36 = (t10 + 4);
    t43 = *((unsigned int *)t8);
    t44 = *((unsigned int *)t10);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t35);
    t47 = *((unsigned int *)t36);
    t48 = (t46 ^ t47);
    t52 = (t45 | t48);
    t53 = *((unsigned int *)t35);
    t54 = *((unsigned int *)t36);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t59 = (t52 & t56);
    if (t59 != 0)
        goto LAB63;

LAB60:    if (t55 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t18) = 1;

LAB63:    t51 = (t18 + 4);
    t60 = *((unsigned int *)t51);
    t61 = (~(t60));
    t65 = *((unsigned int *)t18);
    t66 = (t65 & t61);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(36, ng14);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 17784);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB66:    goto LAB14;

LAB12:    xsi_set_current_line(38, ng14);
    t4 = (t1 + 18584);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 20344);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    memset(t10, 0, 8);
    t25 = (t8 + 4);
    t26 = (t19 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t19);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t25);
    t16 = *((unsigned int *)t26);
    t17 = (t15 ^ t16);
    t20 = (t14 | t17);
    t21 = *((unsigned int *)t25);
    t22 = *((unsigned int *)t26);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t27 = (t20 & t24);
    if (t27 != 0)
        goto LAB70;

LAB67:    if (t23 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t10) = 1;

LAB70:    memset(t18, 0, 8);
    t31 = (t10 + 4);
    t28 = *((unsigned int *)t31);
    t29 = (~(t28));
    t37 = *((unsigned int *)t10);
    t38 = (t37 & t29);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t31) != 0)
        goto LAB73;

LAB74:    t33 = (t18 + 4);
    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t33);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB75;

LAB76:    memcpy(t58, t18, 8);

LAB77:    memset(t90, 0, 8);
    t98 = (t58 + 4);
    t92 = *((unsigned int *)t98);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t98) != 0)
        goto LAB87;

LAB88:    t103 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t103);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB89;

LAB90:    memcpy(t153, t90, 8);

LAB91:    t166 = (t153 + 4);
    t169 = *((unsigned int *)t166);
    t170 = (~(t169));
    t171 = *((unsigned int *)t153);
    t172 = (t171 & t170);
    t173 = (t172 != 0);
    if (t173 > 0)
        goto LAB103;

LAB104:    xsi_set_current_line(43, ng14);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 17784);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB105:    goto LAB14;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    t30 = (t1 + 18264);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng15)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB25;

LAB22:    if (t46 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t34) = 1;

LAB25:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t51) != 0)
        goto LAB28;

LAB29:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t50) = 1;
    goto LAB29;

LAB28:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB29;

LAB30:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB32;

LAB33:    *((unsigned int *)t90) = 1;
    goto LAB36;

LAB35:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB36;

LAB37:    t102 = (t1 + 18424);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = (t1 + 19864);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    t108 = ((char*)((ng16)));
    t110 = *((unsigned int *)t107);
    t111 = *((unsigned int *)t108);
    t112 = (t110 | t111);
    *((unsigned int *)t109) = t112;
    t113 = (t107 + 4);
    t114 = (t108 + 4);
    t115 = (t109 + 4);
    t116 = *((unsigned int *)t113);
    t117 = *((unsigned int *)t114);
    t118 = (t116 | t117);
    *((unsigned int *)t115) = t118;
    t119 = *((unsigned int *)t115);
    t120 = (t119 != 0);
    if (t120 == 1)
        goto LAB40;

LAB41:
LAB42:    memset(t137, 0, 8);
    t138 = (t104 + 4);
    t139 = (t109 + 4);
    t140 = *((unsigned int *)t104);
    t141 = *((unsigned int *)t109);
    t142 = (t140 ^ t141);
    t143 = *((unsigned int *)t138);
    t144 = *((unsigned int *)t139);
    t145 = (t143 ^ t144);
    t146 = (t142 | t145);
    t147 = *((unsigned int *)t138);
    t148 = *((unsigned int *)t139);
    t149 = (t147 | t148);
    t150 = (~(t149));
    t151 = (t146 & t150);
    if (t151 != 0)
        goto LAB46;

LAB43:    if (t149 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t137) = 1;

LAB46:    memset(t153, 0, 8);
    t154 = (t137 + 4);
    t155 = *((unsigned int *)t154);
    t156 = (~(t155));
    t157 = *((unsigned int *)t137);
    t158 = (t157 & t156);
    t159 = (t158 & 1U);
    if (t159 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t154) != 0)
        goto LAB49;

LAB50:    t162 = *((unsigned int *)t90);
    t163 = *((unsigned int *)t153);
    t164 = (t162 & t163);
    *((unsigned int *)t161) = t164;
    t165 = (t90 + 4);
    t166 = (t153 + 4);
    t167 = (t161 + 4);
    t168 = *((unsigned int *)t165);
    t169 = *((unsigned int *)t166);
    t170 = (t168 | t169);
    *((unsigned int *)t167) = t170;
    t171 = *((unsigned int *)t167);
    t172 = (t171 != 0);
    if (t172 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB39;

LAB40:    t121 = *((unsigned int *)t109);
    t122 = *((unsigned int *)t115);
    *((unsigned int *)t109) = (t121 | t122);
    t123 = (t107 + 4);
    t124 = (t108 + 4);
    t125 = *((unsigned int *)t123);
    t126 = (~(t125));
    t127 = *((unsigned int *)t107);
    t128 = (t127 & t126);
    t129 = *((unsigned int *)t124);
    t130 = (~(t129));
    t131 = *((unsigned int *)t108);
    t132 = (t131 & t130);
    t133 = (~(t128));
    t134 = (~(t132));
    t135 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t135 & t133);
    t136 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t136 & t134);
    goto LAB42;

LAB45:    t152 = (t137 + 4);
    *((unsigned int *)t137) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t153) = 1;
    goto LAB50;

LAB49:    t160 = (t153 + 4);
    *((unsigned int *)t153) = 1;
    *((unsigned int *)t160) = 1;
    goto LAB50;

LAB51:    t173 = *((unsigned int *)t161);
    t174 = *((unsigned int *)t167);
    *((unsigned int *)t161) = (t173 | t174);
    t175 = (t90 + 4);
    t176 = (t153 + 4);
    t177 = *((unsigned int *)t90);
    t178 = (~(t177));
    t179 = *((unsigned int *)t175);
    t180 = (~(t179));
    t181 = *((unsigned int *)t153);
    t182 = (~(t181));
    t183 = *((unsigned int *)t176);
    t184 = (~(t183));
    t185 = (t178 & t180);
    t186 = (t182 & t184);
    t187 = (~(t185));
    t188 = (~(t186));
    t189 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t189 & t187);
    t190 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t190 & t188);
    t191 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t191 & t187);
    t192 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t192 & t188);
    goto LAB53;

LAB54:    xsi_set_current_line(27, ng14);
    t199 = ((char*)((ng8)));
    t200 = (t1 + 17784);
    xsi_vlogvar_assign_value(t200, t199, 0, 0, 1);
    goto LAB56;

LAB57:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t31);
    *((unsigned int *)t10) = (t22 | t23);
    t32 = (t9 + 4);
    t33 = (t25 + 4);
    t24 = *((unsigned int *)t32);
    t27 = (~(t24));
    t28 = *((unsigned int *)t9);
    t82 = (t28 & t27);
    t29 = *((unsigned int *)t33);
    t37 = (~(t29));
    t38 = *((unsigned int *)t25);
    t83 = (t38 & t37);
    t39 = (~(t82));
    t40 = (~(t83));
    t41 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t41 & t39);
    t42 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t42 & t40);
    goto LAB59;

LAB62:    t49 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(34, ng14);
    t57 = ((char*)((ng8)));
    t62 = (t1 + 17784);
    xsi_vlogvar_assign_value(t62, t57, 0, 0, 1);
    goto LAB66;

LAB69:    t30 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t18) = 1;
    goto LAB74;

LAB73:    t32 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB74;

LAB75:    t35 = (t1 + 18744);
    t36 = (t35 + 56U);
    t49 = *((char **)t36);
    memset(t34, 0, 8);
    t51 = (t34 + 4);
    t57 = (t49 + 4);
    t43 = *((unsigned int *)t49);
    t44 = (t43 >> 5);
    t45 = (t44 & 1);
    *((unsigned int *)t34) = t45;
    t46 = *((unsigned int *)t57);
    t47 = (t46 >> 5);
    t48 = (t47 & 1);
    *((unsigned int *)t51) = t48;
    memset(t50, 0, 8);
    t62 = (t34 + 4);
    t52 = *((unsigned int *)t62);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t62) != 0)
        goto LAB80;

LAB81:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t64 = (t18 + 4);
    t72 = (t50 + 4);
    t73 = (t58 + 4);
    t65 = *((unsigned int *)t64);
    t66 = *((unsigned int *)t72);
    t67 = (t65 | t66);
    *((unsigned int *)t73) = t67;
    t68 = *((unsigned int *)t73);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB82;

LAB83:
LAB84:    goto LAB77;

LAB78:    *((unsigned int *)t50) = 1;
    goto LAB81;

LAB80:    t63 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB81;

LAB82:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t73);
    *((unsigned int *)t58) = (t70 | t71);
    t91 = (t18 + 4);
    t97 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t91);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t97);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t86 & t84);
    t87 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB84;

LAB85:    *((unsigned int *)t90) = 1;
    goto LAB88;

LAB87:    t102 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB88;

LAB89:    t104 = (t1 + 19064);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = (t1 + 20184);
    t108 = (t107 + 56U);
    t113 = *((char **)t108);
    memset(t109, 0, 8);
    t114 = (t106 + 4);
    t115 = (t113 + 4);
    t110 = *((unsigned int *)t106);
    t111 = *((unsigned int *)t113);
    t112 = (t110 ^ t111);
    t116 = *((unsigned int *)t114);
    t117 = *((unsigned int *)t115);
    t118 = (t116 ^ t117);
    t119 = (t112 | t118);
    t120 = *((unsigned int *)t114);
    t121 = *((unsigned int *)t115);
    t122 = (t120 | t121);
    t125 = (~(t122));
    t126 = (t119 & t125);
    if (t126 != 0)
        goto LAB95;

LAB92:    if (t122 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t109) = 1;

LAB95:    memset(t137, 0, 8);
    t124 = (t109 + 4);
    t127 = *((unsigned int *)t124);
    t129 = (~(t127));
    t130 = *((unsigned int *)t109);
    t131 = (t130 & t129);
    t133 = (t131 & 1U);
    if (t133 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t124) != 0)
        goto LAB98;

LAB99:    t134 = *((unsigned int *)t90);
    t135 = *((unsigned int *)t137);
    t136 = (t134 & t135);
    *((unsigned int *)t153) = t136;
    t139 = (t90 + 4);
    t152 = (t137 + 4);
    t154 = (t153 + 4);
    t140 = *((unsigned int *)t139);
    t141 = *((unsigned int *)t152);
    t142 = (t140 | t141);
    *((unsigned int *)t154) = t142;
    t143 = *((unsigned int *)t154);
    t144 = (t143 != 0);
    if (t144 == 1)
        goto LAB100;

LAB101:
LAB102:    goto LAB91;

LAB94:    t123 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t137) = 1;
    goto LAB99;

LAB98:    t138 = (t137 + 4);
    *((unsigned int *)t137) = 1;
    *((unsigned int *)t138) = 1;
    goto LAB99;

LAB100:    t145 = *((unsigned int *)t153);
    t146 = *((unsigned int *)t154);
    *((unsigned int *)t153) = (t145 | t146);
    t160 = (t90 + 4);
    t165 = (t137 + 4);
    t147 = *((unsigned int *)t90);
    t148 = (~(t147));
    t149 = *((unsigned int *)t160);
    t150 = (~(t149));
    t151 = *((unsigned int *)t137);
    t155 = (~(t151));
    t156 = *((unsigned int *)t165);
    t157 = (~(t156));
    t128 = (t148 & t150);
    t132 = (t155 & t157);
    t158 = (~(t128));
    t159 = (~(t132));
    t162 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t162 & t158);
    t163 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t163 & t159);
    t164 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t164 & t158);
    t168 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t168 & t159);
    goto LAB102;

LAB103:    xsi_set_current_line(41, ng14);
    t167 = ((char*)((ng8)));
    t175 = (t1 + 17784);
    xsi_vlogvar_assign_value(t175, t167, 0, 0, 1);
    goto LAB105;

}

static int sp_TEST_STS(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t90[8];
    char t108[8];
    char t113[8];
    char t122[8];
    char t123[8];
    char t151[8];
    char t167[8];
    char t175[8];
    char t207[8];
    char t225[8];
    char t241[8];
    char t249[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    char *t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    int t199;
    int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;
    char *t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t219;
    char *t220;
    char *t221;
    char *t222;
    char *t223;
    char *t224;
    char *t226;
    char *t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t240;
    char *t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    char *t253;
    char *t254;
    char *t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    char *t263;
    char *t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    int t273;
    int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    char *t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    char *t287;
    char *t288;

LAB0:    t0 = 1;
    xsi_set_current_line(18, ng18);

LAB2:    xsi_set_current_line(19, ng18);
    t3 = (t1 + 20664);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(20, ng18);
    t8 = ((char*)((ng8)));
    t9 = (t1 + 20504);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(23, ng18);
    t4 = (t1 + 20824);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 10);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 10);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) != 0)
        goto LAB17;

LAB18:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB19;

LAB20:    memcpy(t58, t18, 8);

LAB21:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t91) != 0)
        goto LAB35;

LAB36:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB37;

LAB38:    memcpy(t175, t90, 8);

LAB39:    memset(t207, 0, 8);
    t208 = (t175 + 4);
    t209 = *((unsigned int *)t208);
    t210 = (~(t209));
    t211 = *((unsigned int *)t175);
    t212 = (t211 & t210);
    t213 = (t212 & 1U);
    if (t213 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t208) != 0)
        goto LAB60;

LAB61:    t215 = (t207 + 4);
    t216 = *((unsigned int *)t207);
    t217 = *((unsigned int *)t215);
    t218 = (t216 || t217);
    if (t218 > 0)
        goto LAB62;

LAB63:    memcpy(t249, t207, 8);

LAB64:    t281 = (t249 + 4);
    t282 = *((unsigned int *)t281);
    t283 = (~(t282));
    t284 = *((unsigned int *)t249);
    t285 = (t284 & t283);
    t286 = (t285 != 0);
    if (t286 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(30, ng18);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 20504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB78:    goto LAB14;

LAB8:    xsi_set_current_line(32, ng18);
    t4 = (t1 + 21944);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 23064);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    memset(t10, 0, 8);
    t25 = (t8 + 4);
    t26 = (t19 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t19);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t25);
    t16 = *((unsigned int *)t26);
    t17 = (t15 ^ t16);
    t20 = (t14 | t17);
    t21 = *((unsigned int *)t25);
    t22 = *((unsigned int *)t26);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t27 = (t20 & t24);
    if (t27 != 0)
        goto LAB82;

LAB79:    if (t23 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t10) = 1;

LAB82:    t31 = (t10 + 4);
    t28 = *((unsigned int *)t31);
    t29 = (~(t28));
    t37 = *((unsigned int *)t10);
    t38 = (t37 & t29);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(35, ng18);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 20504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB85:    goto LAB14;

LAB10:    xsi_set_current_line(38, ng18);
    t4 = (t1 + 22424);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng17)));
    t11 = (t1 + 22584);
    t19 = (t11 + 56U);
    t25 = *((char **)t19);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t9, 32, t25, 32);
    memset(t18, 0, 8);
    t26 = (t8 + 4);
    t30 = (t10 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t10);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t26);
    t16 = *((unsigned int *)t30);
    t17 = (t15 ^ t16);
    t20 = (t14 | t17);
    t21 = *((unsigned int *)t26);
    t22 = *((unsigned int *)t30);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t27 = (t20 & t24);
    if (t27 != 0)
        goto LAB89;

LAB86:    if (t23 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t18) = 1;

LAB89:    t32 = (t18 + 4);
    t28 = *((unsigned int *)t32);
    t29 = (~(t28));
    t37 = *((unsigned int *)t18);
    t38 = (t37 & t29);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(41, ng18);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 20504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB92:    goto LAB14;

LAB12:    xsi_set_current_line(42, ng18);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 20504);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    t30 = (t1 + 20984);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng19)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB25;

LAB22:    if (t46 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t34) = 1;

LAB25:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t51) != 0)
        goto LAB28;

LAB29:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t50) = 1;
    goto LAB29;

LAB28:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB29;

LAB30:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB32;

LAB33:    *((unsigned int *)t90) = 1;
    goto LAB36;

LAB35:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB36;

LAB37:    t102 = (t1 + 21144);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = (t1 + 22584);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    t109 = (t1 + 22584);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    t112 = ((char*)((ng16)));
    memset(t113, 0, 8);
    xsi_vlog_signed_bit_and(t113, 32, t111, 32, t112, 32);
    memset(t108, 0, 8);
    t114 = (t113 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t113);
    t118 = (t117 & t116);
    t119 = (t118 & 4294967295U);
    if (t119 != 0)
        goto LAB43;

LAB41:    if (*((unsigned int *)t114) == 0)
        goto LAB40;

LAB42:    t120 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t120) = 1;

LAB43:    t121 = ((char*)((ng20)));
    memset(t122, 0, 8);
    xsi_vlog_unsigned_lshift(t122, 32, t108, 32, t121, 32);
    t124 = *((unsigned int *)t107);
    t125 = *((unsigned int *)t122);
    t126 = (t124 | t125);
    *((unsigned int *)t123) = t126;
    t127 = (t107 + 4);
    t128 = (t122 + 4);
    t129 = (t123 + 4);
    t130 = *((unsigned int *)t127);
    t131 = *((unsigned int *)t128);
    t132 = (t130 | t131);
    *((unsigned int *)t129) = t132;
    t133 = *((unsigned int *)t129);
    t134 = (t133 != 0);
    if (t134 == 1)
        goto LAB44;

LAB45:
LAB46:    memset(t151, 0, 8);
    t152 = (t104 + 4);
    t153 = (t123 + 4);
    t154 = *((unsigned int *)t104);
    t155 = *((unsigned int *)t123);
    t156 = (t154 ^ t155);
    t157 = *((unsigned int *)t152);
    t158 = *((unsigned int *)t153);
    t159 = (t157 ^ t158);
    t160 = (t156 | t159);
    t161 = *((unsigned int *)t152);
    t162 = *((unsigned int *)t153);
    t163 = (t161 | t162);
    t164 = (~(t163));
    t165 = (t160 & t164);
    if (t165 != 0)
        goto LAB50;

LAB47:    if (t163 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t151) = 1;

LAB50:    memset(t167, 0, 8);
    t168 = (t151 + 4);
    t169 = *((unsigned int *)t168);
    t170 = (~(t169));
    t171 = *((unsigned int *)t151);
    t172 = (t171 & t170);
    t173 = (t172 & 1U);
    if (t173 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t168) != 0)
        goto LAB53;

LAB54:    t176 = *((unsigned int *)t90);
    t177 = *((unsigned int *)t167);
    t178 = (t176 & t177);
    *((unsigned int *)t175) = t178;
    t179 = (t90 + 4);
    t180 = (t167 + 4);
    t181 = (t175 + 4);
    t182 = *((unsigned int *)t179);
    t183 = *((unsigned int *)t180);
    t184 = (t182 | t183);
    *((unsigned int *)t181) = t184;
    t185 = *((unsigned int *)t181);
    t186 = (t185 != 0);
    if (t186 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB39;

LAB40:    *((unsigned int *)t108) = 1;
    goto LAB43;

LAB44:    t135 = *((unsigned int *)t123);
    t136 = *((unsigned int *)t129);
    *((unsigned int *)t123) = (t135 | t136);
    t137 = (t107 + 4);
    t138 = (t122 + 4);
    t139 = *((unsigned int *)t137);
    t140 = (~(t139));
    t141 = *((unsigned int *)t107);
    t142 = (t141 & t140);
    t143 = *((unsigned int *)t138);
    t144 = (~(t143));
    t145 = *((unsigned int *)t122);
    t146 = (t145 & t144);
    t147 = (~(t142));
    t148 = (~(t146));
    t149 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t149 & t147);
    t150 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t150 & t148);
    goto LAB46;

LAB49:    t166 = (t151 + 4);
    *((unsigned int *)t151) = 1;
    *((unsigned int *)t166) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t167) = 1;
    goto LAB54;

LAB53:    t174 = (t167 + 4);
    *((unsigned int *)t167) = 1;
    *((unsigned int *)t174) = 1;
    goto LAB54;

LAB55:    t187 = *((unsigned int *)t175);
    t188 = *((unsigned int *)t181);
    *((unsigned int *)t175) = (t187 | t188);
    t189 = (t90 + 4);
    t190 = (t167 + 4);
    t191 = *((unsigned int *)t90);
    t192 = (~(t191));
    t193 = *((unsigned int *)t189);
    t194 = (~(t193));
    t195 = *((unsigned int *)t167);
    t196 = (~(t195));
    t197 = *((unsigned int *)t190);
    t198 = (~(t197));
    t199 = (t192 & t194);
    t200 = (t196 & t198);
    t201 = (~(t199));
    t202 = (~(t200));
    t203 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t203 & t201);
    t204 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t204 & t202);
    t205 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t205 & t201);
    t206 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t206 & t202);
    goto LAB57;

LAB58:    *((unsigned int *)t207) = 1;
    goto LAB61;

LAB60:    t214 = (t207 + 4);
    *((unsigned int *)t207) = 1;
    *((unsigned int *)t214) = 1;
    goto LAB61;

LAB62:    t219 = (t1 + 21624);
    t220 = (t219 + 56U);
    t221 = *((char **)t220);
    t222 = (t1 + 22744);
    t223 = (t222 + 56U);
    t224 = *((char **)t223);
    memset(t225, 0, 8);
    t226 = (t221 + 4);
    t227 = (t224 + 4);
    t228 = *((unsigned int *)t221);
    t229 = *((unsigned int *)t224);
    t230 = (t228 ^ t229);
    t231 = *((unsigned int *)t226);
    t232 = *((unsigned int *)t227);
    t233 = (t231 ^ t232);
    t234 = (t230 | t233);
    t235 = *((unsigned int *)t226);
    t236 = *((unsigned int *)t227);
    t237 = (t235 | t236);
    t238 = (~(t237));
    t239 = (t234 & t238);
    if (t239 != 0)
        goto LAB68;

LAB65:    if (t237 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t225) = 1;

LAB68:    memset(t241, 0, 8);
    t242 = (t225 + 4);
    t243 = *((unsigned int *)t242);
    t244 = (~(t243));
    t245 = *((unsigned int *)t225);
    t246 = (t245 & t244);
    t247 = (t246 & 1U);
    if (t247 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t242) != 0)
        goto LAB71;

LAB72:    t250 = *((unsigned int *)t207);
    t251 = *((unsigned int *)t241);
    t252 = (t250 & t251);
    *((unsigned int *)t249) = t252;
    t253 = (t207 + 4);
    t254 = (t241 + 4);
    t255 = (t249 + 4);
    t256 = *((unsigned int *)t253);
    t257 = *((unsigned int *)t254);
    t258 = (t256 | t257);
    *((unsigned int *)t255) = t258;
    t259 = *((unsigned int *)t255);
    t260 = (t259 != 0);
    if (t260 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB64;

LAB67:    t240 = (t225 + 4);
    *((unsigned int *)t225) = 1;
    *((unsigned int *)t240) = 1;
    goto LAB68;

LAB69:    *((unsigned int *)t241) = 1;
    goto LAB72;

LAB71:    t248 = (t241 + 4);
    *((unsigned int *)t241) = 1;
    *((unsigned int *)t248) = 1;
    goto LAB72;

LAB73:    t261 = *((unsigned int *)t249);
    t262 = *((unsigned int *)t255);
    *((unsigned int *)t249) = (t261 | t262);
    t263 = (t207 + 4);
    t264 = (t241 + 4);
    t265 = *((unsigned int *)t207);
    t266 = (~(t265));
    t267 = *((unsigned int *)t263);
    t268 = (~(t267));
    t269 = *((unsigned int *)t241);
    t270 = (~(t269));
    t271 = *((unsigned int *)t264);
    t272 = (~(t271));
    t273 = (t266 & t268);
    t274 = (t270 & t272);
    t275 = (~(t273));
    t276 = (~(t274));
    t277 = *((unsigned int *)t255);
    *((unsigned int *)t255) = (t277 & t275);
    t278 = *((unsigned int *)t255);
    *((unsigned int *)t255) = (t278 & t276);
    t279 = *((unsigned int *)t249);
    *((unsigned int *)t249) = (t279 & t275);
    t280 = *((unsigned int *)t249);
    *((unsigned int *)t249) = (t280 & t276);
    goto LAB75;

LAB76:    xsi_set_current_line(28, ng18);
    t287 = ((char*)((ng8)));
    t288 = (t1 + 20504);
    xsi_vlogvar_assign_value(t288, t287, 0, 0, 1);
    goto LAB78;

LAB81:    t30 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(33, ng18);
    t32 = ((char*)((ng8)));
    t33 = (t1 + 20504);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 1);
    goto LAB85;

LAB88:    t31 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(39, ng18);
    t33 = ((char*)((ng8)));
    t35 = (t1 + 20504);
    xsi_vlogvar_assign_value(t35, t33, 0, 0, 1);
    goto LAB92;

}

static int sp_TEST_LD(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t98[8];
    char t99[8];
    char t101[8];
    char t134[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t100;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    int t158;
    int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;

LAB0:    t0 = 1;
    xsi_set_current_line(18, ng21);

LAB2:    xsi_set_current_line(19, ng21);
    t3 = (t1 + 23384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(20, ng21);
    t8 = ((char*)((ng8)));
    t9 = (t1 + 23224);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(22, ng21);
    t4 = (t1 + 23544);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 8);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 8);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) != 0)
        goto LAB17;

LAB18:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB19;

LAB20:    memcpy(t58, t18, 8);

LAB21:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(26, ng21);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 23224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB35:    goto LAB14;

LAB8:    xsi_set_current_line(28, ng21);
    t4 = (t1 + 24664);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 25304);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    t25 = ((char*)((ng17)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t19, 32, t25, 32);
    t26 = ((char*)((ng22)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_rshift(t18, 32, t10, 32, t26, 32);
    memset(t34, 0, 8);
    t30 = (t8 + 4);
    t31 = (t18 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t18);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t30);
    t16 = *((unsigned int *)t31);
    t17 = (t15 ^ t16);
    t20 = (t14 | t17);
    t21 = *((unsigned int *)t30);
    t22 = *((unsigned int *)t31);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t27 = (t20 & t24);
    if (t27 != 0)
        goto LAB39;

LAB36:    if (t23 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t34) = 1;

LAB39:    memset(t50, 0, 8);
    t33 = (t34 + 4);
    t28 = *((unsigned int *)t33);
    t29 = (~(t28));
    t37 = *((unsigned int *)t34);
    t38 = (t37 & t29);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t33) != 0)
        goto LAB42;

LAB43:    t36 = (t50 + 4);
    t40 = *((unsigned int *)t50);
    t41 = *((unsigned int *)t36);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB44;

LAB45:    memcpy(t101, t50, 8);

LAB46:    t108 = (t101 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t101);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(32, ng21);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 23224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB60:    goto LAB14;

LAB10:    xsi_set_current_line(34, ng21);
    t4 = (t1 + 25144);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 25304);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    memset(t10, 0, 8);
    t25 = (t8 + 4);
    t26 = (t19 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t19);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t25);
    t16 = *((unsigned int *)t26);
    t17 = (t15 ^ t16);
    t20 = (t14 | t17);
    t21 = *((unsigned int *)t25);
    t22 = *((unsigned int *)t26);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t27 = (t20 & t24);
    if (t27 != 0)
        goto LAB64;

LAB61:    if (t23 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t10) = 1;

LAB64:    t31 = (t10 + 4);
    t28 = *((unsigned int *)t31);
    t29 = (~(t28));
    t37 = *((unsigned int *)t10);
    t38 = (t37 & t29);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(37, ng21);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 23224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB67:    goto LAB14;

LAB12:    xsi_set_current_line(39, ng21);
    t4 = (t1 + 24024);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 25784);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    memset(t10, 0, 8);
    t25 = (t8 + 4);
    t26 = (t19 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t19);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t25);
    t16 = *((unsigned int *)t26);
    t17 = (t15 ^ t16);
    t20 = (t14 | t17);
    t21 = *((unsigned int *)t25);
    t22 = *((unsigned int *)t26);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t27 = (t20 & t24);
    if (t27 != 0)
        goto LAB71;

LAB68:    if (t23 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t10) = 1;

LAB71:    memset(t18, 0, 8);
    t31 = (t10 + 4);
    t28 = *((unsigned int *)t31);
    t29 = (~(t28));
    t37 = *((unsigned int *)t10);
    t38 = (t37 & t29);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t31) != 0)
        goto LAB74;

LAB75:    t33 = (t18 + 4);
    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t33);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB76;

LAB77:    memcpy(t58, t18, 8);

LAB78:    memset(t98, 0, 8);
    t97 = (t58 + 4);
    t91 = *((unsigned int *)t97);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t97) != 0)
        goto LAB88;

LAB89:    t102 = (t98 + 4);
    t107 = *((unsigned int *)t98);
    t109 = *((unsigned int *)t102);
    t110 = (t107 || t109);
    if (t110 > 0)
        goto LAB90;

LAB91:    memcpy(t134, t98, 8);

LAB92:    t166 = (t134 + 4);
    t167 = *((unsigned int *)t166);
    t168 = (~(t167));
    t169 = *((unsigned int *)t134);
    t170 = (t169 & t168);
    t171 = (t170 != 0);
    if (t171 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(44, ng21);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 23224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB106:    goto LAB14;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    t30 = (t1 + 23704);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng6)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB25;

LAB22:    if (t46 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t34) = 1;

LAB25:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t51) != 0)
        goto LAB28;

LAB29:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t50) = 1;
    goto LAB29;

LAB28:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB29;

LAB30:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB32;

LAB33:    xsi_set_current_line(24, ng21);
    t96 = ((char*)((ng8)));
    t97 = (t1 + 23224);
    xsi_vlogvar_assign_value(t97, t96, 0, 0, 1);
    goto LAB35;

LAB38:    t32 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t50) = 1;
    goto LAB43;

LAB42:    t35 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB43;

LAB44:    t49 = (t1 + 24824);
    t51 = (t49 + 56U);
    t57 = *((char **)t51);
    t62 = (t1 + 25304);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t72 = ((char*)((ng17)));
    memset(t58, 0, 8);
    xsi_vlog_unsigned_add(t58, 32, t64, 32, t72, 32);
    memset(t98, 0, 8);
    t73 = (t57 + 4);
    t90 = (t58 + 4);
    t43 = *((unsigned int *)t57);
    t44 = *((unsigned int *)t58);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t73);
    t47 = *((unsigned int *)t90);
    t48 = (t46 ^ t47);
    t52 = (t45 | t48);
    t53 = *((unsigned int *)t73);
    t54 = *((unsigned int *)t90);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t59 = (t52 & t56);
    if (t59 != 0)
        goto LAB50;

LAB47:    if (t55 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t98) = 1;

LAB50:    memset(t99, 0, 8);
    t97 = (t98 + 4);
    t60 = *((unsigned int *)t97);
    t61 = (~(t60));
    t65 = *((unsigned int *)t98);
    t66 = (t65 & t61);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t97) != 0)
        goto LAB53;

LAB54:    t68 = *((unsigned int *)t50);
    t69 = *((unsigned int *)t99);
    t70 = (t68 & t69);
    *((unsigned int *)t101) = t70;
    t102 = (t50 + 4);
    t103 = (t99 + 4);
    t104 = (t101 + 4);
    t71 = *((unsigned int *)t102);
    t74 = *((unsigned int *)t103);
    t75 = (t71 | t74);
    *((unsigned int *)t104) = t75;
    t76 = *((unsigned int *)t104);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB46;

LAB49:    t96 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t99) = 1;
    goto LAB54;

LAB53:    t100 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB54;

LAB55:    t78 = *((unsigned int *)t101);
    t79 = *((unsigned int *)t104);
    *((unsigned int *)t101) = (t78 | t79);
    t105 = (t50 + 4);
    t106 = (t99 + 4);
    t80 = *((unsigned int *)t50);
    t81 = (~(t80));
    t84 = *((unsigned int *)t105);
    t85 = (~(t84));
    t86 = *((unsigned int *)t99);
    t87 = (~(t86));
    t88 = *((unsigned int *)t106);
    t89 = (~(t88));
    t82 = (t81 & t85);
    t83 = (t87 & t89);
    t91 = (~(t82));
    t92 = (~(t83));
    t93 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t93 & t91);
    t94 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t94 & t92);
    t95 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t95 & t91);
    t107 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t107 & t92);
    goto LAB57;

LAB58:    xsi_set_current_line(30, ng21);
    t114 = ((char*)((ng8)));
    t115 = (t1 + 23224);
    xsi_vlogvar_assign_value(t115, t114, 0, 0, 1);
    goto LAB60;

LAB63:    t30 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(35, ng21);
    t32 = ((char*)((ng8)));
    t33 = (t1 + 23224);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 1);
    goto LAB67;

LAB70:    t30 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t18) = 1;
    goto LAB75;

LAB74:    t32 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB75;

LAB76:    t35 = (t1 + 24184);
    t36 = (t35 + 56U);
    t49 = *((char **)t36);
    memset(t34, 0, 8);
    t51 = (t34 + 4);
    t57 = (t49 + 4);
    t43 = *((unsigned int *)t49);
    t44 = (t43 >> 5);
    t45 = (t44 & 1);
    *((unsigned int *)t34) = t45;
    t46 = *((unsigned int *)t57);
    t47 = (t46 >> 5);
    t48 = (t47 & 1);
    *((unsigned int *)t51) = t48;
    memset(t50, 0, 8);
    t62 = (t34 + 4);
    t52 = *((unsigned int *)t62);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t62) != 0)
        goto LAB81;

LAB82:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t64 = (t18 + 4);
    t72 = (t50 + 4);
    t73 = (t58 + 4);
    t65 = *((unsigned int *)t64);
    t66 = *((unsigned int *)t72);
    t67 = (t65 | t66);
    *((unsigned int *)t73) = t67;
    t68 = *((unsigned int *)t73);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB78;

LAB79:    *((unsigned int *)t50) = 1;
    goto LAB82;

LAB81:    t63 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB82;

LAB83:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t73);
    *((unsigned int *)t58) = (t70 | t71);
    t90 = (t18 + 4);
    t96 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t90);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t96);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t86 & t84);
    t87 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB85;

LAB86:    *((unsigned int *)t98) = 1;
    goto LAB89;

LAB88:    t100 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB89;

LAB90:    t103 = (t1 + 24504);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    t106 = (t1 + 25624);
    t108 = (t106 + 56U);
    t114 = *((char **)t108);
    memset(t99, 0, 8);
    t115 = (t105 + 4);
    t116 = (t114 + 4);
    t111 = *((unsigned int *)t105);
    t112 = *((unsigned int *)t114);
    t113 = (t111 ^ t112);
    t117 = *((unsigned int *)t115);
    t118 = *((unsigned int *)t116);
    t119 = (t117 ^ t118);
    t120 = (t113 | t119);
    t121 = *((unsigned int *)t115);
    t122 = *((unsigned int *)t116);
    t123 = (t121 | t122);
    t124 = (~(t123));
    t125 = (t120 & t124);
    if (t125 != 0)
        goto LAB96;

LAB93:    if (t123 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t99) = 1;

LAB96:    memset(t101, 0, 8);
    t127 = (t99 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t99);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t127) != 0)
        goto LAB99;

LAB100:    t135 = *((unsigned int *)t98);
    t136 = *((unsigned int *)t101);
    t137 = (t135 & t136);
    *((unsigned int *)t134) = t137;
    t138 = (t98 + 4);
    t139 = (t101 + 4);
    t140 = (t134 + 4);
    t141 = *((unsigned int *)t138);
    t142 = *((unsigned int *)t139);
    t143 = (t141 | t142);
    *((unsigned int *)t140) = t143;
    t144 = *((unsigned int *)t140);
    t145 = (t144 != 0);
    if (t145 == 1)
        goto LAB101;

LAB102:
LAB103:    goto LAB92;

LAB95:    t126 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB96;

LAB97:    *((unsigned int *)t101) = 1;
    goto LAB100;

LAB99:    t133 = (t101 + 4);
    *((unsigned int *)t101) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB100;

LAB101:    t146 = *((unsigned int *)t134);
    t147 = *((unsigned int *)t140);
    *((unsigned int *)t134) = (t146 | t147);
    t148 = (t98 + 4);
    t149 = (t101 + 4);
    t150 = *((unsigned int *)t98);
    t151 = (~(t150));
    t152 = *((unsigned int *)t148);
    t153 = (~(t152));
    t154 = *((unsigned int *)t101);
    t155 = (~(t154));
    t156 = *((unsigned int *)t149);
    t157 = (~(t156));
    t158 = (t151 & t153);
    t159 = (t155 & t157);
    t160 = (~(t158));
    t161 = (~(t159));
    t162 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t162 & t160);
    t163 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t163 & t161);
    t164 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t164 & t160);
    t165 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t165 & t161);
    goto LAB103;

LAB104:    xsi_set_current_line(42, ng21);
    t172 = ((char*)((ng8)));
    t173 = (t1 + 23224);
    xsi_vlogvar_assign_value(t173, t172, 0, 0, 1);
    goto LAB106;

}

static int sp_TEST_MOV(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t90[8];
    char t108[8];
    char t124[8];
    char t132[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    int t156;
    int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    char *t172;
    char *t173;

LAB0:    t0 = 1;
    xsi_set_current_line(18, ng23);

LAB2:    xsi_set_current_line(19, ng23);
    t3 = (t1 + 26104);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(20, ng23);
    t8 = ((char*)((ng8)));
    t9 = (t1 + 25944);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(23, ng23);
    t4 = (t1 + 26264);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 5);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 5);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) != 0)
        goto LAB17;

LAB18:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB19;

LAB20:    memcpy(t58, t18, 8);

LAB21:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t91) != 0)
        goto LAB35;

LAB36:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB37;

LAB38:    memcpy(t132, t90, 8);

LAB39:    t164 = (t132 + 4);
    t165 = *((unsigned int *)t164);
    t166 = (~(t165));
    t167 = *((unsigned int *)t132);
    t168 = (t167 & t166);
    t169 = (t168 != 0);
    if (t169 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(31, ng23);

LAB55:    xsi_set_current_line(32, ng23);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 25944);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(33, ng23);
    t3 = (t1 + 28344);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 28184);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 3008);
    xsi_vlogfile_write(1, 0, 0, ng26, 3, t19, (char)119, t6, 32, (char)119, t11, 32);

LAB53:    goto LAB14;

LAB8:    xsi_set_current_line(35, ng23);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 25944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB10:    xsi_set_current_line(36, ng23);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 25944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB12:    xsi_set_current_line(38, ng23);
    t4 = (t1 + 26744);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 28504);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    memset(t10, 0, 8);
    t25 = (t8 + 4);
    t26 = (t19 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t19);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t25);
    t16 = *((unsigned int *)t26);
    t17 = (t15 ^ t16);
    t20 = (t14 | t17);
    t21 = *((unsigned int *)t25);
    t22 = *((unsigned int *)t26);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t27 = (t20 & t24);
    if (t27 != 0)
        goto LAB59;

LAB56:    if (t23 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t10) = 1;

LAB59:    memset(t18, 0, 8);
    t31 = (t10 + 4);
    t28 = *((unsigned int *)t31);
    t29 = (~(t28));
    t37 = *((unsigned int *)t10);
    t38 = (t37 & t29);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t31) != 0)
        goto LAB62;

LAB63:    t33 = (t18 + 4);
    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t33);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB64;

LAB65:    memcpy(t58, t18, 8);

LAB66:    memset(t90, 0, 8);
    t98 = (t58 + 4);
    t92 = *((unsigned int *)t98);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t98) != 0)
        goto LAB76;

LAB77:    t103 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t103);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB78;

LAB79:    memcpy(t132, t90, 8);

LAB80:    t171 = (t132 + 4);
    t165 = *((unsigned int *)t171);
    t166 = (~(t165));
    t167 = *((unsigned int *)t132);
    t168 = (t167 & t166);
    t169 = (t168 != 0);
    if (t169 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(46, ng23);

LAB96:    xsi_set_current_line(47, ng23);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 25944);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(48, ng23);
    t3 = (t1 + 28344);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 28184);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 3008);
    xsi_vlogfile_write(1, 0, 0, ng28, 3, t19, (char)119, t6, 32, (char)119, t11, 32);

LAB94:    goto LAB14;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    t30 = (t1 + 26424);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng24)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB25;

LAB22:    if (t46 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t34) = 1;

LAB25:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t51) != 0)
        goto LAB28;

LAB29:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t50) = 1;
    goto LAB29;

LAB28:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB29;

LAB30:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB32;

LAB33:    *((unsigned int *)t90) = 1;
    goto LAB36;

LAB35:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB36;

LAB37:    t102 = (t1 + 27064);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = (t1 + 28184);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    memset(t108, 0, 8);
    t109 = (t104 + 4);
    t110 = (t107 + 4);
    t111 = *((unsigned int *)t104);
    t112 = *((unsigned int *)t107);
    t113 = (t111 ^ t112);
    t114 = *((unsigned int *)t109);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = (t113 | t116);
    t118 = *((unsigned int *)t109);
    t119 = *((unsigned int *)t110);
    t120 = (t118 | t119);
    t121 = (~(t120));
    t122 = (t117 & t121);
    if (t122 != 0)
        goto LAB43;

LAB40:    if (t120 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t108) = 1;

LAB43:    memset(t124, 0, 8);
    t125 = (t108 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t108);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t125) != 0)
        goto LAB46;

LAB47:    t133 = *((unsigned int *)t90);
    t134 = *((unsigned int *)t124);
    t135 = (t133 & t134);
    *((unsigned int *)t132) = t135;
    t136 = (t90 + 4);
    t137 = (t124 + 4);
    t138 = (t132 + 4);
    t139 = *((unsigned int *)t136);
    t140 = *((unsigned int *)t137);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB39;

LAB42:    t123 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t124) = 1;
    goto LAB47;

LAB46:    t131 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB47;

LAB48:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t132) = (t144 | t145);
    t146 = (t90 + 4);
    t147 = (t124 + 4);
    t148 = *((unsigned int *)t90);
    t149 = (~(t148));
    t150 = *((unsigned int *)t146);
    t151 = (~(t150));
    t152 = *((unsigned int *)t124);
    t153 = (~(t152));
    t154 = *((unsigned int *)t147);
    t155 = (~(t154));
    t156 = (t149 & t151);
    t157 = (t153 & t155);
    t158 = (~(t156));
    t159 = (~(t157));
    t160 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t160 & t158);
    t161 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t161 & t159);
    t162 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t162 & t158);
    t163 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t163 & t159);
    goto LAB50;

LAB51:    xsi_set_current_line(26, ng23);

LAB54:    xsi_set_current_line(27, ng23);
    t170 = ((char*)((ng8)));
    t171 = (t1 + 25944);
    xsi_vlogvar_assign_value(t171, t170, 0, 0, 1);
    xsi_set_current_line(28, ng23);
    t3 = (t1 + 28344);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 28184);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 3008);
    xsi_vlogfile_write(1, 0, 0, ng25, 3, t19, (char)119, t6, 32, (char)119, t11, 32);
    goto LAB53;

LAB58:    t30 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t18) = 1;
    goto LAB63;

LAB62:    t32 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB63;

LAB64:    t35 = (t1 + 26904);
    t36 = (t35 + 56U);
    t49 = *((char **)t36);
    memset(t34, 0, 8);
    t51 = (t34 + 4);
    t57 = (t49 + 4);
    t43 = *((unsigned int *)t49);
    t44 = (t43 >> 5);
    t45 = (t44 & 1);
    *((unsigned int *)t34) = t45;
    t46 = *((unsigned int *)t57);
    t47 = (t46 >> 5);
    t48 = (t47 & 1);
    *((unsigned int *)t51) = t48;
    memset(t50, 0, 8);
    t62 = (t34 + 4);
    t52 = *((unsigned int *)t62);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t62) != 0)
        goto LAB69;

LAB70:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t64 = (t18 + 4);
    t72 = (t50 + 4);
    t73 = (t58 + 4);
    t65 = *((unsigned int *)t64);
    t66 = *((unsigned int *)t72);
    t67 = (t65 | t66);
    *((unsigned int *)t73) = t67;
    t68 = *((unsigned int *)t73);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB66;

LAB67:    *((unsigned int *)t50) = 1;
    goto LAB70;

LAB69:    t63 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB70;

LAB71:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t73);
    *((unsigned int *)t58) = (t70 | t71);
    t91 = (t18 + 4);
    t97 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t91);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t97);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t86 & t84);
    t87 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB73;

LAB74:    *((unsigned int *)t90) = 1;
    goto LAB77;

LAB76:    t102 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB77;

LAB78:    t104 = (t1 + 27224);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = (t1 + 28344);
    t109 = (t107 + 56U);
    t110 = *((char **)t109);
    memset(t108, 0, 8);
    t123 = (t106 + 4);
    t125 = (t110 + 4);
    t111 = *((unsigned int *)t106);
    t112 = *((unsigned int *)t110);
    t113 = (t111 ^ t112);
    t114 = *((unsigned int *)t123);
    t115 = *((unsigned int *)t125);
    t116 = (t114 ^ t115);
    t117 = (t113 | t116);
    t118 = *((unsigned int *)t123);
    t119 = *((unsigned int *)t125);
    t120 = (t118 | t119);
    t121 = (~(t120));
    t122 = (t117 & t121);
    if (t122 != 0)
        goto LAB84;

LAB81:    if (t120 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t108) = 1;

LAB84:    memset(t124, 0, 8);
    t136 = (t108 + 4);
    t126 = *((unsigned int *)t136);
    t127 = (~(t126));
    t128 = *((unsigned int *)t108);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t136) != 0)
        goto LAB87;

LAB88:    t133 = *((unsigned int *)t90);
    t134 = *((unsigned int *)t124);
    t135 = (t133 & t134);
    *((unsigned int *)t132) = t135;
    t138 = (t90 + 4);
    t146 = (t124 + 4);
    t147 = (t132 + 4);
    t139 = *((unsigned int *)t138);
    t140 = *((unsigned int *)t146);
    t141 = (t139 | t140);
    *((unsigned int *)t147) = t141;
    t142 = *((unsigned int *)t147);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB80;

LAB83:    t131 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t124) = 1;
    goto LAB88;

LAB87:    t137 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t137) = 1;
    goto LAB88;

LAB89:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t147);
    *((unsigned int *)t132) = (t144 | t145);
    t164 = (t90 + 4);
    t170 = (t124 + 4);
    t148 = *((unsigned int *)t90);
    t149 = (~(t148));
    t150 = *((unsigned int *)t164);
    t151 = (~(t150));
    t152 = *((unsigned int *)t124);
    t153 = (~(t152));
    t154 = *((unsigned int *)t170);
    t155 = (~(t154));
    t156 = (t149 & t151);
    t157 = (t153 & t155);
    t158 = (~(t156));
    t159 = (~(t157));
    t160 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t160 & t158);
    t161 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t161 & t159);
    t162 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t162 & t158);
    t163 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t163 & t159);
    goto LAB91;

LAB92:    xsi_set_current_line(41, ng23);

LAB95:    xsi_set_current_line(42, ng23);
    t172 = ((char*)((ng8)));
    t173 = (t1 + 25944);
    xsi_vlogvar_assign_value(t173, t172, 0, 0, 1);
    xsi_set_current_line(43, ng23);
    t3 = (t1 + 28344);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 28184);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 28344);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t30 = (t1 + 26744);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 3008);
    xsi_vlogfile_write(1, 0, 0, ng27, 5, t33, (char)119, t6, 32, (char)119, t11, 32, (char)119, t26, 32, (char)118, t32, 8);
    goto LAB94;

}

static int sp_TEST_ADD(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t90[8];
    char t105[8];
    char t114[8];
    char t122[8];
    char t154[8];
    char t169[8];
    char t178[8];
    char t186[8];
    char t218[8];
    char t236[8];
    char t252[8];
    char t260[8];
    char t292[8];
    char t310[8];
    char t326[8];
    char t334[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    int t146;
    int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t168;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    int t210;
    int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    char *t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t230;
    char *t231;
    char *t232;
    char *t233;
    char *t234;
    char *t235;
    char *t237;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    char *t251;
    char *t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    char *t264;
    char *t265;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    char *t274;
    char *t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    int t284;
    int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    char *t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    char *t299;
    char *t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    char *t304;
    char *t305;
    char *t306;
    char *t307;
    char *t308;
    char *t309;
    char *t311;
    char *t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    unsigned int t324;
    char *t325;
    char *t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    char *t333;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    char *t338;
    char *t339;
    char *t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    char *t348;
    char *t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    unsigned int t356;
    unsigned int t357;
    int t358;
    int t359;
    unsigned int t360;
    unsigned int t361;
    unsigned int t362;
    unsigned int t363;
    unsigned int t364;
    unsigned int t365;
    char *t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    char *t372;
    char *t373;

LAB0:    t0 = 1;
    xsi_set_current_line(18, ng29);

LAB2:    xsi_set_current_line(19, ng29);
    t3 = (t1 + 28824);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(20, ng29);
    t8 = ((char*)((ng8)));
    t9 = (t1 + 28664);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(22, ng29);
    t4 = (t1 + 28984);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 3);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) != 0)
        goto LAB17;

LAB18:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB19;

LAB20:    memcpy(t58, t18, 8);

LAB21:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t91) != 0)
        goto LAB35;

LAB36:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB37;

LAB38:    memcpy(t122, t90, 8);

LAB39:    memset(t154, 0, 8);
    t155 = (t122 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t122);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t155) != 0)
        goto LAB49;

LAB50:    t162 = (t154 + 4);
    t163 = *((unsigned int *)t154);
    t164 = *((unsigned int *)t162);
    t165 = (t163 || t164);
    if (t165 > 0)
        goto LAB51;

LAB52:    memcpy(t186, t154, 8);

LAB53:    memset(t218, 0, 8);
    t219 = (t186 + 4);
    t220 = *((unsigned int *)t219);
    t221 = (~(t220));
    t222 = *((unsigned int *)t186);
    t223 = (t222 & t221);
    t224 = (t223 & 1U);
    if (t224 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t219) != 0)
        goto LAB63;

LAB64:    t226 = (t218 + 4);
    t227 = *((unsigned int *)t218);
    t228 = *((unsigned int *)t226);
    t229 = (t227 || t228);
    if (t229 > 0)
        goto LAB65;

LAB66:    memcpy(t260, t218, 8);

LAB67:    memset(t292, 0, 8);
    t293 = (t260 + 4);
    t294 = *((unsigned int *)t293);
    t295 = (~(t294));
    t296 = *((unsigned int *)t260);
    t297 = (t296 & t295);
    t298 = (t297 & 1U);
    if (t298 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t293) != 0)
        goto LAB81;

LAB82:    t300 = (t292 + 4);
    t301 = *((unsigned int *)t292);
    t302 = *((unsigned int *)t300);
    t303 = (t301 || t302);
    if (t303 > 0)
        goto LAB83;

LAB84:    memcpy(t334, t292, 8);

LAB85:    t366 = (t334 + 4);
    t367 = *((unsigned int *)t366);
    t368 = (~(t367));
    t369 = *((unsigned int *)t334);
    t370 = (t369 & t368);
    t371 = (t370 != 0);
    if (t371 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(33, ng29);

LAB101:    xsi_set_current_line(34, ng29);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 28664);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(35, ng29);
    t3 = (t1 + 31064);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 30904);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 3440);
    xsi_vlogfile_write(1, 0, 0, ng32, 3, t19, (char)119, t6, 32, (char)119, t11, 32);

LAB99:    goto LAB14;

LAB8:    xsi_set_current_line(39, ng29);
    t4 = (t1 + 30424);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 31224);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    memset(t10, 0, 8);
    t25 = (t10 + 4);
    t26 = (t19 + 4);
    t12 = *((unsigned int *)t19);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t26);
    t15 = (t14 >> 0);
    *((unsigned int *)t25) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t17 & 255U);
    memset(t18, 0, 8);
    t30 = (t8 + 4);
    t31 = (t10 + 4);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t10);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t31);
    t27 = (t23 ^ t24);
    t28 = (t22 | t27);
    t29 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    t38 = (t29 | t37);
    t39 = (~(t38));
    t40 = (t28 & t39);
    if (t40 != 0)
        goto LAB105;

LAB102:    if (t38 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t18) = 1;

LAB105:    t33 = (t18 + 4);
    t41 = *((unsigned int *)t33);
    t42 = (~(t41));
    t43 = *((unsigned int *)t18);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(45, ng29);

LAB110:    xsi_set_current_line(46, ng29);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 28664);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(47, ng29);
    t3 = (t1 + 31064);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 30904);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 30424);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t30 = (t1 + 31224);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t10, 0, 8);
    t33 = (t10 + 4);
    t35 = (t32 + 4);
    t12 = *((unsigned int *)t32);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t35);
    t15 = (t14 >> 0);
    *((unsigned int *)t33) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t17 & 255U);
    t36 = (t1 + 3440);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t36, (char)119, t6, 32, (char)119, t11, 32, (char)118, t26, 8, (char)118, t10, 8);

LAB108:    goto LAB14;

LAB10:    xsi_set_current_line(49, ng29);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 28664);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB12:    xsi_set_current_line(51, ng29);
    t4 = (t1 + 29464);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 31224);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    memset(t10, 0, 8);
    t25 = (t10 + 4);
    t26 = (t19 + 4);
    t12 = *((unsigned int *)t19);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t26);
    t15 = (t14 >> 0);
    *((unsigned int *)t25) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t17 & 255U);
    memset(t18, 0, 8);
    t30 = (t8 + 4);
    t31 = (t10 + 4);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t10);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t31);
    t27 = (t23 ^ t24);
    t28 = (t22 | t27);
    t29 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    t38 = (t29 | t37);
    t39 = (~(t38));
    t40 = (t28 & t39);
    if (t40 != 0)
        goto LAB114;

LAB111:    if (t38 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t18) = 1;

LAB114:    memset(t34, 0, 8);
    t33 = (t18 + 4);
    t41 = *((unsigned int *)t33);
    t42 = (~(t41));
    t43 = *((unsigned int *)t18);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t33) != 0)
        goto LAB117;

LAB118:    t36 = (t34 + 4);
    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t36);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB119;

LAB120:    memcpy(t90, t34, 8);

LAB121:    memset(t105, 0, 8);
    t103 = (t90 + 4);
    t100 = *((unsigned int *)t103);
    t101 = (~(t100));
    t108 = *((unsigned int *)t90);
    t109 = (t108 & t101);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t103) != 0)
        goto LAB131;

LAB132:    t106 = (t105 + 4);
    t111 = *((unsigned int *)t105);
    t112 = *((unsigned int *)t106);
    t113 = (t111 || t112);
    if (t113 > 0)
        goto LAB133;

LAB134:    memcpy(t154, t105, 8);

LAB135:    t179 = (t154 + 4);
    t176 = *((unsigned int *)t179);
    t177 = (~(t176));
    t180 = *((unsigned int *)t154);
    t181 = (t180 & t177);
    t182 = (t181 != 0);
    if (t182 > 0)
        goto LAB147;

LAB148:    xsi_set_current_line(59, ng29);

LAB151:    xsi_set_current_line(60, ng29);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 28664);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(61, ng29);
    t3 = (t1 + 31064);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 30904);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 29464);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t30 = (t1 + 31224);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t10, 0, 8);
    t33 = (t10 + 4);
    t35 = (t32 + 4);
    t12 = *((unsigned int *)t32);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t35);
    t15 = (t14 >> 0);
    *((unsigned int *)t33) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t17 & 255U);
    t36 = (t1 + 3440);
    xsi_vlogfile_write(1, 0, 0, ng36, 5, t36, (char)119, t6, 32, (char)119, t11, 32, (char)118, t26, 8, (char)118, t10, 8);

LAB149:    goto LAB14;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    t30 = (t1 + 29144);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng30)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB25;

LAB22:    if (t46 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t34) = 1;

LAB25:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t51) != 0)
        goto LAB28;

LAB29:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t50) = 1;
    goto LAB29;

LAB28:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB29;

LAB30:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB32;

LAB33:    *((unsigned int *)t90) = 1;
    goto LAB36;

LAB35:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB36;

LAB37:    t102 = (t1 + 29624);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memset(t105, 0, 8);
    t106 = (t105 + 4);
    t107 = (t104 + 4);
    t108 = *((unsigned int *)t104);
    t109 = (t108 >> 2);
    t110 = (t109 & 1);
    *((unsigned int *)t105) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 >> 2);
    t113 = (t112 & 1);
    *((unsigned int *)t106) = t113;
    memset(t114, 0, 8);
    t115 = (t105 + 4);
    t116 = *((unsigned int *)t115);
    t117 = (~(t116));
    t118 = *((unsigned int *)t105);
    t119 = (t118 & t117);
    t120 = (t119 & 1U);
    if (t120 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t115) != 0)
        goto LAB42;

LAB43:    t123 = *((unsigned int *)t90);
    t124 = *((unsigned int *)t114);
    t125 = (t123 & t124);
    *((unsigned int *)t122) = t125;
    t126 = (t90 + 4);
    t127 = (t114 + 4);
    t128 = (t122 + 4);
    t129 = *((unsigned int *)t126);
    t130 = *((unsigned int *)t127);
    t131 = (t129 | t130);
    *((unsigned int *)t128) = t131;
    t132 = *((unsigned int *)t128);
    t133 = (t132 != 0);
    if (t133 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB39;

LAB40:    *((unsigned int *)t114) = 1;
    goto LAB43;

LAB42:    t121 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB43;

LAB44:    t134 = *((unsigned int *)t122);
    t135 = *((unsigned int *)t128);
    *((unsigned int *)t122) = (t134 | t135);
    t136 = (t90 + 4);
    t137 = (t114 + 4);
    t138 = *((unsigned int *)t90);
    t139 = (~(t138));
    t140 = *((unsigned int *)t136);
    t141 = (~(t140));
    t142 = *((unsigned int *)t114);
    t143 = (~(t142));
    t144 = *((unsigned int *)t137);
    t145 = (~(t144));
    t146 = (t139 & t141);
    t147 = (t143 & t145);
    t148 = (~(t146));
    t149 = (~(t147));
    t150 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t150 & t148);
    t151 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t151 & t149);
    t152 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t152 & t148);
    t153 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t153 & t149);
    goto LAB46;

LAB47:    *((unsigned int *)t154) = 1;
    goto LAB50;

LAB49:    t161 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB50;

LAB51:    t166 = (t1 + 29624);
    t167 = (t166 + 56U);
    t168 = *((char **)t167);
    memset(t169, 0, 8);
    t170 = (t169 + 4);
    t171 = (t168 + 4);
    t172 = *((unsigned int *)t168);
    t173 = (t172 >> 4);
    t174 = (t173 & 1);
    *((unsigned int *)t169) = t174;
    t175 = *((unsigned int *)t171);
    t176 = (t175 >> 4);
    t177 = (t176 & 1);
    *((unsigned int *)t170) = t177;
    memset(t178, 0, 8);
    t179 = (t169 + 4);
    t180 = *((unsigned int *)t179);
    t181 = (~(t180));
    t182 = *((unsigned int *)t169);
    t183 = (t182 & t181);
    t184 = (t183 & 1U);
    if (t184 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t179) != 0)
        goto LAB56;

LAB57:    t187 = *((unsigned int *)t154);
    t188 = *((unsigned int *)t178);
    t189 = (t187 & t188);
    *((unsigned int *)t186) = t189;
    t190 = (t154 + 4);
    t191 = (t178 + 4);
    t192 = (t186 + 4);
    t193 = *((unsigned int *)t190);
    t194 = *((unsigned int *)t191);
    t195 = (t193 | t194);
    *((unsigned int *)t192) = t195;
    t196 = *((unsigned int *)t192);
    t197 = (t196 != 0);
    if (t197 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB53;

LAB54:    *((unsigned int *)t178) = 1;
    goto LAB57;

LAB56:    t185 = (t178 + 4);
    *((unsigned int *)t178) = 1;
    *((unsigned int *)t185) = 1;
    goto LAB57;

LAB58:    t198 = *((unsigned int *)t186);
    t199 = *((unsigned int *)t192);
    *((unsigned int *)t186) = (t198 | t199);
    t200 = (t154 + 4);
    t201 = (t178 + 4);
    t202 = *((unsigned int *)t154);
    t203 = (~(t202));
    t204 = *((unsigned int *)t200);
    t205 = (~(t204));
    t206 = *((unsigned int *)t178);
    t207 = (~(t206));
    t208 = *((unsigned int *)t201);
    t209 = (~(t208));
    t210 = (t203 & t205);
    t211 = (t207 & t209);
    t212 = (~(t210));
    t213 = (~(t211));
    t214 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t214 & t212);
    t215 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t215 & t213);
    t216 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t216 & t212);
    t217 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t217 & t213);
    goto LAB60;

LAB61:    *((unsigned int *)t218) = 1;
    goto LAB64;

LAB63:    t225 = (t218 + 4);
    *((unsigned int *)t218) = 1;
    *((unsigned int *)t225) = 1;
    goto LAB64;

LAB65:    t230 = (t1 + 29784);
    t231 = (t230 + 56U);
    t232 = *((char **)t231);
    t233 = (t1 + 30904);
    t234 = (t233 + 56U);
    t235 = *((char **)t234);
    memset(t236, 0, 8);
    t237 = (t232 + 4);
    t238 = (t235 + 4);
    t239 = *((unsigned int *)t232);
    t240 = *((unsigned int *)t235);
    t241 = (t239 ^ t240);
    t242 = *((unsigned int *)t237);
    t243 = *((unsigned int *)t238);
    t244 = (t242 ^ t243);
    t245 = (t241 | t244);
    t246 = *((unsigned int *)t237);
    t247 = *((unsigned int *)t238);
    t248 = (t246 | t247);
    t249 = (~(t248));
    t250 = (t245 & t249);
    if (t250 != 0)
        goto LAB71;

LAB68:    if (t248 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t236) = 1;

LAB71:    memset(t252, 0, 8);
    t253 = (t236 + 4);
    t254 = *((unsigned int *)t253);
    t255 = (~(t254));
    t256 = *((unsigned int *)t236);
    t257 = (t256 & t255);
    t258 = (t257 & 1U);
    if (t258 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t253) != 0)
        goto LAB74;

LAB75:    t261 = *((unsigned int *)t218);
    t262 = *((unsigned int *)t252);
    t263 = (t261 & t262);
    *((unsigned int *)t260) = t263;
    t264 = (t218 + 4);
    t265 = (t252 + 4);
    t266 = (t260 + 4);
    t267 = *((unsigned int *)t264);
    t268 = *((unsigned int *)t265);
    t269 = (t267 | t268);
    *((unsigned int *)t266) = t269;
    t270 = *((unsigned int *)t266);
    t271 = (t270 != 0);
    if (t271 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB67;

LAB70:    t251 = (t236 + 4);
    *((unsigned int *)t236) = 1;
    *((unsigned int *)t251) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t252) = 1;
    goto LAB75;

LAB74:    t259 = (t252 + 4);
    *((unsigned int *)t252) = 1;
    *((unsigned int *)t259) = 1;
    goto LAB75;

LAB76:    t272 = *((unsigned int *)t260);
    t273 = *((unsigned int *)t266);
    *((unsigned int *)t260) = (t272 | t273);
    t274 = (t218 + 4);
    t275 = (t252 + 4);
    t276 = *((unsigned int *)t218);
    t277 = (~(t276));
    t278 = *((unsigned int *)t274);
    t279 = (~(t278));
    t280 = *((unsigned int *)t252);
    t281 = (~(t280));
    t282 = *((unsigned int *)t275);
    t283 = (~(t282));
    t284 = (t277 & t279);
    t285 = (t281 & t283);
    t286 = (~(t284));
    t287 = (~(t285));
    t288 = *((unsigned int *)t266);
    *((unsigned int *)t266) = (t288 & t286);
    t289 = *((unsigned int *)t266);
    *((unsigned int *)t266) = (t289 & t287);
    t290 = *((unsigned int *)t260);
    *((unsigned int *)t260) = (t290 & t286);
    t291 = *((unsigned int *)t260);
    *((unsigned int *)t260) = (t291 & t287);
    goto LAB78;

LAB79:    *((unsigned int *)t292) = 1;
    goto LAB82;

LAB81:    t299 = (t292 + 4);
    *((unsigned int *)t292) = 1;
    *((unsigned int *)t299) = 1;
    goto LAB82;

LAB83:    t304 = (t1 + 29944);
    t305 = (t304 + 56U);
    t306 = *((char **)t305);
    t307 = (t1 + 31064);
    t308 = (t307 + 56U);
    t309 = *((char **)t308);
    memset(t310, 0, 8);
    t311 = (t306 + 4);
    t312 = (t309 + 4);
    t313 = *((unsigned int *)t306);
    t314 = *((unsigned int *)t309);
    t315 = (t313 ^ t314);
    t316 = *((unsigned int *)t311);
    t317 = *((unsigned int *)t312);
    t318 = (t316 ^ t317);
    t319 = (t315 | t318);
    t320 = *((unsigned int *)t311);
    t321 = *((unsigned int *)t312);
    t322 = (t320 | t321);
    t323 = (~(t322));
    t324 = (t319 & t323);
    if (t324 != 0)
        goto LAB89;

LAB86:    if (t322 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t310) = 1;

LAB89:    memset(t326, 0, 8);
    t327 = (t310 + 4);
    t328 = *((unsigned int *)t327);
    t329 = (~(t328));
    t330 = *((unsigned int *)t310);
    t331 = (t330 & t329);
    t332 = (t331 & 1U);
    if (t332 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t327) != 0)
        goto LAB92;

LAB93:    t335 = *((unsigned int *)t292);
    t336 = *((unsigned int *)t326);
    t337 = (t335 & t336);
    *((unsigned int *)t334) = t337;
    t338 = (t292 + 4);
    t339 = (t326 + 4);
    t340 = (t334 + 4);
    t341 = *((unsigned int *)t338);
    t342 = *((unsigned int *)t339);
    t343 = (t341 | t342);
    *((unsigned int *)t340) = t343;
    t344 = *((unsigned int *)t340);
    t345 = (t344 != 0);
    if (t345 == 1)
        goto LAB94;

LAB95:
LAB96:    goto LAB85;

LAB88:    t325 = (t310 + 4);
    *((unsigned int *)t310) = 1;
    *((unsigned int *)t325) = 1;
    goto LAB89;

LAB90:    *((unsigned int *)t326) = 1;
    goto LAB93;

LAB92:    t333 = (t326 + 4);
    *((unsigned int *)t326) = 1;
    *((unsigned int *)t333) = 1;
    goto LAB93;

LAB94:    t346 = *((unsigned int *)t334);
    t347 = *((unsigned int *)t340);
    *((unsigned int *)t334) = (t346 | t347);
    t348 = (t292 + 4);
    t349 = (t326 + 4);
    t350 = *((unsigned int *)t292);
    t351 = (~(t350));
    t352 = *((unsigned int *)t348);
    t353 = (~(t352));
    t354 = *((unsigned int *)t326);
    t355 = (~(t354));
    t356 = *((unsigned int *)t349);
    t357 = (~(t356));
    t358 = (t351 & t353);
    t359 = (t355 & t357);
    t360 = (~(t358));
    t361 = (~(t359));
    t362 = *((unsigned int *)t340);
    *((unsigned int *)t340) = (t362 & t360);
    t363 = *((unsigned int *)t340);
    *((unsigned int *)t340) = (t363 & t361);
    t364 = *((unsigned int *)t334);
    *((unsigned int *)t334) = (t364 & t360);
    t365 = *((unsigned int *)t334);
    *((unsigned int *)t334) = (t365 & t361);
    goto LAB96;

LAB97:    xsi_set_current_line(28, ng29);

LAB100:    xsi_set_current_line(29, ng29);
    t372 = ((char*)((ng8)));
    t373 = (t1 + 28664);
    xsi_vlogvar_assign_value(t373, t372, 0, 0, 1);
    xsi_set_current_line(30, ng29);
    t3 = (t1 + 31064);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 30904);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 3440);
    xsi_vlogfile_write(1, 0, 0, ng31, 3, t19, (char)119, t6, 32, (char)119, t11, 32);
    goto LAB99;

LAB104:    t32 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(40, ng29);

LAB109:    xsi_set_current_line(41, ng29);
    t35 = ((char*)((ng8)));
    t36 = (t1 + 28664);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 1);
    xsi_set_current_line(42, ng29);
    t3 = (t1 + 31064);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 30904);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 31224);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t30 = (t1 + 3440);
    xsi_vlogfile_write(1, 0, 0, ng33, 4, t30, (char)119, t6, 32, (char)119, t11, 32, (char)119, t26, 32);
    goto LAB108;

LAB113:    t32 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t34) = 1;
    goto LAB118;

LAB117:    t35 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB118;

LAB119:    t49 = (t1 + 29624);
    t51 = (t49 + 56U);
    t57 = *((char **)t51);
    memset(t50, 0, 8);
    t62 = (t50 + 4);
    t63 = (t57 + 4);
    t52 = *((unsigned int *)t57);
    t53 = (t52 >> 5);
    t54 = (t53 & 1);
    *((unsigned int *)t50) = t54;
    t55 = *((unsigned int *)t63);
    t56 = (t55 >> 5);
    t59 = (t56 & 1);
    *((unsigned int *)t62) = t59;
    memset(t58, 0, 8);
    t64 = (t50 + 4);
    t60 = *((unsigned int *)t64);
    t61 = (~(t60));
    t65 = *((unsigned int *)t50);
    t66 = (t65 & t61);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t64) != 0)
        goto LAB124;

LAB125:    t68 = *((unsigned int *)t34);
    t69 = *((unsigned int *)t58);
    t70 = (t68 & t69);
    *((unsigned int *)t90) = t70;
    t73 = (t34 + 4);
    t91 = (t58 + 4);
    t97 = (t90 + 4);
    t71 = *((unsigned int *)t73);
    t74 = *((unsigned int *)t91);
    t75 = (t71 | t74);
    *((unsigned int *)t97) = t75;
    t76 = *((unsigned int *)t97);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB126;

LAB127:
LAB128:    goto LAB121;

LAB122:    *((unsigned int *)t58) = 1;
    goto LAB125;

LAB124:    t72 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB125;

LAB126:    t78 = *((unsigned int *)t90);
    t79 = *((unsigned int *)t97);
    *((unsigned int *)t90) = (t78 | t79);
    t98 = (t34 + 4);
    t102 = (t58 + 4);
    t80 = *((unsigned int *)t34);
    t81 = (~(t80));
    t84 = *((unsigned int *)t98);
    t85 = (~(t84));
    t86 = *((unsigned int *)t58);
    t87 = (~(t86));
    t88 = *((unsigned int *)t102);
    t89 = (~(t88));
    t82 = (t81 & t85);
    t83 = (t87 & t89);
    t92 = (~(t82));
    t93 = (~(t83));
    t94 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t94 & t92);
    t95 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t95 & t93);
    t96 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t96 & t92);
    t99 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t99 & t93);
    goto LAB128;

LAB129:    *((unsigned int *)t105) = 1;
    goto LAB132;

LAB131:    t104 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB132;

LAB133:    t107 = (t1 + 29944);
    t115 = (t107 + 56U);
    t121 = *((char **)t115);
    t126 = (t1 + 31064);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    memset(t114, 0, 8);
    t136 = (t121 + 4);
    t137 = (t128 + 4);
    t116 = *((unsigned int *)t121);
    t117 = *((unsigned int *)t128);
    t118 = (t116 ^ t117);
    t119 = *((unsigned int *)t136);
    t120 = *((unsigned int *)t137);
    t123 = (t119 ^ t120);
    t124 = (t118 | t123);
    t125 = *((unsigned int *)t136);
    t129 = *((unsigned int *)t137);
    t130 = (t125 | t129);
    t131 = (~(t130));
    t132 = (t124 & t131);
    if (t132 != 0)
        goto LAB139;

LAB136:    if (t130 != 0)
        goto LAB138;

LAB137:    *((unsigned int *)t114) = 1;

LAB139:    memset(t122, 0, 8);
    t161 = (t114 + 4);
    t133 = *((unsigned int *)t161);
    t134 = (~(t133));
    t135 = *((unsigned int *)t114);
    t138 = (t135 & t134);
    t139 = (t138 & 1U);
    if (t139 != 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t161) != 0)
        goto LAB142;

LAB143:    t140 = *((unsigned int *)t105);
    t141 = *((unsigned int *)t122);
    t142 = (t140 & t141);
    *((unsigned int *)t154) = t142;
    t166 = (t105 + 4);
    t167 = (t122 + 4);
    t168 = (t154 + 4);
    t143 = *((unsigned int *)t166);
    t144 = *((unsigned int *)t167);
    t145 = (t143 | t144);
    *((unsigned int *)t168) = t145;
    t148 = *((unsigned int *)t168);
    t149 = (t148 != 0);
    if (t149 == 1)
        goto LAB144;

LAB145:
LAB146:    goto LAB135;

LAB138:    t155 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t155) = 1;
    goto LAB139;

LAB140:    *((unsigned int *)t122) = 1;
    goto LAB143;

LAB142:    t162 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB143;

LAB144:    t150 = *((unsigned int *)t154);
    t151 = *((unsigned int *)t168);
    *((unsigned int *)t154) = (t150 | t151);
    t170 = (t105 + 4);
    t171 = (t122 + 4);
    t152 = *((unsigned int *)t105);
    t153 = (~(t152));
    t156 = *((unsigned int *)t170);
    t157 = (~(t156));
    t158 = *((unsigned int *)t122);
    t159 = (~(t158));
    t160 = *((unsigned int *)t171);
    t163 = (~(t160));
    t146 = (t153 & t157);
    t147 = (t159 & t163);
    t164 = (~(t146));
    t165 = (~(t147));
    t172 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t172 & t164);
    t173 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t173 & t165);
    t174 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t174 & t164);
    t175 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t175 & t165);
    goto LAB146;

LAB147:    xsi_set_current_line(54, ng29);

LAB150:    xsi_set_current_line(55, ng29);
    t185 = ((char*)((ng8)));
    t190 = (t1 + 28664);
    xsi_vlogvar_assign_value(t190, t185, 0, 0, 1);
    xsi_set_current_line(56, ng29);
    t3 = (t1 + 31064);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 30904);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 31064);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t30 = (t1 + 31224);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 3440);
    xsi_vlogfile_write(1, 0, 0, ng35, 5, t33, (char)119, t6, 32, (char)119, t11, 32, (char)119, t26, 32, (char)119, t32, 32);
    goto LAB149;

}

static int sp_TEST_SUB(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t90[8];
    char t105[8];
    char t114[8];
    char t122[8];
    char t154[8];
    char t169[8];
    char t178[8];
    char t186[8];
    char t218[8];
    char t236[8];
    char t252[8];
    char t260[8];
    char t292[8];
    char t310[8];
    char t326[8];
    char t334[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    int t146;
    int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t168;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    int t210;
    int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    char *t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t230;
    char *t231;
    char *t232;
    char *t233;
    char *t234;
    char *t235;
    char *t237;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    char *t251;
    char *t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    char *t264;
    char *t265;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    char *t274;
    char *t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    int t284;
    int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    char *t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    char *t299;
    char *t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    char *t304;
    char *t305;
    char *t306;
    char *t307;
    char *t308;
    char *t309;
    char *t311;
    char *t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    unsigned int t324;
    char *t325;
    char *t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    char *t333;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    char *t338;
    char *t339;
    char *t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    char *t348;
    char *t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    unsigned int t356;
    unsigned int t357;
    int t358;
    int t359;
    unsigned int t360;
    unsigned int t361;
    unsigned int t362;
    unsigned int t363;
    unsigned int t364;
    unsigned int t365;
    char *t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    char *t372;
    char *t373;

LAB0:    t0 = 1;
    xsi_set_current_line(18, ng37);

LAB2:    xsi_set_current_line(19, ng37);
    t3 = (t1 + 31544);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(20, ng37);
    t8 = ((char*)((ng8)));
    t9 = (t1 + 31384);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(22, ng37);
    t4 = (t1 + 31704);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 3);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) != 0)
        goto LAB17;

LAB18:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB19;

LAB20:    memcpy(t58, t18, 8);

LAB21:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t91) != 0)
        goto LAB35;

LAB36:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB37;

LAB38:    memcpy(t122, t90, 8);

LAB39:    memset(t154, 0, 8);
    t155 = (t122 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t122);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t155) != 0)
        goto LAB49;

LAB50:    t162 = (t154 + 4);
    t163 = *((unsigned int *)t154);
    t164 = *((unsigned int *)t162);
    t165 = (t163 || t164);
    if (t165 > 0)
        goto LAB51;

LAB52:    memcpy(t186, t154, 8);

LAB53:    memset(t218, 0, 8);
    t219 = (t186 + 4);
    t220 = *((unsigned int *)t219);
    t221 = (~(t220));
    t222 = *((unsigned int *)t186);
    t223 = (t222 & t221);
    t224 = (t223 & 1U);
    if (t224 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t219) != 0)
        goto LAB63;

LAB64:    t226 = (t218 + 4);
    t227 = *((unsigned int *)t218);
    t228 = *((unsigned int *)t226);
    t229 = (t227 || t228);
    if (t229 > 0)
        goto LAB65;

LAB66:    memcpy(t260, t218, 8);

LAB67:    memset(t292, 0, 8);
    t293 = (t260 + 4);
    t294 = *((unsigned int *)t293);
    t295 = (~(t294));
    t296 = *((unsigned int *)t260);
    t297 = (t296 & t295);
    t298 = (t297 & 1U);
    if (t298 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t293) != 0)
        goto LAB81;

LAB82:    t300 = (t292 + 4);
    t301 = *((unsigned int *)t292);
    t302 = *((unsigned int *)t300);
    t303 = (t301 || t302);
    if (t303 > 0)
        goto LAB83;

LAB84:    memcpy(t334, t292, 8);

LAB85:    t366 = (t334 + 4);
    t367 = *((unsigned int *)t366);
    t368 = (~(t367));
    t369 = *((unsigned int *)t334);
    t370 = (t369 & t368);
    t371 = (t370 != 0);
    if (t371 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(33, ng37);

LAB101:    xsi_set_current_line(34, ng37);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 31384);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(35, ng37);
    t3 = (t1 + 33784);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 33624);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 3872);
    xsi_vlogfile_write(1, 0, 0, ng32, 3, t19, (char)119, t6, 32, (char)119, t11, 32);

LAB99:    goto LAB14;

LAB8:    xsi_set_current_line(39, ng37);
    t4 = (t1 + 33144);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 33944);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    memset(t10, 0, 8);
    t25 = (t10 + 4);
    t26 = (t19 + 4);
    t12 = *((unsigned int *)t19);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t26);
    t15 = (t14 >> 0);
    *((unsigned int *)t25) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t17 & 255U);
    memset(t18, 0, 8);
    t30 = (t8 + 4);
    t31 = (t10 + 4);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t10);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t31);
    t27 = (t23 ^ t24);
    t28 = (t22 | t27);
    t29 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    t38 = (t29 | t37);
    t39 = (~(t38));
    t40 = (t28 & t39);
    if (t40 != 0)
        goto LAB105;

LAB102:    if (t38 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t18) = 1;

LAB105:    t33 = (t18 + 4);
    t41 = *((unsigned int *)t33);
    t42 = (~(t41));
    t43 = *((unsigned int *)t18);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(45, ng37);

LAB110:    xsi_set_current_line(46, ng37);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 31384);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(47, ng37);
    t3 = (t1 + 33784);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 33624);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 33144);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t30 = (t1 + 33944);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t10, 0, 8);
    t33 = (t10 + 4);
    t35 = (t32 + 4);
    t12 = *((unsigned int *)t32);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t35);
    t15 = (t14 >> 0);
    *((unsigned int *)t33) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t17 & 255U);
    t36 = (t1 + 3872);
    xsi_vlogfile_write(1, 0, 0, ng40, 5, t36, (char)119, t6, 32, (char)119, t11, 32, (char)118, t26, 8, (char)118, t10, 8);

LAB108:    goto LAB14;

LAB10:    xsi_set_current_line(49, ng37);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 31384);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB12:    xsi_set_current_line(51, ng37);
    t4 = (t1 + 32184);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 33944);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    memset(t10, 0, 8);
    t25 = (t10 + 4);
    t26 = (t19 + 4);
    t12 = *((unsigned int *)t19);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t26);
    t15 = (t14 >> 0);
    *((unsigned int *)t25) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t17 & 255U);
    memset(t18, 0, 8);
    t30 = (t8 + 4);
    t31 = (t10 + 4);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t10);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t31);
    t27 = (t23 ^ t24);
    t28 = (t22 | t27);
    t29 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    t38 = (t29 | t37);
    t39 = (~(t38));
    t40 = (t28 & t39);
    if (t40 != 0)
        goto LAB114;

LAB111:    if (t38 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t18) = 1;

LAB114:    memset(t34, 0, 8);
    t33 = (t18 + 4);
    t41 = *((unsigned int *)t33);
    t42 = (~(t41));
    t43 = *((unsigned int *)t18);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t33) != 0)
        goto LAB117;

LAB118:    t36 = (t34 + 4);
    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t36);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB119;

LAB120:    memcpy(t90, t34, 8);

LAB121:    memset(t105, 0, 8);
    t103 = (t90 + 4);
    t100 = *((unsigned int *)t103);
    t101 = (~(t100));
    t108 = *((unsigned int *)t90);
    t109 = (t108 & t101);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t103) != 0)
        goto LAB131;

LAB132:    t106 = (t105 + 4);
    t111 = *((unsigned int *)t105);
    t112 = *((unsigned int *)t106);
    t113 = (t111 || t112);
    if (t113 > 0)
        goto LAB133;

LAB134:    memcpy(t154, t105, 8);

LAB135:    t179 = (t154 + 4);
    t176 = *((unsigned int *)t179);
    t177 = (~(t176));
    t180 = *((unsigned int *)t154);
    t181 = (t180 & t177);
    t182 = (t181 != 0);
    if (t182 > 0)
        goto LAB147;

LAB148:    xsi_set_current_line(59, ng37);

LAB151:    xsi_set_current_line(60, ng37);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 31384);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(61, ng37);
    t3 = (t1 + 33784);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 33624);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 32184);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t30 = (t1 + 33944);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t10, 0, 8);
    t33 = (t10 + 4);
    t35 = (t32 + 4);
    t12 = *((unsigned int *)t32);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t35);
    t15 = (t14 >> 0);
    *((unsigned int *)t33) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t17 & 255U);
    t36 = (t1 + 3872);
    xsi_vlogfile_write(1, 0, 0, ng42, 5, t36, (char)119, t6, 32, (char)119, t11, 32, (char)118, t26, 8, (char)118, t10, 8);

LAB149:    goto LAB14;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    t30 = (t1 + 31864);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng38)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB25;

LAB22:    if (t46 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t34) = 1;

LAB25:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t51) != 0)
        goto LAB28;

LAB29:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t50) = 1;
    goto LAB29;

LAB28:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB29;

LAB30:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB32;

LAB33:    *((unsigned int *)t90) = 1;
    goto LAB36;

LAB35:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB36;

LAB37:    t102 = (t1 + 32344);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memset(t105, 0, 8);
    t106 = (t105 + 4);
    t107 = (t104 + 4);
    t108 = *((unsigned int *)t104);
    t109 = (t108 >> 2);
    t110 = (t109 & 1);
    *((unsigned int *)t105) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 >> 2);
    t113 = (t112 & 1);
    *((unsigned int *)t106) = t113;
    memset(t114, 0, 8);
    t115 = (t105 + 4);
    t116 = *((unsigned int *)t115);
    t117 = (~(t116));
    t118 = *((unsigned int *)t105);
    t119 = (t118 & t117);
    t120 = (t119 & 1U);
    if (t120 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t115) != 0)
        goto LAB42;

LAB43:    t123 = *((unsigned int *)t90);
    t124 = *((unsigned int *)t114);
    t125 = (t123 & t124);
    *((unsigned int *)t122) = t125;
    t126 = (t90 + 4);
    t127 = (t114 + 4);
    t128 = (t122 + 4);
    t129 = *((unsigned int *)t126);
    t130 = *((unsigned int *)t127);
    t131 = (t129 | t130);
    *((unsigned int *)t128) = t131;
    t132 = *((unsigned int *)t128);
    t133 = (t132 != 0);
    if (t133 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB39;

LAB40:    *((unsigned int *)t114) = 1;
    goto LAB43;

LAB42:    t121 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB43;

LAB44:    t134 = *((unsigned int *)t122);
    t135 = *((unsigned int *)t128);
    *((unsigned int *)t122) = (t134 | t135);
    t136 = (t90 + 4);
    t137 = (t114 + 4);
    t138 = *((unsigned int *)t90);
    t139 = (~(t138));
    t140 = *((unsigned int *)t136);
    t141 = (~(t140));
    t142 = *((unsigned int *)t114);
    t143 = (~(t142));
    t144 = *((unsigned int *)t137);
    t145 = (~(t144));
    t146 = (t139 & t141);
    t147 = (t143 & t145);
    t148 = (~(t146));
    t149 = (~(t147));
    t150 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t150 & t148);
    t151 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t151 & t149);
    t152 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t152 & t148);
    t153 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t153 & t149);
    goto LAB46;

LAB47:    *((unsigned int *)t154) = 1;
    goto LAB50;

LAB49:    t161 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB50;

LAB51:    t166 = (t1 + 32344);
    t167 = (t166 + 56U);
    t168 = *((char **)t167);
    memset(t169, 0, 8);
    t170 = (t169 + 4);
    t171 = (t168 + 4);
    t172 = *((unsigned int *)t168);
    t173 = (t172 >> 4);
    t174 = (t173 & 1);
    *((unsigned int *)t169) = t174;
    t175 = *((unsigned int *)t171);
    t176 = (t175 >> 4);
    t177 = (t176 & 1);
    *((unsigned int *)t170) = t177;
    memset(t178, 0, 8);
    t179 = (t169 + 4);
    t180 = *((unsigned int *)t179);
    t181 = (~(t180));
    t182 = *((unsigned int *)t169);
    t183 = (t182 & t181);
    t184 = (t183 & 1U);
    if (t184 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t179) != 0)
        goto LAB56;

LAB57:    t187 = *((unsigned int *)t154);
    t188 = *((unsigned int *)t178);
    t189 = (t187 & t188);
    *((unsigned int *)t186) = t189;
    t190 = (t154 + 4);
    t191 = (t178 + 4);
    t192 = (t186 + 4);
    t193 = *((unsigned int *)t190);
    t194 = *((unsigned int *)t191);
    t195 = (t193 | t194);
    *((unsigned int *)t192) = t195;
    t196 = *((unsigned int *)t192);
    t197 = (t196 != 0);
    if (t197 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB53;

LAB54:    *((unsigned int *)t178) = 1;
    goto LAB57;

LAB56:    t185 = (t178 + 4);
    *((unsigned int *)t178) = 1;
    *((unsigned int *)t185) = 1;
    goto LAB57;

LAB58:    t198 = *((unsigned int *)t186);
    t199 = *((unsigned int *)t192);
    *((unsigned int *)t186) = (t198 | t199);
    t200 = (t154 + 4);
    t201 = (t178 + 4);
    t202 = *((unsigned int *)t154);
    t203 = (~(t202));
    t204 = *((unsigned int *)t200);
    t205 = (~(t204));
    t206 = *((unsigned int *)t178);
    t207 = (~(t206));
    t208 = *((unsigned int *)t201);
    t209 = (~(t208));
    t210 = (t203 & t205);
    t211 = (t207 & t209);
    t212 = (~(t210));
    t213 = (~(t211));
    t214 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t214 & t212);
    t215 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t215 & t213);
    t216 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t216 & t212);
    t217 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t217 & t213);
    goto LAB60;

LAB61:    *((unsigned int *)t218) = 1;
    goto LAB64;

LAB63:    t225 = (t218 + 4);
    *((unsigned int *)t218) = 1;
    *((unsigned int *)t225) = 1;
    goto LAB64;

LAB65:    t230 = (t1 + 32504);
    t231 = (t230 + 56U);
    t232 = *((char **)t231);
    t233 = (t1 + 33624);
    t234 = (t233 + 56U);
    t235 = *((char **)t234);
    memset(t236, 0, 8);
    t237 = (t232 + 4);
    t238 = (t235 + 4);
    t239 = *((unsigned int *)t232);
    t240 = *((unsigned int *)t235);
    t241 = (t239 ^ t240);
    t242 = *((unsigned int *)t237);
    t243 = *((unsigned int *)t238);
    t244 = (t242 ^ t243);
    t245 = (t241 | t244);
    t246 = *((unsigned int *)t237);
    t247 = *((unsigned int *)t238);
    t248 = (t246 | t247);
    t249 = (~(t248));
    t250 = (t245 & t249);
    if (t250 != 0)
        goto LAB71;

LAB68:    if (t248 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t236) = 1;

LAB71:    memset(t252, 0, 8);
    t253 = (t236 + 4);
    t254 = *((unsigned int *)t253);
    t255 = (~(t254));
    t256 = *((unsigned int *)t236);
    t257 = (t256 & t255);
    t258 = (t257 & 1U);
    if (t258 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t253) != 0)
        goto LAB74;

LAB75:    t261 = *((unsigned int *)t218);
    t262 = *((unsigned int *)t252);
    t263 = (t261 & t262);
    *((unsigned int *)t260) = t263;
    t264 = (t218 + 4);
    t265 = (t252 + 4);
    t266 = (t260 + 4);
    t267 = *((unsigned int *)t264);
    t268 = *((unsigned int *)t265);
    t269 = (t267 | t268);
    *((unsigned int *)t266) = t269;
    t270 = *((unsigned int *)t266);
    t271 = (t270 != 0);
    if (t271 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB67;

LAB70:    t251 = (t236 + 4);
    *((unsigned int *)t236) = 1;
    *((unsigned int *)t251) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t252) = 1;
    goto LAB75;

LAB74:    t259 = (t252 + 4);
    *((unsigned int *)t252) = 1;
    *((unsigned int *)t259) = 1;
    goto LAB75;

LAB76:    t272 = *((unsigned int *)t260);
    t273 = *((unsigned int *)t266);
    *((unsigned int *)t260) = (t272 | t273);
    t274 = (t218 + 4);
    t275 = (t252 + 4);
    t276 = *((unsigned int *)t218);
    t277 = (~(t276));
    t278 = *((unsigned int *)t274);
    t279 = (~(t278));
    t280 = *((unsigned int *)t252);
    t281 = (~(t280));
    t282 = *((unsigned int *)t275);
    t283 = (~(t282));
    t284 = (t277 & t279);
    t285 = (t281 & t283);
    t286 = (~(t284));
    t287 = (~(t285));
    t288 = *((unsigned int *)t266);
    *((unsigned int *)t266) = (t288 & t286);
    t289 = *((unsigned int *)t266);
    *((unsigned int *)t266) = (t289 & t287);
    t290 = *((unsigned int *)t260);
    *((unsigned int *)t260) = (t290 & t286);
    t291 = *((unsigned int *)t260);
    *((unsigned int *)t260) = (t291 & t287);
    goto LAB78;

LAB79:    *((unsigned int *)t292) = 1;
    goto LAB82;

LAB81:    t299 = (t292 + 4);
    *((unsigned int *)t292) = 1;
    *((unsigned int *)t299) = 1;
    goto LAB82;

LAB83:    t304 = (t1 + 32664);
    t305 = (t304 + 56U);
    t306 = *((char **)t305);
    t307 = (t1 + 33784);
    t308 = (t307 + 56U);
    t309 = *((char **)t308);
    memset(t310, 0, 8);
    t311 = (t306 + 4);
    t312 = (t309 + 4);
    t313 = *((unsigned int *)t306);
    t314 = *((unsigned int *)t309);
    t315 = (t313 ^ t314);
    t316 = *((unsigned int *)t311);
    t317 = *((unsigned int *)t312);
    t318 = (t316 ^ t317);
    t319 = (t315 | t318);
    t320 = *((unsigned int *)t311);
    t321 = *((unsigned int *)t312);
    t322 = (t320 | t321);
    t323 = (~(t322));
    t324 = (t319 & t323);
    if (t324 != 0)
        goto LAB89;

LAB86:    if (t322 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t310) = 1;

LAB89:    memset(t326, 0, 8);
    t327 = (t310 + 4);
    t328 = *((unsigned int *)t327);
    t329 = (~(t328));
    t330 = *((unsigned int *)t310);
    t331 = (t330 & t329);
    t332 = (t331 & 1U);
    if (t332 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t327) != 0)
        goto LAB92;

LAB93:    t335 = *((unsigned int *)t292);
    t336 = *((unsigned int *)t326);
    t337 = (t335 & t336);
    *((unsigned int *)t334) = t337;
    t338 = (t292 + 4);
    t339 = (t326 + 4);
    t340 = (t334 + 4);
    t341 = *((unsigned int *)t338);
    t342 = *((unsigned int *)t339);
    t343 = (t341 | t342);
    *((unsigned int *)t340) = t343;
    t344 = *((unsigned int *)t340);
    t345 = (t344 != 0);
    if (t345 == 1)
        goto LAB94;

LAB95:
LAB96:    goto LAB85;

LAB88:    t325 = (t310 + 4);
    *((unsigned int *)t310) = 1;
    *((unsigned int *)t325) = 1;
    goto LAB89;

LAB90:    *((unsigned int *)t326) = 1;
    goto LAB93;

LAB92:    t333 = (t326 + 4);
    *((unsigned int *)t326) = 1;
    *((unsigned int *)t333) = 1;
    goto LAB93;

LAB94:    t346 = *((unsigned int *)t334);
    t347 = *((unsigned int *)t340);
    *((unsigned int *)t334) = (t346 | t347);
    t348 = (t292 + 4);
    t349 = (t326 + 4);
    t350 = *((unsigned int *)t292);
    t351 = (~(t350));
    t352 = *((unsigned int *)t348);
    t353 = (~(t352));
    t354 = *((unsigned int *)t326);
    t355 = (~(t354));
    t356 = *((unsigned int *)t349);
    t357 = (~(t356));
    t358 = (t351 & t353);
    t359 = (t355 & t357);
    t360 = (~(t358));
    t361 = (~(t359));
    t362 = *((unsigned int *)t340);
    *((unsigned int *)t340) = (t362 & t360);
    t363 = *((unsigned int *)t340);
    *((unsigned int *)t340) = (t363 & t361);
    t364 = *((unsigned int *)t334);
    *((unsigned int *)t334) = (t364 & t360);
    t365 = *((unsigned int *)t334);
    *((unsigned int *)t334) = (t365 & t361);
    goto LAB96;

LAB97:    xsi_set_current_line(28, ng37);

LAB100:    xsi_set_current_line(29, ng37);
    t372 = ((char*)((ng8)));
    t373 = (t1 + 31384);
    xsi_vlogvar_assign_value(t373, t372, 0, 0, 1);
    xsi_set_current_line(30, ng37);
    t3 = (t1 + 33784);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 33624);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 3872);
    xsi_vlogfile_write(1, 0, 0, ng31, 3, t19, (char)119, t6, 32, (char)119, t11, 32);
    goto LAB99;

LAB104:    t32 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(40, ng37);

LAB109:    xsi_set_current_line(41, ng37);
    t35 = ((char*)((ng8)));
    t36 = (t1 + 31384);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 1);
    xsi_set_current_line(42, ng37);
    t3 = (t1 + 33784);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 33624);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 33944);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t30 = (t1 + 3872);
    xsi_vlogfile_write(1, 0, 0, ng39, 4, t30, (char)119, t6, 32, (char)119, t11, 32, (char)119, t26, 32);
    goto LAB108;

LAB113:    t32 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t34) = 1;
    goto LAB118;

LAB117:    t35 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB118;

LAB119:    t49 = (t1 + 32344);
    t51 = (t49 + 56U);
    t57 = *((char **)t51);
    memset(t50, 0, 8);
    t62 = (t50 + 4);
    t63 = (t57 + 4);
    t52 = *((unsigned int *)t57);
    t53 = (t52 >> 5);
    t54 = (t53 & 1);
    *((unsigned int *)t50) = t54;
    t55 = *((unsigned int *)t63);
    t56 = (t55 >> 5);
    t59 = (t56 & 1);
    *((unsigned int *)t62) = t59;
    memset(t58, 0, 8);
    t64 = (t50 + 4);
    t60 = *((unsigned int *)t64);
    t61 = (~(t60));
    t65 = *((unsigned int *)t50);
    t66 = (t65 & t61);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t64) != 0)
        goto LAB124;

LAB125:    t68 = *((unsigned int *)t34);
    t69 = *((unsigned int *)t58);
    t70 = (t68 & t69);
    *((unsigned int *)t90) = t70;
    t73 = (t34 + 4);
    t91 = (t58 + 4);
    t97 = (t90 + 4);
    t71 = *((unsigned int *)t73);
    t74 = *((unsigned int *)t91);
    t75 = (t71 | t74);
    *((unsigned int *)t97) = t75;
    t76 = *((unsigned int *)t97);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB126;

LAB127:
LAB128:    goto LAB121;

LAB122:    *((unsigned int *)t58) = 1;
    goto LAB125;

LAB124:    t72 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB125;

LAB126:    t78 = *((unsigned int *)t90);
    t79 = *((unsigned int *)t97);
    *((unsigned int *)t90) = (t78 | t79);
    t98 = (t34 + 4);
    t102 = (t58 + 4);
    t80 = *((unsigned int *)t34);
    t81 = (~(t80));
    t84 = *((unsigned int *)t98);
    t85 = (~(t84));
    t86 = *((unsigned int *)t58);
    t87 = (~(t86));
    t88 = *((unsigned int *)t102);
    t89 = (~(t88));
    t82 = (t81 & t85);
    t83 = (t87 & t89);
    t92 = (~(t82));
    t93 = (~(t83));
    t94 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t94 & t92);
    t95 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t95 & t93);
    t96 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t96 & t92);
    t99 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t99 & t93);
    goto LAB128;

LAB129:    *((unsigned int *)t105) = 1;
    goto LAB132;

LAB131:    t104 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB132;

LAB133:    t107 = (t1 + 32664);
    t115 = (t107 + 56U);
    t121 = *((char **)t115);
    t126 = (t1 + 33784);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    memset(t114, 0, 8);
    t136 = (t121 + 4);
    t137 = (t128 + 4);
    t116 = *((unsigned int *)t121);
    t117 = *((unsigned int *)t128);
    t118 = (t116 ^ t117);
    t119 = *((unsigned int *)t136);
    t120 = *((unsigned int *)t137);
    t123 = (t119 ^ t120);
    t124 = (t118 | t123);
    t125 = *((unsigned int *)t136);
    t129 = *((unsigned int *)t137);
    t130 = (t125 | t129);
    t131 = (~(t130));
    t132 = (t124 & t131);
    if (t132 != 0)
        goto LAB139;

LAB136:    if (t130 != 0)
        goto LAB138;

LAB137:    *((unsigned int *)t114) = 1;

LAB139:    memset(t122, 0, 8);
    t161 = (t114 + 4);
    t133 = *((unsigned int *)t161);
    t134 = (~(t133));
    t135 = *((unsigned int *)t114);
    t138 = (t135 & t134);
    t139 = (t138 & 1U);
    if (t139 != 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t161) != 0)
        goto LAB142;

LAB143:    t140 = *((unsigned int *)t105);
    t141 = *((unsigned int *)t122);
    t142 = (t140 & t141);
    *((unsigned int *)t154) = t142;
    t166 = (t105 + 4);
    t167 = (t122 + 4);
    t168 = (t154 + 4);
    t143 = *((unsigned int *)t166);
    t144 = *((unsigned int *)t167);
    t145 = (t143 | t144);
    *((unsigned int *)t168) = t145;
    t148 = *((unsigned int *)t168);
    t149 = (t148 != 0);
    if (t149 == 1)
        goto LAB144;

LAB145:
LAB146:    goto LAB135;

LAB138:    t155 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t155) = 1;
    goto LAB139;

LAB140:    *((unsigned int *)t122) = 1;
    goto LAB143;

LAB142:    t162 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB143;

LAB144:    t150 = *((unsigned int *)t154);
    t151 = *((unsigned int *)t168);
    *((unsigned int *)t154) = (t150 | t151);
    t170 = (t105 + 4);
    t171 = (t122 + 4);
    t152 = *((unsigned int *)t105);
    t153 = (~(t152));
    t156 = *((unsigned int *)t170);
    t157 = (~(t156));
    t158 = *((unsigned int *)t122);
    t159 = (~(t158));
    t160 = *((unsigned int *)t171);
    t163 = (~(t160));
    t146 = (t153 & t157);
    t147 = (t159 & t163);
    t164 = (~(t146));
    t165 = (~(t147));
    t172 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t172 & t164);
    t173 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t173 & t165);
    t174 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t174 & t164);
    t175 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t175 & t165);
    goto LAB146;

LAB147:    xsi_set_current_line(54, ng37);

LAB150:    xsi_set_current_line(55, ng37);
    t185 = ((char*)((ng8)));
    t190 = (t1 + 31384);
    xsi_vlogvar_assign_value(t190, t185, 0, 0, 1);
    xsi_set_current_line(56, ng37);
    t3 = (t1 + 33784);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 33624);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 33784);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t30 = (t1 + 33944);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 3872);
    xsi_vlogfile_write(1, 0, 0, ng41, 5, t33, (char)119, t6, 32, (char)119, t11, 32, (char)119, t26, 32, (char)119, t32, 32);
    goto LAB149;

}

static int sp_TEST_POP(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t90[8];
    char t105[8];
    char t111[8];
    char t127[8];
    char t135[8];
    char t167[8];
    char t182[8];
    char t194[8];
    char t210[8];
    char t218[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    int t159;
    int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    char *t180;
    char *t181;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    char *t209;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    char *t222;
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    char *t232;
    char *t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    int t242;
    int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    char *t256;
    char *t257;

LAB0:    t0 = 1;
    xsi_set_current_line(20, ng43);

LAB2:    xsi_set_current_line(21, ng43);
    t3 = (t1 + 34264);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(22, ng43);
    t8 = ((char*)((ng8)));
    t9 = (t1 + 34104);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(23, ng43);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 34104);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB8:    xsi_set_current_line(26, ng43);
    t4 = (t1 + 34424);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 12);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 12);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) != 0)
        goto LAB17;

LAB18:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB19;

LAB20:    memcpy(t58, t18, 8);

LAB21:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t91) != 0)
        goto LAB35;

LAB36:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB37;

LAB38:    memcpy(t135, t90, 8);

LAB39:    memset(t167, 0, 8);
    t168 = (t135 + 4);
    t169 = *((unsigned int *)t168);
    t170 = (~(t169));
    t171 = *((unsigned int *)t135);
    t172 = (t171 & t170);
    t173 = (t172 & 1U);
    if (t173 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t168) != 0)
        goto LAB53;

LAB54:    t175 = (t167 + 4);
    t176 = *((unsigned int *)t167);
    t177 = *((unsigned int *)t175);
    t178 = (t176 || t177);
    if (t178 > 0)
        goto LAB55;

LAB56:    memcpy(t218, t167, 8);

LAB57:    t250 = (t218 + 4);
    t251 = *((unsigned int *)t250);
    t252 = (~(t251));
    t253 = *((unsigned int *)t218);
    t254 = (t253 & t252);
    t255 = (t254 != 0);
    if (t255 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(33, ng43);

LAB73:    xsi_set_current_line(34, ng43);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 34104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(35, ng43);
    t3 = (t1 + 35064);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 35064);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t19 = ((char*)((ng20)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t6, t11, 2, t19, 32, 1);
    t25 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t26 = (t10 + 4);
    t30 = (t25 + 4);
    t12 = *((unsigned int *)t10);
    t13 = *((unsigned int *)t25);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t26);
    t16 = *((unsigned int *)t30);
    t17 = (t15 ^ t16);
    t20 = (t14 | t17);
    t21 = *((unsigned int *)t26);
    t22 = *((unsigned int *)t30);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t27 = (t20 & t24);
    if (t27 != 0)
        goto LAB75;

LAB74:    if (t23 != 0)
        goto LAB76;

LAB77:    t32 = (t18 + 4);
    t28 = *((unsigned int *)t32);
    t29 = (~(t28));
    t37 = *((unsigned int *)t18);
    t38 = (t37 & t29);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB78;

LAB79:
LAB80:    xsi_set_current_line(38, ng43);
    t3 = (t1 + 36184);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 36984);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memset(t10, 0, 8);
    t19 = (t10 + 4);
    t25 = (t11 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t25);
    t15 = (t14 >> 0);
    *((unsigned int *)t19) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t17 & 255U);
    memset(t18, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t10))
        goto LAB83;

LAB82:    t26 = (t6 + 4);
    t30 = (t10 + 4);
    if (*((unsigned int *)t26) != *((unsigned int *)t30))
        goto LAB83;

LAB84:    t31 = (t18 + 4);
    t20 = *((unsigned int *)t31);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB85;

LAB86:
LAB87:
LAB71:    goto LAB14;

LAB10:    xsi_set_current_line(43, ng43);
    t4 = (t1 + 34424);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 12);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 12);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t19) != 0)
        goto LAB91;

LAB92:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB93;

LAB94:    memcpy(t58, t18, 8);

LAB95:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t91) != 0)
        goto LAB109;

LAB110:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB111;

LAB112:    memcpy(t167, t90, 8);

LAB113:    t174 = (t167 + 4);
    t177 = *((unsigned int *)t174);
    t178 = (~(t177));
    t188 = *((unsigned int *)t167);
    t189 = (t188 & t178);
    t190 = (t189 != 0);
    if (t190 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(51, ng43);

LAB129:    xsi_set_current_line(52, ng43);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 34104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(53, ng43);
    t3 = (t1 + 36664);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 36344);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memset(t10, 0, 8);
    t19 = (t10 + 4);
    t25 = (t11 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t25);
    t15 = (t14 >> 0);
    *((unsigned int *)t19) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t17 & 255U);
    t26 = ((char*)((ng48)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 8, t10, 8, t26, 8);
    t30 = (t1 + 36024);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 4304);
    xsi_vlogfile_write(1, 0, 0, ng50, 4, t33, (char)119, t6, 32, (char)118, t18, 8, (char)118, t32, 7);

LAB127:    goto LAB14;

LAB12:    xsi_set_current_line(56, ng43);
    t4 = (t1 + 34424);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 12);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 12);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t19) != 0)
        goto LAB132;

LAB133:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB134;

LAB135:    memcpy(t58, t18, 8);

LAB136:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB148;

LAB149:    if (*((unsigned int *)t91) != 0)
        goto LAB150;

LAB151:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB152;

LAB153:    memcpy(t127, t90, 8);

LAB154:    t149 = (t127 + 4);
    t169 = *((unsigned int *)t149);
    t170 = (~(t169));
    t171 = *((unsigned int *)t127);
    t172 = (t171 & t170);
    t173 = (t172 != 0);
    if (t173 > 0)
        goto LAB166;

LAB167:    xsi_set_current_line(64, ng43);

LAB170:    xsi_set_current_line(65, ng43);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 34104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(66, ng43);
    t3 = (t1 + 36664);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 36664);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 34904);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t30 = (t1 + 36824);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 4304);
    xsi_vlogfile_write(1, 0, 0, ng52, 5, t33, (char)119, t6, 32, (char)119, t11, 32, (char)118, t26, 8, (char)119, t32, 32);

LAB168:    goto LAB14;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    t30 = (t1 + 34584);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng44)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB25;

LAB22:    if (t46 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t34) = 1;

LAB25:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t51) != 0)
        goto LAB28;

LAB29:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t50) = 1;
    goto LAB29;

LAB28:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB29;

LAB30:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB32;

LAB33:    *((unsigned int *)t90) = 1;
    goto LAB36;

LAB35:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB36;

LAB37:    t102 = (t1 + 35064);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t106 = (t1 + 35064);
    t107 = (t106 + 72U);
    t108 = *((char **)t107);
    t109 = ((char*)((ng20)));
    xsi_vlog_generic_get_index_select_value(t105, 32, t104, t108, 2, t109, 32, 1);
    t110 = ((char*)((ng1)));
    memset(t111, 0, 8);
    t112 = (t105 + 4);
    t113 = (t110 + 4);
    t114 = *((unsigned int *)t105);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = *((unsigned int *)t112);
    t118 = *((unsigned int *)t113);
    t119 = (t117 ^ t118);
    t120 = (t116 | t119);
    t121 = *((unsigned int *)t112);
    t122 = *((unsigned int *)t113);
    t123 = (t121 | t122);
    t124 = (~(t123));
    t125 = (t120 & t124);
    if (t125 != 0)
        goto LAB43;

LAB40:    if (t123 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t111) = 1;

LAB43:    memset(t127, 0, 8);
    t128 = (t111 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t111);
    t132 = (t131 & t130);
    t133 = (t132 & 1U);
    if (t133 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t128) != 0)
        goto LAB46;

LAB47:    t136 = *((unsigned int *)t90);
    t137 = *((unsigned int *)t127);
    t138 = (t136 & t137);
    *((unsigned int *)t135) = t138;
    t139 = (t90 + 4);
    t140 = (t127 + 4);
    t141 = (t135 + 4);
    t142 = *((unsigned int *)t139);
    t143 = *((unsigned int *)t140);
    t144 = (t142 | t143);
    *((unsigned int *)t141) = t144;
    t145 = *((unsigned int *)t141);
    t146 = (t145 != 0);
    if (t146 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB39;

LAB42:    t126 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t127) = 1;
    goto LAB47;

LAB46:    t134 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t134) = 1;
    goto LAB47;

LAB48:    t147 = *((unsigned int *)t135);
    t148 = *((unsigned int *)t141);
    *((unsigned int *)t135) = (t147 | t148);
    t149 = (t90 + 4);
    t150 = (t127 + 4);
    t151 = *((unsigned int *)t90);
    t152 = (~(t151));
    t153 = *((unsigned int *)t149);
    t154 = (~(t153));
    t155 = *((unsigned int *)t127);
    t156 = (~(t155));
    t157 = *((unsigned int *)t150);
    t158 = (~(t157));
    t159 = (t152 & t154);
    t160 = (t156 & t158);
    t161 = (~(t159));
    t162 = (~(t160));
    t163 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t163 & t161);
    t164 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t164 & t162);
    t165 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t165 & t161);
    t166 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t166 & t162);
    goto LAB50;

LAB51:    *((unsigned int *)t167) = 1;
    goto LAB54;

LAB53:    t174 = (t167 + 4);
    *((unsigned int *)t167) = 1;
    *((unsigned int *)t174) = 1;
    goto LAB54;

LAB55:    t179 = (t1 + 36184);
    t180 = (t179 + 56U);
    t181 = *((char **)t180);
    t183 = (t1 + 36984);
    t184 = (t183 + 56U);
    t185 = *((char **)t184);
    memset(t182, 0, 8);
    t186 = (t182 + 4);
    t187 = (t185 + 4);
    t188 = *((unsigned int *)t185);
    t189 = (t188 >> 0);
    *((unsigned int *)t182) = t189;
    t190 = *((unsigned int *)t187);
    t191 = (t190 >> 0);
    *((unsigned int *)t186) = t191;
    t192 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t192 & 255U);
    t193 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t193 & 255U);
    memset(t194, 0, 8);
    t195 = (t181 + 4);
    t196 = (t182 + 4);
    t197 = *((unsigned int *)t181);
    t198 = *((unsigned int *)t182);
    t199 = (t197 ^ t198);
    t200 = *((unsigned int *)t195);
    t201 = *((unsigned int *)t196);
    t202 = (t200 ^ t201);
    t203 = (t199 | t202);
    t204 = *((unsigned int *)t195);
    t205 = *((unsigned int *)t196);
    t206 = (t204 | t205);
    t207 = (~(t206));
    t208 = (t203 & t207);
    if (t208 != 0)
        goto LAB61;

LAB58:    if (t206 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t194) = 1;

LAB61:    memset(t210, 0, 8);
    t211 = (t194 + 4);
    t212 = *((unsigned int *)t211);
    t213 = (~(t212));
    t214 = *((unsigned int *)t194);
    t215 = (t214 & t213);
    t216 = (t215 & 1U);
    if (t216 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t211) != 0)
        goto LAB64;

LAB65:    t219 = *((unsigned int *)t167);
    t220 = *((unsigned int *)t210);
    t221 = (t219 & t220);
    *((unsigned int *)t218) = t221;
    t222 = (t167 + 4);
    t223 = (t210 + 4);
    t224 = (t218 + 4);
    t225 = *((unsigned int *)t222);
    t226 = *((unsigned int *)t223);
    t227 = (t225 | t226);
    *((unsigned int *)t224) = t227;
    t228 = *((unsigned int *)t224);
    t229 = (t228 != 0);
    if (t229 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB57;

LAB60:    t209 = (t194 + 4);
    *((unsigned int *)t194) = 1;
    *((unsigned int *)t209) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t210) = 1;
    goto LAB65;

LAB64:    t217 = (t210 + 4);
    *((unsigned int *)t210) = 1;
    *((unsigned int *)t217) = 1;
    goto LAB65;

LAB66:    t230 = *((unsigned int *)t218);
    t231 = *((unsigned int *)t224);
    *((unsigned int *)t218) = (t230 | t231);
    t232 = (t167 + 4);
    t233 = (t210 + 4);
    t234 = *((unsigned int *)t167);
    t235 = (~(t234));
    t236 = *((unsigned int *)t232);
    t237 = (~(t236));
    t238 = *((unsigned int *)t210);
    t239 = (~(t238));
    t240 = *((unsigned int *)t233);
    t241 = (~(t240));
    t242 = (t235 & t237);
    t243 = (t239 & t241);
    t244 = (~(t242));
    t245 = (~(t243));
    t246 = *((unsigned int *)t224);
    *((unsigned int *)t224) = (t246 & t244);
    t247 = *((unsigned int *)t224);
    *((unsigned int *)t224) = (t247 & t245);
    t248 = *((unsigned int *)t218);
    *((unsigned int *)t218) = (t248 & t244);
    t249 = *((unsigned int *)t218);
    *((unsigned int *)t218) = (t249 & t245);
    goto LAB68;

LAB69:    xsi_set_current_line(28, ng43);

LAB72:    xsi_set_current_line(29, ng43);
    t256 = ((char*)((ng8)));
    t257 = (t1 + 34104);
    xsi_vlogvar_assign_value(t257, t256, 0, 0, 1);
    xsi_set_current_line(30, ng43);
    t3 = (t1 + 36664);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 4304);
    xsi_vlogfile_write(1, 0, 0, ng45, 2, t8, (char)119, t6, 32);
    goto LAB71;

LAB75:    *((unsigned int *)t18) = 1;
    goto LAB77;

LAB76:    t31 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(35, ng43);

LAB81:    xsi_set_current_line(36, ng43);
    t33 = (t1 + 36664);
    t35 = (t33 + 56U);
    t36 = *((char **)t35);
    t49 = (t1 + 4304);
    xsi_vlogfile_write(1, 0, 0, ng46, 2, t49, (char)119, t36, 32);
    goto LAB80;

LAB83:    *((unsigned int *)t18) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(38, ng43);

LAB88:    xsi_set_current_line(39, ng43);
    t32 = (t1 + 36664);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    t36 = (t1 + 36984);
    t49 = (t36 + 56U);
    t51 = *((char **)t49);
    memset(t34, 0, 8);
    t57 = (t34 + 4);
    t62 = (t51 + 4);
    t27 = *((unsigned int *)t51);
    t28 = (t27 >> 0);
    *((unsigned int *)t34) = t28;
    t29 = *((unsigned int *)t62);
    t37 = (t29 >> 0);
    *((unsigned int *)t57) = t37;
    t38 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t38 & 255U);
    t39 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t39 & 255U);
    t63 = (t1 + 36184);
    t64 = (t63 + 56U);
    t72 = *((char **)t64);
    t73 = (t1 + 4304);
    xsi_vlogfile_write(1, 0, 0, ng47, 4, t73, (char)119, t35, 32, (char)118, t34, 8, (char)118, t72, 8);
    goto LAB87;

LAB89:    *((unsigned int *)t18) = 1;
    goto LAB92;

LAB91:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB92;

LAB93:    t30 = (t1 + 34584);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng44)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB99;

LAB96:    if (t46 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t34) = 1;

LAB99:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t51) != 0)
        goto LAB102;

LAB103:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB104;

LAB105:
LAB106:    goto LAB95;

LAB98:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB99;

LAB100:    *((unsigned int *)t50) = 1;
    goto LAB103;

LAB102:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB103;

LAB104:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB106;

LAB107:    *((unsigned int *)t90) = 1;
    goto LAB110;

LAB109:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB110;

LAB111:    t102 = (t1 + 36024);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t106 = (t1 + 36344);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    memset(t105, 0, 8);
    t109 = (t105 + 4);
    t110 = (t108 + 4);
    t114 = *((unsigned int *)t108);
    t115 = (t114 >> 0);
    *((unsigned int *)t105) = t115;
    t116 = *((unsigned int *)t110);
    t117 = (t116 >> 0);
    *((unsigned int *)t109) = t117;
    t118 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t118 & 255U);
    t119 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t119 & 255U);
    t112 = ((char*)((ng48)));
    memset(t111, 0, 8);
    xsi_vlog_unsigned_minus(t111, 8, t105, 8, t112, 8);
    memset(t127, 0, 8);
    t113 = (t104 + 4);
    t126 = (t111 + 4);
    t120 = *((unsigned int *)t104);
    t121 = *((unsigned int *)t111);
    t122 = (t120 ^ t121);
    t123 = *((unsigned int *)t113);
    t124 = *((unsigned int *)t126);
    t125 = (t123 ^ t124);
    t129 = (t122 | t125);
    t130 = *((unsigned int *)t113);
    t131 = *((unsigned int *)t126);
    t132 = (t130 | t131);
    t133 = (~(t132));
    t136 = (t129 & t133);
    if (t136 != 0)
        goto LAB117;

LAB114:    if (t132 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t127) = 1;

LAB117:    memset(t135, 0, 8);
    t134 = (t127 + 4);
    t137 = *((unsigned int *)t134);
    t138 = (~(t137));
    t142 = *((unsigned int *)t127);
    t143 = (t142 & t138);
    t144 = (t143 & 1U);
    if (t144 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t134) != 0)
        goto LAB120;

LAB121:    t145 = *((unsigned int *)t90);
    t146 = *((unsigned int *)t135);
    t147 = (t145 & t146);
    *((unsigned int *)t167) = t147;
    t140 = (t90 + 4);
    t141 = (t135 + 4);
    t149 = (t167 + 4);
    t148 = *((unsigned int *)t140);
    t151 = *((unsigned int *)t141);
    t152 = (t148 | t151);
    *((unsigned int *)t149) = t152;
    t153 = *((unsigned int *)t149);
    t154 = (t153 != 0);
    if (t154 == 1)
        goto LAB122;

LAB123:
LAB124:    goto LAB113;

LAB116:    t128 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB117;

LAB118:    *((unsigned int *)t135) = 1;
    goto LAB121;

LAB120:    t139 = (t135 + 4);
    *((unsigned int *)t135) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB121;

LAB122:    t155 = *((unsigned int *)t167);
    t156 = *((unsigned int *)t149);
    *((unsigned int *)t167) = (t155 | t156);
    t150 = (t90 + 4);
    t168 = (t135 + 4);
    t157 = *((unsigned int *)t90);
    t158 = (~(t157));
    t161 = *((unsigned int *)t150);
    t162 = (~(t161));
    t163 = *((unsigned int *)t135);
    t164 = (~(t163));
    t165 = *((unsigned int *)t168);
    t166 = (~(t165));
    t159 = (t158 & t162);
    t160 = (t164 & t166);
    t169 = (~(t159));
    t170 = (~(t160));
    t171 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t171 & t169);
    t172 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t172 & t170);
    t173 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t173 & t169);
    t176 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t176 & t170);
    goto LAB124;

LAB125:    xsi_set_current_line(46, ng43);

LAB128:    xsi_set_current_line(47, ng43);
    t175 = ((char*)((ng8)));
    t179 = (t1 + 34104);
    xsi_vlogvar_assign_value(t179, t175, 0, 0, 1);
    xsi_set_current_line(48, ng43);
    t3 = (t1 + 36664);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 36024);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 4304);
    xsi_vlogfile_write(1, 0, 0, ng49, 3, t19, (char)119, t6, 32, (char)118, t11, 7);
    goto LAB127;

LAB130:    *((unsigned int *)t18) = 1;
    goto LAB133;

LAB132:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB133;

LAB134:    t30 = (t1 + 34584);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng44)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB140;

LAB137:    if (t46 != 0)
        goto LAB139;

LAB138:    *((unsigned int *)t34) = 1;

LAB140:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t51) != 0)
        goto LAB143;

LAB144:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB145;

LAB146:
LAB147:    goto LAB136;

LAB139:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB140;

LAB141:    *((unsigned int *)t50) = 1;
    goto LAB144;

LAB143:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB144;

LAB145:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB147;

LAB148:    *((unsigned int *)t90) = 1;
    goto LAB151;

LAB150:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB151;

LAB152:    t102 = (t1 + 34904);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t106 = (t1 + 36824);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    memset(t105, 0, 8);
    t109 = (t104 + 4);
    t110 = (t108 + 4);
    t114 = *((unsigned int *)t104);
    t115 = *((unsigned int *)t108);
    t116 = (t114 ^ t115);
    t117 = *((unsigned int *)t109);
    t118 = *((unsigned int *)t110);
    t119 = (t117 ^ t118);
    t120 = (t116 | t119);
    t121 = *((unsigned int *)t109);
    t122 = *((unsigned int *)t110);
    t123 = (t121 | t122);
    t124 = (~(t123));
    t125 = (t120 & t124);
    if (t125 != 0)
        goto LAB158;

LAB155:    if (t123 != 0)
        goto LAB157;

LAB156:    *((unsigned int *)t105) = 1;

LAB158:    memset(t111, 0, 8);
    t113 = (t105 + 4);
    t129 = *((unsigned int *)t113);
    t130 = (~(t129));
    t131 = *((unsigned int *)t105);
    t132 = (t131 & t130);
    t133 = (t132 & 1U);
    if (t133 != 0)
        goto LAB159;

LAB160:    if (*((unsigned int *)t113) != 0)
        goto LAB161;

LAB162:    t136 = *((unsigned int *)t90);
    t137 = *((unsigned int *)t111);
    t138 = (t136 & t137);
    *((unsigned int *)t127) = t138;
    t128 = (t90 + 4);
    t134 = (t111 + 4);
    t139 = (t127 + 4);
    t142 = *((unsigned int *)t128);
    t143 = *((unsigned int *)t134);
    t144 = (t142 | t143);
    *((unsigned int *)t139) = t144;
    t145 = *((unsigned int *)t139);
    t146 = (t145 != 0);
    if (t146 == 1)
        goto LAB163;

LAB164:
LAB165:    goto LAB154;

LAB157:    t112 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB158;

LAB159:    *((unsigned int *)t111) = 1;
    goto LAB162;

LAB161:    t126 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB162;

LAB163:    t147 = *((unsigned int *)t127);
    t148 = *((unsigned int *)t139);
    *((unsigned int *)t127) = (t147 | t148);
    t140 = (t90 + 4);
    t141 = (t111 + 4);
    t151 = *((unsigned int *)t90);
    t152 = (~(t151));
    t153 = *((unsigned int *)t140);
    t154 = (~(t153));
    t155 = *((unsigned int *)t111);
    t156 = (~(t155));
    t157 = *((unsigned int *)t141);
    t158 = (~(t157));
    t159 = (t152 & t154);
    t160 = (t156 & t158);
    t161 = (~(t159));
    t162 = (~(t160));
    t163 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t163 & t161);
    t164 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t164 & t162);
    t165 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t165 & t161);
    t166 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t166 & t162);
    goto LAB165;

LAB166:    xsi_set_current_line(59, ng43);

LAB169:    xsi_set_current_line(60, ng43);
    t150 = ((char*)((ng8)));
    t168 = (t1 + 34104);
    xsi_vlogvar_assign_value(t168, t150, 0, 0, 1);
    xsi_set_current_line(61, ng43);
    t3 = (t1 + 36664);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 36664);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 36824);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    t30 = (t1 + 4304);
    xsi_vlogfile_write(1, 0, 0, ng51, 4, t30, (char)119, t6, 32, (char)119, t11, 32, (char)119, t26, 32);
    goto LAB168;

}

static int sp_TEST_PUSH(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t90[8];
    char t108[8];
    char t124[8];
    char t132[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    int t156;
    int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;

LAB0:    t0 = 1;
    xsi_set_current_line(20, ng53);

LAB2:    xsi_set_current_line(21, ng53);
    t3 = (t1 + 37304);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(22, ng53);
    t8 = ((char*)((ng8)));
    t9 = (t1 + 37144);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(24, ng53);
    t4 = (t1 + 37464);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 12);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 12);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) != 0)
        goto LAB17;

LAB18:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB19;

LAB20:    memcpy(t58, t18, 8);

LAB21:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t91) != 0)
        goto LAB35;

LAB36:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB37;

LAB38:    memcpy(t132, t90, 8);

LAB39:    t164 = (t132 + 4);
    t165 = *((unsigned int *)t164);
    t166 = (~(t165));
    t167 = *((unsigned int *)t132);
    t168 = (t167 & t166);
    t169 = (t168 != 0);
    if (t169 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(32, ng53);

LAB55:    xsi_set_current_line(33, ng53);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 37144);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(34, ng53);
    t3 = (t1 + 39544);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 4736);
    xsi_vlogfile_write(1, 0, 0, ng56, 2, t8, (char)119, t6, 32);

LAB53:    goto LAB14;

LAB8:    xsi_set_current_line(36, ng53);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 37144);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB10:    xsi_set_current_line(38, ng53);
    t4 = (t1 + 39064);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 39384);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    memset(t10, 0, 8);
    t25 = (t10 + 4);
    t26 = (t19 + 4);
    t12 = *((unsigned int *)t19);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t26);
    t15 = (t14 >> 0);
    *((unsigned int *)t25) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t17 & 255U);
    t30 = ((char*)((ng48)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 8, t10, 8, t30, 8);
    memset(t34, 0, 8);
    t31 = (t8 + 4);
    t32 = (t18 + 4);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t18);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t31);
    t24 = *((unsigned int *)t32);
    t27 = (t23 ^ t24);
    t28 = (t22 | t27);
    t29 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t29 | t37);
    t39 = (~(t38));
    t40 = (t28 & t39);
    if (t40 != 0)
        goto LAB59;

LAB56:    if (t38 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t34) = 1;

LAB59:    t35 = (t34 + 4);
    t41 = *((unsigned int *)t35);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(43, ng53);

LAB64:    xsi_set_current_line(44, ng53);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 37144);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(45, ng53);
    t3 = (t1 + 39064);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 39384);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memset(t10, 0, 8);
    t19 = (t10 + 4);
    t25 = (t11 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t25);
    t15 = (t14 >> 0);
    *((unsigned int *)t19) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t17 & 255U);
    t26 = ((char*)((ng48)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 8, t10, 8, t26, 8);
    memset(t34, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t18))
        goto LAB66;

LAB65:    t30 = (t6 + 4);
    t31 = (t18 + 4);
    if (*((unsigned int *)t30) != *((unsigned int *)t31))
        goto LAB66;

LAB67:    t32 = (t34 + 4);
    t20 = *((unsigned int *)t32);
    t21 = (~(t20));
    t22 = *((unsigned int *)t34);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB68;

LAB69:
LAB70:
LAB62:    goto LAB14;

LAB12:    xsi_set_current_line(51, ng53);

LAB72:    xsi_set_current_line(52, ng53);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 37144);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(53, ng53);
    t3 = (t1 + 39224);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 40024);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memset(t10, 0, 8);
    t19 = (t10 + 4);
    t25 = (t11 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t25);
    t15 = (t14 >> 0);
    *((unsigned int *)t19) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t17 & 255U);
    memset(t18, 0, 8);
    t26 = (t6 + 4);
    t30 = (t10 + 4);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t10);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t26);
    t24 = *((unsigned int *)t30);
    t27 = (t23 ^ t24);
    t28 = (t22 | t27);
    t29 = *((unsigned int *)t26);
    t37 = *((unsigned int *)t30);
    t38 = (t29 | t37);
    t39 = (~(t38));
    t40 = (t28 & t39);
    if (t40 != 0)
        goto LAB76;

LAB73:    if (t38 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t18) = 1;

LAB76:    memset(t34, 0, 8);
    t32 = (t18 + 4);
    t41 = *((unsigned int *)t32);
    t42 = (~(t41));
    t43 = *((unsigned int *)t18);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t32) != 0)
        goto LAB79;

LAB80:    t35 = (t34 + 4);
    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t35);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB81;

LAB82:    memcpy(t108, t34, 8);

LAB83:    t109 = (t108 + 4);
    t115 = *((unsigned int *)t109);
    t116 = (~(t115));
    t117 = *((unsigned int *)t108);
    t118 = (t117 & t116);
    t119 = (t118 != 0);
    if (t119 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(57, ng53);

LAB99:    xsi_set_current_line(58, ng53);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 37144);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(59, ng53);
    t3 = (t1 + 38104);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 38104);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t19 = ((char*)((ng59)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t6, t11, 2, t19, 32, 1);
    t25 = ((char*)((ng1)));
    memset(t18, 0, 8);
    if (*((unsigned int *)t10) != *((unsigned int *)t25))
        goto LAB101;

LAB100:    t26 = (t10 + 4);
    t30 = (t25 + 4);
    if (*((unsigned int *)t26) != *((unsigned int *)t30))
        goto LAB101;

LAB102:    t31 = (t18 + 4);
    t12 = *((unsigned int *)t31);
    t13 = (~(t12));
    t14 = *((unsigned int *)t18);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB103;

LAB104:
LAB105:    xsi_set_current_line(63, ng53);
    t3 = (t1 + 39224);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 40024);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memset(t10, 0, 8);
    t19 = (t10 + 4);
    t25 = (t11 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t25);
    t15 = (t14 >> 0);
    *((unsigned int *)t19) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t17 & 255U);
    memset(t18, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t10))
        goto LAB108;

LAB107:    t26 = (t6 + 4);
    t30 = (t10 + 4);
    if (*((unsigned int *)t26) != *((unsigned int *)t30))
        goto LAB108;

LAB109:    t31 = (t18 + 4);
    t20 = *((unsigned int *)t31);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB110;

LAB111:
LAB112:
LAB97:    goto LAB14;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    t30 = (t1 + 37624);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng54)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB25;

LAB22:    if (t46 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t34) = 1;

LAB25:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t51) != 0)
        goto LAB28;

LAB29:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t50) = 1;
    goto LAB29;

LAB28:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB29;

LAB30:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB32;

LAB33:    *((unsigned int *)t90) = 1;
    goto LAB36;

LAB35:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB36;

LAB37:    t102 = (t1 + 38264);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = (t1 + 39544);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    memset(t108, 0, 8);
    t109 = (t104 + 4);
    t110 = (t107 + 4);
    t111 = *((unsigned int *)t104);
    t112 = *((unsigned int *)t107);
    t113 = (t111 ^ t112);
    t114 = *((unsigned int *)t109);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = (t113 | t116);
    t118 = *((unsigned int *)t109);
    t119 = *((unsigned int *)t110);
    t120 = (t118 | t119);
    t121 = (~(t120));
    t122 = (t117 & t121);
    if (t122 != 0)
        goto LAB43;

LAB40:    if (t120 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t108) = 1;

LAB43:    memset(t124, 0, 8);
    t125 = (t108 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t108);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t125) != 0)
        goto LAB46;

LAB47:    t133 = *((unsigned int *)t90);
    t134 = *((unsigned int *)t124);
    t135 = (t133 & t134);
    *((unsigned int *)t132) = t135;
    t136 = (t90 + 4);
    t137 = (t124 + 4);
    t138 = (t132 + 4);
    t139 = *((unsigned int *)t136);
    t140 = *((unsigned int *)t137);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB39;

LAB42:    t123 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t124) = 1;
    goto LAB47;

LAB46:    t131 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB47;

LAB48:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t132) = (t144 | t145);
    t146 = (t90 + 4);
    t147 = (t124 + 4);
    t148 = *((unsigned int *)t90);
    t149 = (~(t148));
    t150 = *((unsigned int *)t146);
    t151 = (~(t150));
    t152 = *((unsigned int *)t124);
    t153 = (~(t152));
    t154 = *((unsigned int *)t147);
    t155 = (~(t154));
    t156 = (t149 & t151);
    t157 = (t153 & t155);
    t158 = (~(t156));
    t159 = (~(t157));
    t160 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t160 & t158);
    t161 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t161 & t159);
    t162 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t162 & t158);
    t163 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t163 & t159);
    goto LAB50;

LAB51:    xsi_set_current_line(27, ng53);

LAB54:    xsi_set_current_line(28, ng53);
    t170 = ((char*)((ng8)));
    t171 = (t1 + 37144);
    xsi_vlogvar_assign_value(t171, t170, 0, 0, 1);
    xsi_set_current_line(29, ng53);
    t3 = (t1 + 39544);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 4736);
    xsi_vlogfile_write(1, 0, 0, ng55, 2, t8, (char)119, t6, 32);
    goto LAB53;

LAB58:    t33 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(39, ng53);

LAB63:    xsi_set_current_line(40, ng53);
    t36 = ((char*)((ng8)));
    t49 = (t1 + 37144);
    xsi_vlogvar_assign_value(t49, t36, 0, 0, 1);
    xsi_set_current_line(41, ng53);
    t3 = (t1 + 39544);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 39064);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 4736);
    xsi_vlogfile_write(1, 0, 0, ng57, 3, t19, (char)119, t6, 32, (char)118, t11, 7);
    goto LAB62;

LAB66:    *((unsigned int *)t34) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(46, ng53);

LAB71:    xsi_set_current_line(47, ng53);
    t33 = (t1 + 39544);
    t35 = (t33 + 56U);
    t36 = *((char **)t35);
    t49 = (t1 + 39384);
    t51 = (t49 + 56U);
    t57 = *((char **)t51);
    memset(t50, 0, 8);
    t62 = (t50 + 4);
    t63 = (t57 + 4);
    t27 = *((unsigned int *)t57);
    t28 = (t27 >> 0);
    *((unsigned int *)t50) = t28;
    t29 = *((unsigned int *)t63);
    t37 = (t29 >> 0);
    *((unsigned int *)t62) = t37;
    t38 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t38 & 255U);
    t39 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t39 & 255U);
    t64 = ((char*)((ng48)));
    memset(t58, 0, 8);
    xsi_vlog_unsigned_minus(t58, 8, t50, 8, t64, 8);
    t72 = (t1 + 39064);
    t73 = (t72 + 56U);
    t91 = *((char **)t73);
    t97 = (t1 + 4736);
    xsi_vlogfile_write(1, 0, 0, ng58, 4, t97, (char)119, t36, 32, (char)118, t58, 8, (char)118, t91, 7);
    goto LAB70;

LAB75:    t31 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB76;

LAB77:    *((unsigned int *)t34) = 1;
    goto LAB80;

LAB79:    t33 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB80;

LAB81:    t36 = (t1 + 38104);
    t49 = (t36 + 56U);
    t51 = *((char **)t49);
    t57 = (t1 + 38104);
    t62 = (t57 + 72U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng59)));
    xsi_vlog_generic_get_index_select_value(t50, 32, t51, t63, 2, t64, 32, 1);
    t72 = ((char*)((ng1)));
    memset(t58, 0, 8);
    t73 = (t50 + 4);
    t91 = (t72 + 4);
    t52 = *((unsigned int *)t50);
    t53 = *((unsigned int *)t72);
    t54 = (t52 ^ t53);
    t55 = *((unsigned int *)t73);
    t56 = *((unsigned int *)t91);
    t59 = (t55 ^ t56);
    t60 = (t54 | t59);
    t61 = *((unsigned int *)t73);
    t65 = *((unsigned int *)t91);
    t66 = (t61 | t65);
    t67 = (~(t66));
    t68 = (t60 & t67);
    if (t68 != 0)
        goto LAB87;

LAB84:    if (t66 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t58) = 1;

LAB87:    memset(t90, 0, 8);
    t98 = (t58 + 4);
    t69 = *((unsigned int *)t98);
    t70 = (~(t69));
    t71 = *((unsigned int *)t58);
    t74 = (t71 & t70);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t98) != 0)
        goto LAB90;

LAB91:    t76 = *((unsigned int *)t34);
    t77 = *((unsigned int *)t90);
    t78 = (t76 & t77);
    *((unsigned int *)t108) = t78;
    t103 = (t34 + 4);
    t104 = (t90 + 4);
    t105 = (t108 + 4);
    t79 = *((unsigned int *)t103);
    t80 = *((unsigned int *)t104);
    t81 = (t79 | t80);
    *((unsigned int *)t105) = t81;
    t84 = *((unsigned int *)t105);
    t85 = (t84 != 0);
    if (t85 == 1)
        goto LAB92;

LAB93:
LAB94:    goto LAB83;

LAB86:    t97 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB87;

LAB88:    *((unsigned int *)t90) = 1;
    goto LAB91;

LAB90:    t102 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB91;

LAB92:    t86 = *((unsigned int *)t108);
    t87 = *((unsigned int *)t105);
    *((unsigned int *)t108) = (t86 | t87);
    t106 = (t34 + 4);
    t107 = (t90 + 4);
    t88 = *((unsigned int *)t34);
    t89 = (~(t88));
    t92 = *((unsigned int *)t106);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (~(t94));
    t96 = *((unsigned int *)t107);
    t99 = (~(t96));
    t7 = (t89 & t93);
    t82 = (t95 & t99);
    t100 = (~(t7));
    t101 = (~(t82));
    t111 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t111 & t100);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t112 & t101);
    t113 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t113 & t100);
    t114 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t114 & t101);
    goto LAB94;

LAB95:    xsi_set_current_line(53, ng53);

LAB98:    xsi_set_current_line(54, ng53);
    t110 = ((char*)((ng8)));
    t123 = (t1 + 37144);
    xsi_vlogvar_assign_value(t123, t110, 0, 0, 1);
    xsi_set_current_line(55, ng53);
    t3 = (t1 + 39544);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 40024);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t19 = (t1 + 4736);
    xsi_vlogfile_write(1, 0, 0, ng60, 3, t19, (char)119, t6, 32, (char)119, t11, 32);
    goto LAB97;

LAB101:    *((unsigned int *)t18) = 1;
    goto LAB102;

LAB103:    xsi_set_current_line(60, ng53);

LAB106:    xsi_set_current_line(61, ng53);
    t32 = (t1 + 39544);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    t36 = (t1 + 4736);
    xsi_vlogfile_write(1, 0, 0, ng61, 2, t36, (char)119, t35, 32);
    goto LAB105;

LAB108:    *((unsigned int *)t18) = 1;
    goto LAB109;

LAB110:    xsi_set_current_line(64, ng53);

LAB113:    xsi_set_current_line(65, ng53);
    t32 = (t1 + 39544);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    t36 = (t1 + 40024);
    t49 = (t36 + 56U);
    t51 = *((char **)t49);
    memset(t34, 0, 8);
    t57 = (t34 + 4);
    t62 = (t51 + 4);
    t27 = *((unsigned int *)t51);
    t28 = (t27 >> 0);
    *((unsigned int *)t34) = t28;
    t29 = *((unsigned int *)t62);
    t37 = (t29 >> 0);
    *((unsigned int *)t57) = t37;
    t38 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t38 & 255U);
    t39 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t39 & 255U);
    t63 = (t1 + 39224);
    t64 = (t63 + 56U);
    t72 = *((char **)t64);
    t73 = (t1 + 4736);
    xsi_vlogfile_write(1, 0, 0, ng62, 4, t73, (char)119, t35, 32, (char)118, t34, 8, (char)118, t72, 8);
    goto LAB112;

}

static int sp_TEST_BRBS(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t90[8];
    char t105[8];
    char t117[8];
    char t133[8];
    char t141[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
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
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    int t165;
    int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    char *t180;

LAB0:    t0 = 1;
    xsi_set_current_line(19, ng63);

LAB2:    xsi_set_current_line(20, ng63);
    t3 = (t1 + 40344);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(21, ng63);
    t8 = ((char*)((ng8)));
    t9 = (t1 + 40184);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(23, ng63);
    t4 = (t1 + 40504);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 14);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 14);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) != 0)
        goto LAB17;

LAB18:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB19;

LAB20:    memcpy(t58, t18, 8);

LAB21:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t91) != 0)
        goto LAB35;

LAB36:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB37;

LAB38:    memcpy(t141, t90, 8);

LAB39:    t173 = (t141 + 4);
    t174 = *((unsigned int *)t173);
    t175 = (~(t174));
    t176 = *((unsigned int *)t141);
    t177 = (t176 & t175);
    t178 = (t177 != 0);
    if (t178 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(32, ng63);

LAB55:    xsi_set_current_line(33, ng63);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 40184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(34, ng63);
    t3 = ((char*)((ng64)));
    t4 = (t1 + 40664);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 42424);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    memset(t10, 0, 8);
    t25 = (t10 + 4);
    t26 = (t19 + 4);
    t12 = *((unsigned int *)t19);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t26);
    t15 = (t14 >> 0);
    *((unsigned int *)t25) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 7U);
    t17 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t17 & 7U);
    t30 = (t1 + 40984);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 5168);
    xsi_vlogfile_write(1, 0, 0, ng66, 5, t33, (char)119, t3, 32, (char)118, t8, 8, (char)118, t10, 3, (char)118, t32, 3);

LAB53:    goto LAB14;

LAB8:    xsi_set_current_line(37, ng63);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 40184);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB10:    xsi_set_current_line(38, ng63);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 40184);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB12:    xsi_set_current_line(39, ng63);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 40184);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    t30 = (t1 + 40664);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng64)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB25;

LAB22:    if (t46 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t34) = 1;

LAB25:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t51) != 0)
        goto LAB28;

LAB29:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t50) = 1;
    goto LAB29;

LAB28:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB29;

LAB30:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB32;

LAB33:    *((unsigned int *)t90) = 1;
    goto LAB36;

LAB35:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB36;

LAB37:    t102 = (t1 + 40984);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t106 = (t1 + 42424);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    memset(t105, 0, 8);
    t109 = (t105 + 4);
    t110 = (t108 + 4);
    t111 = *((unsigned int *)t108);
    t112 = (t111 >> 0);
    *((unsigned int *)t105) = t112;
    t113 = *((unsigned int *)t110);
    t114 = (t113 >> 0);
    *((unsigned int *)t109) = t114;
    t115 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t115 & 7U);
    t116 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t116 & 7U);
    memset(t117, 0, 8);
    t118 = (t104 + 4);
    t119 = (t105 + 4);
    t120 = *((unsigned int *)t104);
    t121 = *((unsigned int *)t105);
    t122 = (t120 ^ t121);
    t123 = *((unsigned int *)t118);
    t124 = *((unsigned int *)t119);
    t125 = (t123 ^ t124);
    t126 = (t122 | t125);
    t127 = *((unsigned int *)t118);
    t128 = *((unsigned int *)t119);
    t129 = (t127 | t128);
    t130 = (~(t129));
    t131 = (t126 & t130);
    if (t131 != 0)
        goto LAB43;

LAB40:    if (t129 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t117) = 1;

LAB43:    memset(t133, 0, 8);
    t134 = (t117 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t117);
    t138 = (t137 & t136);
    t139 = (t138 & 1U);
    if (t139 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t134) != 0)
        goto LAB46;

LAB47:    t142 = *((unsigned int *)t90);
    t143 = *((unsigned int *)t133);
    t144 = (t142 & t143);
    *((unsigned int *)t141) = t144;
    t145 = (t90 + 4);
    t146 = (t133 + 4);
    t147 = (t141 + 4);
    t148 = *((unsigned int *)t145);
    t149 = *((unsigned int *)t146);
    t150 = (t148 | t149);
    *((unsigned int *)t147) = t150;
    t151 = *((unsigned int *)t147);
    t152 = (t151 != 0);
    if (t152 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB39;

LAB42:    t132 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t133) = 1;
    goto LAB47;

LAB46:    t140 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t140) = 1;
    goto LAB47;

LAB48:    t153 = *((unsigned int *)t141);
    t154 = *((unsigned int *)t147);
    *((unsigned int *)t141) = (t153 | t154);
    t155 = (t90 + 4);
    t156 = (t133 + 4);
    t157 = *((unsigned int *)t90);
    t158 = (~(t157));
    t159 = *((unsigned int *)t155);
    t160 = (~(t159));
    t161 = *((unsigned int *)t133);
    t162 = (~(t161));
    t163 = *((unsigned int *)t156);
    t164 = (~(t163));
    t165 = (t158 & t160);
    t166 = (t162 & t164);
    t167 = (~(t165));
    t168 = (~(t166));
    t169 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t169 & t167);
    t170 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t170 & t168);
    t171 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t171 & t167);
    t172 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t172 & t168);
    goto LAB50;

LAB51:    xsi_set_current_line(26, ng63);

LAB54:    xsi_set_current_line(27, ng63);
    t179 = ((char*)((ng8)));
    t180 = (t1 + 40184);
    xsi_vlogvar_assign_value(t180, t179, 0, 0, 1);
    xsi_set_current_line(28, ng63);
    t3 = (t1 + 42424);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 7U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 7U);
    t11 = (t1 + 5168);
    xsi_vlogfile_write(1, 0, 0, ng65, 2, t11, (char)118, t10, 3);
    goto LAB53;

}

static int sp_TEST_BRBC(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t90[8];
    char t105[8];
    char t117[8];
    char t133[8];
    char t141[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
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
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    int t165;
    int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    char *t180;

LAB0:    t0 = 1;
    xsi_set_current_line(19, ng67);

LAB2:    xsi_set_current_line(20, ng67);
    t3 = (t1 + 43224);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(21, ng67);
    t8 = ((char*)((ng8)));
    t9 = (t1 + 43064);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(23, ng67);
    t4 = (t1 + 43384);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 14);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 14);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) != 0)
        goto LAB17;

LAB18:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB19;

LAB20:    memcpy(t58, t18, 8);

LAB21:    memset(t90, 0, 8);
    t91 = (t58 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t58);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t91) != 0)
        goto LAB35;

LAB36:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB37;

LAB38:    memcpy(t141, t90, 8);

LAB39:    t173 = (t141 + 4);
    t174 = *((unsigned int *)t173);
    t175 = (~(t174));
    t176 = *((unsigned int *)t141);
    t177 = (t176 & t175);
    t178 = (t177 != 0);
    if (t178 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(32, ng67);

LAB55:    xsi_set_current_line(33, ng67);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 43064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(34, ng67);
    t3 = ((char*)((ng68)));
    t4 = (t1 + 43544);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 45304);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    memset(t10, 0, 8);
    t25 = (t10 + 4);
    t26 = (t19 + 4);
    t12 = *((unsigned int *)t19);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t26);
    t15 = (t14 >> 0);
    *((unsigned int *)t25) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 7U);
    t17 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t17 & 7U);
    t30 = (t1 + 43864);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 5600);
    xsi_vlogfile_write(1, 0, 0, ng70, 5, t33, (char)119, t3, 32, (char)118, t8, 8, (char)118, t10, 3, (char)118, t32, 3);

LAB53:    goto LAB14;

LAB8:    xsi_set_current_line(37, ng67);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 43064);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB10:    xsi_set_current_line(38, ng67);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 43064);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB12:    xsi_set_current_line(39, ng67);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 43064);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    t30 = (t1 + 43544);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng68)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB25;

LAB22:    if (t46 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t34) = 1;

LAB25:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t51) != 0)
        goto LAB28;

LAB29:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t50) = 1;
    goto LAB29;

LAB28:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB29;

LAB30:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB32;

LAB33:    *((unsigned int *)t90) = 1;
    goto LAB36;

LAB35:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB36;

LAB37:    t102 = (t1 + 43864);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t106 = (t1 + 45304);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    memset(t105, 0, 8);
    t109 = (t105 + 4);
    t110 = (t108 + 4);
    t111 = *((unsigned int *)t108);
    t112 = (t111 >> 0);
    *((unsigned int *)t105) = t112;
    t113 = *((unsigned int *)t110);
    t114 = (t113 >> 0);
    *((unsigned int *)t109) = t114;
    t115 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t115 & 7U);
    t116 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t116 & 7U);
    memset(t117, 0, 8);
    t118 = (t104 + 4);
    t119 = (t105 + 4);
    t120 = *((unsigned int *)t104);
    t121 = *((unsigned int *)t105);
    t122 = (t120 ^ t121);
    t123 = *((unsigned int *)t118);
    t124 = *((unsigned int *)t119);
    t125 = (t123 ^ t124);
    t126 = (t122 | t125);
    t127 = *((unsigned int *)t118);
    t128 = *((unsigned int *)t119);
    t129 = (t127 | t128);
    t130 = (~(t129));
    t131 = (t126 & t130);
    if (t131 != 0)
        goto LAB43;

LAB40:    if (t129 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t117) = 1;

LAB43:    memset(t133, 0, 8);
    t134 = (t117 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t117);
    t138 = (t137 & t136);
    t139 = (t138 & 1U);
    if (t139 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t134) != 0)
        goto LAB46;

LAB47:    t142 = *((unsigned int *)t90);
    t143 = *((unsigned int *)t133);
    t144 = (t142 & t143);
    *((unsigned int *)t141) = t144;
    t145 = (t90 + 4);
    t146 = (t133 + 4);
    t147 = (t141 + 4);
    t148 = *((unsigned int *)t145);
    t149 = *((unsigned int *)t146);
    t150 = (t148 | t149);
    *((unsigned int *)t147) = t150;
    t151 = *((unsigned int *)t147);
    t152 = (t151 != 0);
    if (t152 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB39;

LAB42:    t132 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t133) = 1;
    goto LAB47;

LAB46:    t140 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t140) = 1;
    goto LAB47;

LAB48:    t153 = *((unsigned int *)t141);
    t154 = *((unsigned int *)t147);
    *((unsigned int *)t141) = (t153 | t154);
    t155 = (t90 + 4);
    t156 = (t133 + 4);
    t157 = *((unsigned int *)t90);
    t158 = (~(t157));
    t159 = *((unsigned int *)t155);
    t160 = (~(t159));
    t161 = *((unsigned int *)t133);
    t162 = (~(t161));
    t163 = *((unsigned int *)t156);
    t164 = (~(t163));
    t165 = (t158 & t160);
    t166 = (t162 & t164);
    t167 = (~(t165));
    t168 = (~(t166));
    t169 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t169 & t167);
    t170 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t170 & t168);
    t171 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t171 & t167);
    t172 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t172 & t168);
    goto LAB50;

LAB51:    xsi_set_current_line(26, ng67);

LAB54:    xsi_set_current_line(27, ng67);
    t179 = ((char*)((ng8)));
    t180 = (t1 + 43064);
    xsi_vlogvar_assign_value(t180, t179, 0, 0, 1);
    xsi_set_current_line(28, ng67);
    t3 = (t1 + 45304);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 7U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 7U);
    t11 = (t1 + 5600);
    xsi_vlogfile_write(1, 0, 0, ng69, 2, t11, (char)118, t10, 3);
    goto LAB53;

}

static int sp_TEST_RJMP(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t34[8];
    char t50[8];
    char t58[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;

LAB0:    t0 = 1;
    xsi_set_current_line(18, ng71);

LAB2:    xsi_set_current_line(19, ng71);
    t3 = (t1 + 46104);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:
LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(20, ng71);
    t8 = ((char*)((ng8)));
    t9 = (t1 + 45944);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB14;

LAB6:    xsi_set_current_line(22, ng71);
    t4 = (t1 + 46264);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 14);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 14);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    memset(t18, 0, 8);
    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) != 0)
        goto LAB17;

LAB18:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB19;

LAB20:    memcpy(t58, t18, 8);

LAB21:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(29, ng71);

LAB37:    xsi_set_current_line(30, ng71);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 45944);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(31, ng71);
    t3 = ((char*)((ng72)));
    t4 = (t1 + 46424);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 6032);
    xsi_vlogfile_write(1, 0, 0, ng74, 3, t9, (char)119, t3, 32, (char)118, t8, 8);

LAB35:    goto LAB14;

LAB8:    xsi_set_current_line(34, ng71);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 45944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB10:    xsi_set_current_line(35, ng71);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 45944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB12:    xsi_set_current_line(36, ng71);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 45944);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB14;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB17:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    t30 = (t1 + 46424);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng72)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB25;

LAB22:    if (t46 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t34) = 1;

LAB25:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t51) != 0)
        goto LAB28;

LAB29:    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t18 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t50) = 1;
    goto LAB29;

LAB28:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB29;

LAB30:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t18 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t18);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB32;

LAB33:    xsi_set_current_line(24, ng71);

LAB36:    xsi_set_current_line(25, ng71);
    t96 = ((char*)((ng8)));
    t97 = (t1 + 45944);
    xsi_vlogvar_assign_value(t97, t96, 0, 0, 1);
    xsi_set_current_line(26, ng71);
    t3 = (t1 + 6032);
    xsi_vlogfile_write(1, 0, 0, ng73, 1, t3);
    goto LAB35;

}

static void Cont_23_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 49416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng75);
    t2 = (t0 + 66288);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 54816);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1023U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 9);
    t18 = (t0 + 54448);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_24_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 49664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng75);
    t2 = (t0 + 66320);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 54880);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 2);
    t18 = (t0 + 54464);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_26_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 49912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng75);
    t2 = (t0 + 66344);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 54944);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 7U);
    t18 = (t0 + 54480);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_27_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 50160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng75);
    t2 = (t0 + 66368);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 55008);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 7U);
    t18 = (t0 + 54496);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_28_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 50408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng75);
    t2 = (t0 + 66392);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 55072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 7U);
    t18 = (t0 + 54512);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_30_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 50656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng75);
    t2 = (t0 + 66416);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 55136);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 4U);
    t18 = (t0 + 54528);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_31_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 50904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng75);
    t2 = (t0 + 66440);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 55200);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 4U);
    t18 = (t0 + 54544);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_32_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 51152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng75);
    t2 = (t0 + 66472);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 55264);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 127U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 6U);
    t18 = (t0 + 54560);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_33_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 51400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng75);
    t2 = (t0 + 66496);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 55328);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 127U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 6U);
    t18 = (t0 + 54576);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_34_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 51648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng75);
    t2 = (t0 + 66520);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 55392);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 7U);
    t18 = (t0 + 54592);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_36_10(char *t0)
{
    char t3[8];
    char t7[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
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
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 51896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng75);
    t2 = (t0 + 66552);
    t4 = *((char **)t2);
    t5 = ((((char*)(t4))) + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 66584);
    t9 = *((char **)t8);
    t10 = ((((char*)(t9))) + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 66616);
    t13 = *((char **)t12);
    t14 = ((((char*)(t13))) + 64U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng76)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t6, t11, t15, 2, 1, t16, 32, 1);
    t17 = (t0 + 66648);
    t18 = *((char **)t17);
    t19 = ((((char*)(t18))) + 56U);
    t20 = *((char **)t19);
    t22 = (t0 + 66680);
    t23 = *((char **)t22);
    t24 = ((((char*)(t23))) + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 66712);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng44)));
    xsi_vlog_generic_get_array_select_value(t21, 8, t20, t25, t29, 2, 1, t30, 32, 1);
    xsi_vlogtype_concat(t3, 16, 16, 2U, t21, 8, t7, 8);
    t31 = (t0 + 55456);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 127U;
    t37 = t36;
    t38 = (t3 + 4);
    t39 = *((unsigned int *)t3);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 6U);
    t44 = (t0 + 54608);
    *((int *)t44) = 1;

LAB1:    return;
}

static void NetDecl_38_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 52144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng75);
    t2 = (t0 + 66744);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 55520);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 4095U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 11U);
    t18 = (t0 + 54624);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_39_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 52392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng75);
    t2 = (t0 + 66776);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 55584);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 7U);
    t18 = (t0 + 54640);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_40_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 52640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng75);
    t2 = (t0 + 66816);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 55648);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 32767U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 14U);
    t18 = (t0 + 54656);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_41_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 52888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng75);
    t2 = (t0 + 66848);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 55712);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 2U);
    t18 = (t0 + 54672);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_42_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 53136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng75);
    t2 = (t0 + 66888);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 55776);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 255U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 7U);
    t19 = (t0 + 54688);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_43_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 53384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng75);
    t2 = (t0 + 66920);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 55840);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 7U);
    t18 = (t0 + 54704);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_44_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 53632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng75);
    t2 = (t0 + 66944);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 55904);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 255U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 7U);
    t19 = (t0 + 54720);
    *((int *)t19) = 1;

LAB1:    return;
}

static void Initial_60_18(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(60, ng75);

LAB2:    xsi_set_current_line(61, ng75);
    xsi_vlogfile_write(1, 0, 0, ng77, 1, t0);
    xsi_set_current_line(62, ng75);
    t1 = ((char*)((ng78)));
    t2 = (t0 + 10424);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(63, ng75);
    t1 = ((char*)((ng78)));
    t2 = (t0 + 10584);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(64, ng75);
    t1 = ((char*)((ng78)));
    t2 = (t0 + 10744);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(66, ng75);
    t1 = ((char*)((ng79)));
    t2 = (t0 + 11544);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(68, ng75);
    t1 = ((char*)((ng78)));
    t2 = (t0 + 11704);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(69, ng75);
    t1 = ((char*)((ng78)));
    t2 = (t0 + 11864);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(70, ng75);
    t1 = ((char*)((ng78)));
    t2 = (t0 + 12024);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(71, ng75);
    t1 = ((char*)((ng78)));
    t2 = (t0 + 12184);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_74_19(char *t0)
{
    char t58[8];
    char t86[8];
    char t87[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
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
    char *t19;
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
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
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
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t88;
    unsigned int t89;
    int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    int t95;

LAB0:    t1 = (t0 + 54128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng75);
    t2 = (t0 + 54736);
    *((int *)t2) = 1;
    t3 = (t0 + 54160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng75);

LAB5:    xsi_set_current_line(75, ng75);
    t4 = (t0 + 6984U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng80)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng59)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng86)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng87)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng88)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng89)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng91)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng83)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(350, ng75);
    t2 = ((char*)((ng94)));
    t3 = (t0 + 10104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB41:    xsi_set_current_line(352, ng75);
    t2 = (t0 + 6984U);
    t3 = *((char **)t2);
    t2 = (t0 + 10264);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 10);
    goto LAB2;

LAB7:    xsi_set_current_line(77, ng75);

LAB42:    xsi_set_current_line(79, ng75);
    t7 = ((char*)((ng78)));
    t8 = (t0 + 11704);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(80, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(81, ng75);
    t2 = ((char*)((ng81)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(82, ng75);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 12184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(83, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 11704);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 11864);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 12024);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 12184);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 53936);
    t29 = (t0 + 1280);
    t30 = xsi_create_subprogram_invocation(t28, 0, t0, t29, 0, 0);
    t31 = (t0 + 15224);
    xsi_vlogvar_assign_value(t31, t3, 0, 0, 3);
    t32 = (t0 + 15384);
    xsi_vlogvar_assign_value(t32, t4, 0, 0, 15);
    t33 = (t0 + 15544);
    xsi_vlogvar_assign_value(t33, t7, 0, 0, 8);
    t34 = (t0 + 15704);
    xsi_vlogvar_assign_value(t34, t8, 0, 0, 12);
    t35 = (t0 + 15864);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 8);
    t36 = (t0 + 16024);
    xsi_vlogvar_assign_value(t36, t10, 0, 0, 8);
    t37 = (t0 + 16184);
    xsi_vlogvar_assign_value(t37, t11, 0, 0, 5);
    t38 = (t0 + 16344);
    xsi_vlogvar_assign_value(t38, t12, 0, 0, 5);
    t39 = (t0 + 16504);
    xsi_vlogvar_assign_value(t39, t13, 0, 0, 8);
    t40 = (t0 + 16664);
    xsi_vlogvar_assign_value(t40, t14, 0, 0, 8);
    t41 = (t0 + 16824);
    xsi_vlogvar_assign_value(t41, t15, 0, 0, 8);
    t42 = (t0 + 16984);
    xsi_vlogvar_assign_value(t42, t16, 0, 0, 7);
    t43 = (t0 + 17144);
    xsi_vlogvar_assign_value(t43, t18, 0, 0, 32);
    t44 = (t0 + 17304);
    xsi_vlogvar_assign_value(t44, t21, 0, 0, 32);
    t45 = (t0 + 17464);
    xsi_vlogvar_assign_value(t45, t24, 0, 0, 32);
    t46 = (t0 + 17624);
    xsi_vlogvar_assign_value(t46, t27, 0, 0, 32);

LAB43:    t47 = (t0 + 54032);
    t48 = *((char **)t47);
    t49 = (t48 + 80U);
    t50 = *((char **)t49);
    t51 = (t50 + 272U);
    t52 = *((char **)t51);
    t53 = (t52 + 0U);
    t54 = *((char **)t53);
    t6 = ((int  (*)(char *, char *))t54)(t0, t48);
    if (t6 != 0)
        goto LAB45;

LAB44:    t48 = (t0 + 54032);
    t55 = *((char **)t48);
    t48 = (t0 + 15064);
    t56 = (t48 + 56U);
    t57 = *((char **)t56);
    memcpy(t58, t57, 8);
    t59 = (t0 + 1280);
    t60 = (t0 + 53936);
    t61 = 0;
    xsi_delete_subprogram_invocation(t59, t55, t0, t60, t61);
    t62 = (t0 + 10104);
    xsi_vlogvar_assign_value(t62, t58, 0, 0, 1);
    xsi_set_current_line(87, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB49;

LAB46:    if (t72 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t58) = 1;

LAB49:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB9:    xsi_set_current_line(93, ng75);

LAB54:    xsi_set_current_line(95, ng75);
    t3 = ((char*)((ng78)));
    t4 = (t0 + 11704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(96, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(97, ng75);
    t2 = ((char*)((ng82)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(98, ng75);
    t2 = ((char*)((ng83)));
    t3 = (t0 + 12184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(99, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 11704);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 11864);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 12024);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 12184);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 53936);
    t29 = (t0 + 1280);
    t30 = xsi_create_subprogram_invocation(t28, 0, t0, t29, 0, 0);
    t31 = (t0 + 15224);
    xsi_vlogvar_assign_value(t31, t3, 0, 0, 3);
    t32 = (t0 + 15384);
    xsi_vlogvar_assign_value(t32, t4, 0, 0, 15);
    t33 = (t0 + 15544);
    xsi_vlogvar_assign_value(t33, t7, 0, 0, 8);
    t34 = (t0 + 15704);
    xsi_vlogvar_assign_value(t34, t8, 0, 0, 12);
    t35 = (t0 + 15864);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 8);
    t36 = (t0 + 16024);
    xsi_vlogvar_assign_value(t36, t10, 0, 0, 8);
    t37 = (t0 + 16184);
    xsi_vlogvar_assign_value(t37, t11, 0, 0, 5);
    t38 = (t0 + 16344);
    xsi_vlogvar_assign_value(t38, t12, 0, 0, 5);
    t39 = (t0 + 16504);
    xsi_vlogvar_assign_value(t39, t13, 0, 0, 8);
    t40 = (t0 + 16664);
    xsi_vlogvar_assign_value(t40, t14, 0, 0, 8);
    t41 = (t0 + 16824);
    xsi_vlogvar_assign_value(t41, t15, 0, 0, 8);
    t42 = (t0 + 16984);
    xsi_vlogvar_assign_value(t42, t16, 0, 0, 7);
    t43 = (t0 + 17144);
    xsi_vlogvar_assign_value(t43, t18, 0, 0, 32);
    t44 = (t0 + 17304);
    xsi_vlogvar_assign_value(t44, t21, 0, 0, 32);
    t45 = (t0 + 17464);
    xsi_vlogvar_assign_value(t45, t24, 0, 0, 32);
    t46 = (t0 + 17624);
    xsi_vlogvar_assign_value(t46, t27, 0, 0, 32);

LAB55:    t47 = (t0 + 54032);
    t48 = *((char **)t47);
    t49 = (t48 + 80U);
    t50 = *((char **)t49);
    t51 = (t50 + 272U);
    t52 = *((char **)t51);
    t53 = (t52 + 0U);
    t54 = *((char **)t53);
    t6 = ((int  (*)(char *, char *))t54)(t0, t48);
    if (t6 != 0)
        goto LAB57;

LAB56:    t48 = (t0 + 54032);
    t55 = *((char **)t48);
    t48 = (t0 + 15064);
    t56 = (t48 + 56U);
    t57 = *((char **)t56);
    memcpy(t58, t57, 8);
    t59 = (t0 + 1280);
    t60 = (t0 + 53936);
    t61 = 0;
    xsi_delete_subprogram_invocation(t59, t55, t0, t60, t61);
    t62 = (t0 + 10104);
    xsi_vlogvar_assign_value(t62, t58, 0, 0, 1);
    xsi_set_current_line(104, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB61;

LAB58:    if (t72 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t58) = 1;

LAB61:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB62;

LAB63:
LAB64:    goto LAB41;

LAB11:    xsi_set_current_line(110, ng75);

LAB66:    xsi_set_current_line(112, ng75);
    t3 = (t0 + 11544);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 11704);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(113, ng75);
    t2 = ((char*)((ng81)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(114, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(115, ng75);
    t2 = (t0 + 10424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 12184);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    xsi_set_current_line(116, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 9704U);
    t17 = *((char **)t2);
    t2 = (t0 + 11704);
    t18 = (t2 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 11864);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 12024);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 12184);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 11544);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 53936);
    t33 = (t0 + 4736);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 37304);
    xsi_vlogvar_assign_value(t35, t3, 0, 0, 3);
    t36 = (t0 + 37464);
    xsi_vlogvar_assign_value(t36, t4, 0, 0, 15);
    t37 = (t0 + 37624);
    xsi_vlogvar_assign_value(t37, t7, 0, 0, 8);
    t38 = (t0 + 37784);
    xsi_vlogvar_assign_value(t38, t8, 0, 0, 12);
    t39 = (t0 + 37944);
    xsi_vlogvar_assign_value(t39, t9, 0, 0, 8);
    t40 = (t0 + 38104);
    xsi_vlogvar_assign_value(t40, t10, 0, 0, 8);
    t41 = (t0 + 38264);
    xsi_vlogvar_assign_value(t41, t11, 0, 0, 5);
    t42 = (t0 + 38424);
    xsi_vlogvar_assign_value(t42, t12, 0, 0, 5);
    t43 = (t0 + 38584);
    xsi_vlogvar_assign_value(t43, t13, 0, 0, 8);
    t44 = (t0 + 38744);
    xsi_vlogvar_assign_value(t44, t14, 0, 0, 8);
    t45 = (t0 + 38904);
    xsi_vlogvar_assign_value(t45, t15, 0, 0, 8);
    t46 = (t0 + 39064);
    xsi_vlogvar_assign_value(t46, t16, 0, 0, 7);
    t47 = (t0 + 39224);
    xsi_vlogvar_assign_value(t47, t17, 0, 0, 8);
    t48 = (t0 + 39384);
    xsi_vlogvar_assign_value(t48, t19, 0, 0, 32);
    t49 = (t0 + 39544);
    xsi_vlogvar_assign_value(t49, t22, 0, 0, 32);
    t50 = (t0 + 39704);
    xsi_vlogvar_assign_value(t50, t25, 0, 0, 32);
    t51 = (t0 + 39864);
    xsi_vlogvar_assign_value(t51, t28, 0, 0, 32);
    t52 = (t0 + 40024);
    xsi_vlogvar_assign_value(t52, t31, 0, 0, 32);

LAB67:    t53 = (t0 + 54032);
    t54 = *((char **)t53);
    t55 = (t54 + 80U);
    t56 = *((char **)t55);
    t57 = (t56 + 272U);
    t59 = *((char **)t57);
    t60 = (t59 + 0U);
    t61 = *((char **)t60);
    t6 = ((int  (*)(char *, char *))t61)(t0, t54);
    if (t6 != 0)
        goto LAB69;

LAB68:    t54 = (t0 + 54032);
    t62 = *((char **)t54);
    t54 = (t0 + 37144);
    t80 = (t54 + 56U);
    t81 = *((char **)t80);
    memcpy(t58, t81, 8);
    t82 = (t0 + 4736);
    t83 = (t0 + 53936);
    t84 = 0;
    xsi_delete_subprogram_invocation(t82, t62, t0, t83, t84);
    t85 = (t0 + 10104);
    xsi_vlogvar_assign_value(t85, t58, 0, 0, 1);
    xsi_set_current_line(121, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB73;

LAB70:    if (t72 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t58) = 1;

LAB73:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB74;

LAB75:
LAB76:    goto LAB41;

LAB13:    xsi_set_current_line(128, ng75);

LAB80:    xsi_set_current_line(130, ng75);
    t3 = (t0 + 11544);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 11704);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(131, ng75);
    t2 = ((char*)((ng82)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(132, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(133, ng75);
    t2 = (t0 + 10584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 12184);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    xsi_set_current_line(134, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 9704U);
    t17 = *((char **)t2);
    t2 = (t0 + 11704);
    t18 = (t2 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 11864);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 12024);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 12184);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 11544);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 53936);
    t33 = (t0 + 4736);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 37304);
    xsi_vlogvar_assign_value(t35, t3, 0, 0, 3);
    t36 = (t0 + 37464);
    xsi_vlogvar_assign_value(t36, t4, 0, 0, 15);
    t37 = (t0 + 37624);
    xsi_vlogvar_assign_value(t37, t7, 0, 0, 8);
    t38 = (t0 + 37784);
    xsi_vlogvar_assign_value(t38, t8, 0, 0, 12);
    t39 = (t0 + 37944);
    xsi_vlogvar_assign_value(t39, t9, 0, 0, 8);
    t40 = (t0 + 38104);
    xsi_vlogvar_assign_value(t40, t10, 0, 0, 8);
    t41 = (t0 + 38264);
    xsi_vlogvar_assign_value(t41, t11, 0, 0, 5);
    t42 = (t0 + 38424);
    xsi_vlogvar_assign_value(t42, t12, 0, 0, 5);
    t43 = (t0 + 38584);
    xsi_vlogvar_assign_value(t43, t13, 0, 0, 8);
    t44 = (t0 + 38744);
    xsi_vlogvar_assign_value(t44, t14, 0, 0, 8);
    t45 = (t0 + 38904);
    xsi_vlogvar_assign_value(t45, t15, 0, 0, 8);
    t46 = (t0 + 39064);
    xsi_vlogvar_assign_value(t46, t16, 0, 0, 7);
    t47 = (t0 + 39224);
    xsi_vlogvar_assign_value(t47, t17, 0, 0, 8);
    t48 = (t0 + 39384);
    xsi_vlogvar_assign_value(t48, t19, 0, 0, 32);
    t49 = (t0 + 39544);
    xsi_vlogvar_assign_value(t49, t22, 0, 0, 32);
    t50 = (t0 + 39704);
    xsi_vlogvar_assign_value(t50, t25, 0, 0, 32);
    t51 = (t0 + 39864);
    xsi_vlogvar_assign_value(t51, t28, 0, 0, 32);
    t52 = (t0 + 40024);
    xsi_vlogvar_assign_value(t52, t31, 0, 0, 32);

LAB81:    t53 = (t0 + 54032);
    t54 = *((char **)t53);
    t55 = (t54 + 80U);
    t56 = *((char **)t55);
    t57 = (t56 + 272U);
    t59 = *((char **)t57);
    t60 = (t59 + 0U);
    t61 = *((char **)t60);
    t6 = ((int  (*)(char *, char *))t61)(t0, t54);
    if (t6 != 0)
        goto LAB83;

LAB82:    t54 = (t0 + 54032);
    t62 = *((char **)t54);
    t54 = (t0 + 37144);
    t80 = (t54 + 56U);
    t81 = *((char **)t80);
    memcpy(t58, t81, 8);
    t82 = (t0 + 4736);
    t83 = (t0 + 53936);
    t84 = 0;
    xsi_delete_subprogram_invocation(t82, t62, t0, t83, t84);
    t85 = (t0 + 10104);
    xsi_vlogvar_assign_value(t85, t58, 0, 0, 1);
    xsi_set_current_line(139, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB87;

LAB84:    if (t72 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t58) = 1;

LAB87:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB88;

LAB89:
LAB90:    goto LAB41;

LAB15:    xsi_set_current_line(146, ng75);

LAB94:    xsi_set_current_line(148, ng75);
    t3 = ((char*)((ng78)));
    t4 = (t0 + 11704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(149, ng75);
    t2 = ((char*)((ng81)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(150, ng75);
    t2 = ((char*)((ng84)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(151, ng75);
    t2 = (t0 + 10424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 12184);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    xsi_set_current_line(152, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 11704);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 11864);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 12024);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 12184);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 53936);
    t29 = (t0 + 3008);
    t30 = xsi_create_subprogram_invocation(t28, 0, t0, t29, 0, 0);
    t31 = (t0 + 26104);
    xsi_vlogvar_assign_value(t31, t3, 0, 0, 3);
    t32 = (t0 + 26264);
    xsi_vlogvar_assign_value(t32, t4, 0, 0, 15);
    t33 = (t0 + 26424);
    xsi_vlogvar_assign_value(t33, t7, 0, 0, 8);
    t34 = (t0 + 26584);
    xsi_vlogvar_assign_value(t34, t8, 0, 0, 12);
    t35 = (t0 + 26744);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 8);
    t36 = (t0 + 26904);
    xsi_vlogvar_assign_value(t36, t10, 0, 0, 8);
    t37 = (t0 + 27064);
    xsi_vlogvar_assign_value(t37, t11, 0, 0, 5);
    t38 = (t0 + 27224);
    xsi_vlogvar_assign_value(t38, t12, 0, 0, 5);
    t39 = (t0 + 27384);
    xsi_vlogvar_assign_value(t39, t13, 0, 0, 8);
    t40 = (t0 + 27544);
    xsi_vlogvar_assign_value(t40, t14, 0, 0, 8);
    t41 = (t0 + 27704);
    xsi_vlogvar_assign_value(t41, t15, 0, 0, 8);
    t42 = (t0 + 27864);
    xsi_vlogvar_assign_value(t42, t16, 0, 0, 7);
    t43 = (t0 + 28024);
    xsi_vlogvar_assign_value(t43, t18, 0, 0, 32);
    t44 = (t0 + 28184);
    xsi_vlogvar_assign_value(t44, t21, 0, 0, 32);
    t45 = (t0 + 28344);
    xsi_vlogvar_assign_value(t45, t24, 0, 0, 32);
    t46 = (t0 + 28504);
    xsi_vlogvar_assign_value(t46, t27, 0, 0, 32);

LAB95:    t47 = (t0 + 54032);
    t48 = *((char **)t47);
    t49 = (t48 + 80U);
    t50 = *((char **)t49);
    t51 = (t50 + 272U);
    t52 = *((char **)t51);
    t53 = (t52 + 0U);
    t54 = *((char **)t53);
    t6 = ((int  (*)(char *, char *))t54)(t0, t48);
    if (t6 != 0)
        goto LAB97;

LAB96:    t48 = (t0 + 54032);
    t55 = *((char **)t48);
    t48 = (t0 + 25944);
    t56 = (t48 + 56U);
    t57 = *((char **)t56);
    memcpy(t58, t57, 8);
    t59 = (t0 + 3008);
    t60 = (t0 + 53936);
    t61 = 0;
    xsi_delete_subprogram_invocation(t59, t55, t0, t60, t61);
    t62 = (t0 + 10104);
    xsi_vlogvar_assign_value(t62, t58, 0, 0, 1);
    xsi_set_current_line(157, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB101;

LAB98:    if (t72 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t58) = 1;

LAB101:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB102;

LAB103:
LAB104:    goto LAB41;

LAB17:    xsi_set_current_line(163, ng75);

LAB106:    xsi_set_current_line(165, ng75);
    t3 = ((char*)((ng78)));
    t4 = (t0 + 11704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(166, ng75);
    t2 = ((char*)((ng82)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(167, ng75);
    t2 = ((char*)((ng84)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(168, ng75);
    t2 = (t0 + 11224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 10584);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t58, 0, 8);
    xsi_vlog_signed_minus(t58, 32, t4, 32, t9, 32);
    t10 = (t0 + 12184);
    xsi_vlogvar_assign_value(t10, t58, 0, 0, 32);
    xsi_set_current_line(170, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 11704);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 11864);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 12024);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 12184);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 53936);
    t29 = (t0 + 3872);
    t30 = xsi_create_subprogram_invocation(t28, 0, t0, t29, 0, 0);
    t31 = (t0 + 31544);
    xsi_vlogvar_assign_value(t31, t3, 0, 0, 3);
    t32 = (t0 + 31704);
    xsi_vlogvar_assign_value(t32, t4, 0, 0, 15);
    t33 = (t0 + 31864);
    xsi_vlogvar_assign_value(t33, t7, 0, 0, 8);
    t34 = (t0 + 32024);
    xsi_vlogvar_assign_value(t34, t8, 0, 0, 12);
    t35 = (t0 + 32184);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 8);
    t36 = (t0 + 32344);
    xsi_vlogvar_assign_value(t36, t10, 0, 0, 8);
    t37 = (t0 + 32504);
    xsi_vlogvar_assign_value(t37, t11, 0, 0, 5);
    t38 = (t0 + 32664);
    xsi_vlogvar_assign_value(t38, t12, 0, 0, 5);
    t39 = (t0 + 32824);
    xsi_vlogvar_assign_value(t39, t13, 0, 0, 8);
    t40 = (t0 + 32984);
    xsi_vlogvar_assign_value(t40, t14, 0, 0, 8);
    t41 = (t0 + 33144);
    xsi_vlogvar_assign_value(t41, t15, 0, 0, 8);
    t42 = (t0 + 33304);
    xsi_vlogvar_assign_value(t42, t16, 0, 0, 7);
    t43 = (t0 + 33464);
    xsi_vlogvar_assign_value(t43, t18, 0, 0, 32);
    t44 = (t0 + 33624);
    xsi_vlogvar_assign_value(t44, t21, 0, 0, 32);
    t45 = (t0 + 33784);
    xsi_vlogvar_assign_value(t45, t24, 0, 0, 32);
    t46 = (t0 + 33944);
    xsi_vlogvar_assign_value(t46, t27, 0, 0, 32);

LAB107:    t47 = (t0 + 54032);
    t48 = *((char **)t47);
    t49 = (t48 + 80U);
    t50 = *((char **)t49);
    t51 = (t50 + 272U);
    t52 = *((char **)t51);
    t53 = (t52 + 0U);
    t54 = *((char **)t53);
    t6 = ((int  (*)(char *, char *))t54)(t0, t48);
    if (t6 != 0)
        goto LAB109;

LAB108:    t48 = (t0 + 54032);
    t55 = *((char **)t48);
    t48 = (t0 + 31384);
    t56 = (t48 + 56U);
    t57 = *((char **)t56);
    memcpy(t58, t57, 8);
    t59 = (t0 + 3872);
    t60 = (t0 + 53936);
    t61 = 0;
    xsi_delete_subprogram_invocation(t59, t55, t0, t60, t61);
    t62 = (t0 + 10104);
    xsi_vlogvar_assign_value(t62, t58, 0, 0, 1);
    xsi_set_current_line(175, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB113;

LAB110:    if (t72 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t58) = 1;

LAB113:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB114;

LAB115:
LAB116:    goto LAB41;

LAB19:    xsi_set_current_line(181, ng75);

LAB118:    xsi_set_current_line(185, ng75);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 11704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(186, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(187, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(188, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 12184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(189, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9224U);
    t9 = *((char **)t2);
    t2 = (t0 + 9384U);
    t10 = *((char **)t2);
    t2 = (t0 + 9544U);
    t11 = *((char **)t2);
    t2 = (t0 + 7784U);
    t12 = *((char **)t2);
    t2 = (t0 + 7944U);
    t13 = *((char **)t2);
    t2 = (t0 + 7304U);
    t14 = *((char **)t2);
    t2 = (t0 + 7464U);
    t15 = *((char **)t2);
    t2 = (t0 + 7624U);
    t16 = *((char **)t2);
    t2 = (t0 + 8264U);
    t17 = *((char **)t2);
    t2 = (t0 + 11704);
    t18 = (t2 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 11864);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 12024);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 12184);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 53936);
    t30 = (t0 + 5168);
    t31 = xsi_create_subprogram_invocation(t29, 0, t0, t30, 0, 0);
    t32 = (t0 + 40344);
    xsi_vlogvar_assign_value(t32, t3, 0, 0, 3);
    t33 = (t0 + 40504);
    xsi_vlogvar_assign_value(t33, t4, 0, 0, 15);
    t34 = (t0 + 40664);
    xsi_vlogvar_assign_value(t34, t7, 0, 0, 8);
    t35 = (t0 + 40824);
    xsi_vlogvar_assign_value(t35, t8, 0, 0, 12);
    t36 = (t0 + 40984);
    xsi_vlogvar_assign_value(t36, t9, 0, 0, 3);
    t37 = (t0 + 41144);
    xsi_vlogvar_assign_value(t37, t10, 0, 0, 8);
    t38 = (t0 + 41304);
    xsi_vlogvar_assign_value(t38, t11, 0, 0, 8);
    t39 = (t0 + 41464);
    xsi_vlogvar_assign_value(t39, t12, 0, 0, 5);
    t40 = (t0 + 41624);
    xsi_vlogvar_assign_value(t40, t13, 0, 0, 5);
    t41 = (t0 + 41784);
    xsi_vlogvar_assign_value(t41, t14, 0, 0, 8);
    t42 = (t0 + 41944);
    xsi_vlogvar_assign_value(t42, t15, 0, 0, 8);
    t43 = (t0 + 42104);
    xsi_vlogvar_assign_value(t43, t16, 0, 0, 8);
    t44 = (t0 + 42264);
    xsi_vlogvar_assign_value(t44, t17, 0, 0, 7);
    t45 = (t0 + 42424);
    xsi_vlogvar_assign_value(t45, t19, 0, 0, 32);
    t46 = (t0 + 42584);
    xsi_vlogvar_assign_value(t46, t22, 0, 0, 32);
    t47 = (t0 + 42744);
    xsi_vlogvar_assign_value(t47, t25, 0, 0, 32);
    t48 = (t0 + 42904);
    xsi_vlogvar_assign_value(t48, t28, 0, 0, 32);

LAB119:    t49 = (t0 + 54032);
    t50 = *((char **)t49);
    t51 = (t50 + 80U);
    t52 = *((char **)t51);
    t53 = (t52 + 272U);
    t54 = *((char **)t53);
    t55 = (t54 + 0U);
    t56 = *((char **)t55);
    t6 = ((int  (*)(char *, char *))t56)(t0, t50);
    if (t6 != 0)
        goto LAB121;

LAB120:    t50 = (t0 + 54032);
    t57 = *((char **)t50);
    t50 = (t0 + 40184);
    t59 = (t50 + 56U);
    t60 = *((char **)t59);
    memcpy(t58, t60, 8);
    t61 = (t0 + 5168);
    t62 = (t0 + 53936);
    t80 = 0;
    xsi_delete_subprogram_invocation(t61, t57, t0, t62, t80);
    t81 = (t0 + 10104);
    xsi_vlogvar_assign_value(t81, t58, 0, 0, 1);
    goto LAB41;

LAB21:    xsi_set_current_line(195, ng75);

LAB122:    xsi_set_current_line(199, ng75);
    t3 = ((char*)((ng85)));
    t4 = (t0 + 11704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(200, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(201, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(202, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 12184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(203, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9224U);
    t9 = *((char **)t2);
    t2 = (t0 + 9384U);
    t10 = *((char **)t2);
    t2 = (t0 + 9544U);
    t11 = *((char **)t2);
    t2 = (t0 + 7784U);
    t12 = *((char **)t2);
    t2 = (t0 + 7944U);
    t13 = *((char **)t2);
    t2 = (t0 + 7304U);
    t14 = *((char **)t2);
    t2 = (t0 + 7464U);
    t15 = *((char **)t2);
    t2 = (t0 + 7624U);
    t16 = *((char **)t2);
    t2 = (t0 + 8264U);
    t17 = *((char **)t2);
    t2 = (t0 + 11704);
    t18 = (t2 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 11864);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 12024);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 12184);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 53936);
    t30 = (t0 + 5168);
    t31 = xsi_create_subprogram_invocation(t29, 0, t0, t30, 0, 0);
    t32 = (t0 + 40344);
    xsi_vlogvar_assign_value(t32, t3, 0, 0, 3);
    t33 = (t0 + 40504);
    xsi_vlogvar_assign_value(t33, t4, 0, 0, 15);
    t34 = (t0 + 40664);
    xsi_vlogvar_assign_value(t34, t7, 0, 0, 8);
    t35 = (t0 + 40824);
    xsi_vlogvar_assign_value(t35, t8, 0, 0, 12);
    t36 = (t0 + 40984);
    xsi_vlogvar_assign_value(t36, t9, 0, 0, 3);
    t37 = (t0 + 41144);
    xsi_vlogvar_assign_value(t37, t10, 0, 0, 8);
    t38 = (t0 + 41304);
    xsi_vlogvar_assign_value(t38, t11, 0, 0, 8);
    t39 = (t0 + 41464);
    xsi_vlogvar_assign_value(t39, t12, 0, 0, 5);
    t40 = (t0 + 41624);
    xsi_vlogvar_assign_value(t40, t13, 0, 0, 5);
    t41 = (t0 + 41784);
    xsi_vlogvar_assign_value(t41, t14, 0, 0, 8);
    t42 = (t0 + 41944);
    xsi_vlogvar_assign_value(t42, t15, 0, 0, 8);
    t43 = (t0 + 42104);
    xsi_vlogvar_assign_value(t43, t16, 0, 0, 8);
    t44 = (t0 + 42264);
    xsi_vlogvar_assign_value(t44, t17, 0, 0, 7);
    t45 = (t0 + 42424);
    xsi_vlogvar_assign_value(t45, t19, 0, 0, 32);
    t46 = (t0 + 42584);
    xsi_vlogvar_assign_value(t46, t22, 0, 0, 32);
    t47 = (t0 + 42744);
    xsi_vlogvar_assign_value(t47, t25, 0, 0, 32);
    t48 = (t0 + 42904);
    xsi_vlogvar_assign_value(t48, t28, 0, 0, 32);

LAB123:    t49 = (t0 + 54032);
    t50 = *((char **)t49);
    t51 = (t50 + 80U);
    t52 = *((char **)t51);
    t53 = (t52 + 272U);
    t54 = *((char **)t53);
    t55 = (t54 + 0U);
    t56 = *((char **)t55);
    t6 = ((int  (*)(char *, char *))t56)(t0, t50);
    if (t6 != 0)
        goto LAB125;

LAB124:    t50 = (t0 + 54032);
    t57 = *((char **)t50);
    t50 = (t0 + 40184);
    t59 = (t50 + 56U);
    t60 = *((char **)t59);
    memcpy(t58, t60, 8);
    t61 = (t0 + 5168);
    t62 = (t0 + 53936);
    t80 = 0;
    xsi_delete_subprogram_invocation(t61, t57, t0, t62, t80);
    t81 = (t0 + 10104);
    xsi_vlogvar_assign_value(t81, t58, 0, 0, 1);
    goto LAB41;

LAB23:    xsi_set_current_line(209, ng75);

LAB126:    xsi_set_current_line(212, ng75);
    t3 = ((char*)((ng78)));
    t4 = (t0 + 11704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(213, ng75);
    t2 = ((char*)((ng82)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(214, ng75);
    t2 = ((char*)((ng81)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(215, ng75);
    t2 = (t0 + 10424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 10584);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t58, 0, 8);
    xsi_vlog_signed_minus(t58, 32, t4, 32, t9, 32);
    t10 = (t0 + 12184);
    xsi_vlogvar_assign_value(t10, t58, 0, 0, 32);
    xsi_set_current_line(216, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 11704);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 11864);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 12024);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 12184);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 53936);
    t29 = (t0 + 3872);
    t30 = xsi_create_subprogram_invocation(t28, 0, t0, t29, 0, 0);
    t31 = (t0 + 31544);
    xsi_vlogvar_assign_value(t31, t3, 0, 0, 3);
    t32 = (t0 + 31704);
    xsi_vlogvar_assign_value(t32, t4, 0, 0, 15);
    t33 = (t0 + 31864);
    xsi_vlogvar_assign_value(t33, t7, 0, 0, 8);
    t34 = (t0 + 32024);
    xsi_vlogvar_assign_value(t34, t8, 0, 0, 12);
    t35 = (t0 + 32184);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 8);
    t36 = (t0 + 32344);
    xsi_vlogvar_assign_value(t36, t10, 0, 0, 8);
    t37 = (t0 + 32504);
    xsi_vlogvar_assign_value(t37, t11, 0, 0, 5);
    t38 = (t0 + 32664);
    xsi_vlogvar_assign_value(t38, t12, 0, 0, 5);
    t39 = (t0 + 32824);
    xsi_vlogvar_assign_value(t39, t13, 0, 0, 8);
    t40 = (t0 + 32984);
    xsi_vlogvar_assign_value(t40, t14, 0, 0, 8);
    t41 = (t0 + 33144);
    xsi_vlogvar_assign_value(t41, t15, 0, 0, 8);
    t42 = (t0 + 33304);
    xsi_vlogvar_assign_value(t42, t16, 0, 0, 7);
    t43 = (t0 + 33464);
    xsi_vlogvar_assign_value(t43, t18, 0, 0, 32);
    t44 = (t0 + 33624);
    xsi_vlogvar_assign_value(t44, t21, 0, 0, 32);
    t45 = (t0 + 33784);
    xsi_vlogvar_assign_value(t45, t24, 0, 0, 32);
    t46 = (t0 + 33944);
    xsi_vlogvar_assign_value(t46, t27, 0, 0, 32);

LAB127:    t47 = (t0 + 54032);
    t48 = *((char **)t47);
    t49 = (t48 + 80U);
    t50 = *((char **)t49);
    t51 = (t50 + 272U);
    t52 = *((char **)t51);
    t53 = (t52 + 0U);
    t54 = *((char **)t53);
    t6 = ((int  (*)(char *, char *))t54)(t0, t48);
    if (t6 != 0)
        goto LAB129;

LAB128:    t48 = (t0 + 54032);
    t55 = *((char **)t48);
    t48 = (t0 + 31384);
    t56 = (t48 + 56U);
    t57 = *((char **)t56);
    memcpy(t58, t57, 8);
    t59 = (t0 + 3872);
    t60 = (t0 + 53936);
    t61 = 0;
    xsi_delete_subprogram_invocation(t59, t55, t0, t60, t61);
    t62 = (t0 + 10104);
    xsi_vlogvar_assign_value(t62, t58, 0, 0, 1);
    xsi_set_current_line(221, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB133;

LAB130:    if (t72 != 0)
        goto LAB132;

LAB131:    *((unsigned int *)t58) = 1;

LAB133:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB134;

LAB135:
LAB136:    goto LAB41;

LAB25:    xsi_set_current_line(227, ng75);

LAB138:    xsi_set_current_line(229, ng75);
    t3 = ((char*)((ng78)));
    t4 = (t0 + 11704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(230, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(231, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(232, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 12184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(233, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 11704);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 11864);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 12024);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 12184);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 53936);
    t29 = (t0 + 6032);
    t30 = xsi_create_subprogram_invocation(t28, 0, t0, t29, 0, 0);
    t31 = (t0 + 46104);
    xsi_vlogvar_assign_value(t31, t3, 0, 0, 3);
    t32 = (t0 + 46264);
    xsi_vlogvar_assign_value(t32, t4, 0, 0, 15);
    t33 = (t0 + 46424);
    xsi_vlogvar_assign_value(t33, t7, 0, 0, 8);
    t34 = (t0 + 46584);
    xsi_vlogvar_assign_value(t34, t8, 0, 0, 12);
    t35 = (t0 + 46744);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 8);
    t36 = (t0 + 46904);
    xsi_vlogvar_assign_value(t36, t10, 0, 0, 8);
    t37 = (t0 + 47064);
    xsi_vlogvar_assign_value(t37, t11, 0, 0, 5);
    t38 = (t0 + 47224);
    xsi_vlogvar_assign_value(t38, t12, 0, 0, 5);
    t39 = (t0 + 47384);
    xsi_vlogvar_assign_value(t39, t13, 0, 0, 8);
    t40 = (t0 + 47544);
    xsi_vlogvar_assign_value(t40, t14, 0, 0, 8);
    t41 = (t0 + 47704);
    xsi_vlogvar_assign_value(t41, t15, 0, 0, 8);
    t42 = (t0 + 47864);
    xsi_vlogvar_assign_value(t42, t16, 0, 0, 7);
    t43 = (t0 + 48024);
    xsi_vlogvar_assign_value(t43, t18, 0, 0, 32);
    t44 = (t0 + 48184);
    xsi_vlogvar_assign_value(t44, t21, 0, 0, 32);
    t45 = (t0 + 48344);
    xsi_vlogvar_assign_value(t45, t24, 0, 0, 32);
    t46 = (t0 + 48504);
    xsi_vlogvar_assign_value(t46, t27, 0, 0, 32);

LAB139:    t47 = (t0 + 54032);
    t48 = *((char **)t47);
    t49 = (t48 + 80U);
    t50 = *((char **)t49);
    t51 = (t50 + 272U);
    t52 = *((char **)t51);
    t53 = (t52 + 0U);
    t54 = *((char **)t53);
    t6 = ((int  (*)(char *, char *))t54)(t0, t48);
    if (t6 != 0)
        goto LAB141;

LAB140:    t48 = (t0 + 54032);
    t55 = *((char **)t48);
    t48 = (t0 + 45944);
    t56 = (t48 + 56U);
    t57 = *((char **)t56);
    memcpy(t58, t57, 8);
    t59 = (t0 + 6032);
    t60 = (t0 + 53936);
    t61 = 0;
    xsi_delete_subprogram_invocation(t59, t55, t0, t60, t61);
    t62 = (t0 + 10104);
    xsi_vlogvar_assign_value(t62, t58, 0, 0, 1);
    goto LAB41;

LAB27:    xsi_set_current_line(241, ng75);

LAB142:    xsi_set_current_line(243, ng75);
    t3 = ((char*)((ng78)));
    t4 = (t0 + 11704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(244, ng75);
    t2 = ((char*)((ng81)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(245, ng75);
    t2 = ((char*)((ng82)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(246, ng75);
    t2 = (t0 + 10584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 10424);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t58, 0, 8);
    xsi_vlog_signed_minus(t58, 32, t4, 32, t9, 32);
    t10 = (t0 + 12184);
    xsi_vlogvar_assign_value(t10, t58, 0, 0, 32);
    xsi_set_current_line(248, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 11704);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 11864);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 12024);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 12184);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 53936);
    t29 = (t0 + 3872);
    t30 = xsi_create_subprogram_invocation(t28, 0, t0, t29, 0, 0);
    t31 = (t0 + 31544);
    xsi_vlogvar_assign_value(t31, t3, 0, 0, 3);
    t32 = (t0 + 31704);
    xsi_vlogvar_assign_value(t32, t4, 0, 0, 15);
    t33 = (t0 + 31864);
    xsi_vlogvar_assign_value(t33, t7, 0, 0, 8);
    t34 = (t0 + 32024);
    xsi_vlogvar_assign_value(t34, t8, 0, 0, 12);
    t35 = (t0 + 32184);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 8);
    t36 = (t0 + 32344);
    xsi_vlogvar_assign_value(t36, t10, 0, 0, 8);
    t37 = (t0 + 32504);
    xsi_vlogvar_assign_value(t37, t11, 0, 0, 5);
    t38 = (t0 + 32664);
    xsi_vlogvar_assign_value(t38, t12, 0, 0, 5);
    t39 = (t0 + 32824);
    xsi_vlogvar_assign_value(t39, t13, 0, 0, 8);
    t40 = (t0 + 32984);
    xsi_vlogvar_assign_value(t40, t14, 0, 0, 8);
    t41 = (t0 + 33144);
    xsi_vlogvar_assign_value(t41, t15, 0, 0, 8);
    t42 = (t0 + 33304);
    xsi_vlogvar_assign_value(t42, t16, 0, 0, 7);
    t43 = (t0 + 33464);
    xsi_vlogvar_assign_value(t43, t18, 0, 0, 32);
    t44 = (t0 + 33624);
    xsi_vlogvar_assign_value(t44, t21, 0, 0, 32);
    t45 = (t0 + 33784);
    xsi_vlogvar_assign_value(t45, t24, 0, 0, 32);
    t46 = (t0 + 33944);
    xsi_vlogvar_assign_value(t46, t27, 0, 0, 32);

LAB143:    t47 = (t0 + 54032);
    t48 = *((char **)t47);
    t49 = (t48 + 80U);
    t50 = *((char **)t49);
    t51 = (t50 + 272U);
    t52 = *((char **)t51);
    t53 = (t52 + 0U);
    t54 = *((char **)t53);
    t6 = ((int  (*)(char *, char *))t54)(t0, t48);
    if (t6 != 0)
        goto LAB145;

LAB144:    t48 = (t0 + 54032);
    t55 = *((char **)t48);
    t48 = (t0 + 31384);
    t56 = (t48 + 56U);
    t57 = *((char **)t56);
    memcpy(t58, t57, 8);
    t59 = (t0 + 3872);
    t60 = (t0 + 53936);
    t61 = 0;
    xsi_delete_subprogram_invocation(t59, t55, t0, t60, t61);
    t62 = (t0 + 10104);
    xsi_vlogvar_assign_value(t62, t58, 0, 0, 1);
    xsi_set_current_line(253, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB149;

LAB146:    if (t72 != 0)
        goto LAB148;

LAB147:    *((unsigned int *)t58) = 1;

LAB149:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB150;

LAB151:
LAB152:    goto LAB41;

LAB29:    xsi_set_current_line(259, ng75);

LAB154:    xsi_set_current_line(261, ng75);
    t3 = ((char*)((ng78)));
    t4 = (t0 + 11704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(262, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(263, ng75);
    t2 = ((char*)((ng82)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(264, ng75);
    t2 = (t0 + 10584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 12184);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    xsi_set_current_line(265, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 11704);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 11864);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 12024);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 12184);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 53936);
    t29 = (t0 + 6032);
    t30 = xsi_create_subprogram_invocation(t28, 0, t0, t29, 0, 0);
    t31 = (t0 + 46104);
    xsi_vlogvar_assign_value(t31, t3, 0, 0, 3);
    t32 = (t0 + 46264);
    xsi_vlogvar_assign_value(t32, t4, 0, 0, 15);
    t33 = (t0 + 46424);
    xsi_vlogvar_assign_value(t33, t7, 0, 0, 8);
    t34 = (t0 + 46584);
    xsi_vlogvar_assign_value(t34, t8, 0, 0, 12);
    t35 = (t0 + 46744);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 8);
    t36 = (t0 + 46904);
    xsi_vlogvar_assign_value(t36, t10, 0, 0, 8);
    t37 = (t0 + 47064);
    xsi_vlogvar_assign_value(t37, t11, 0, 0, 5);
    t38 = (t0 + 47224);
    xsi_vlogvar_assign_value(t38, t12, 0, 0, 5);
    t39 = (t0 + 47384);
    xsi_vlogvar_assign_value(t39, t13, 0, 0, 8);
    t40 = (t0 + 47544);
    xsi_vlogvar_assign_value(t40, t14, 0, 0, 8);
    t41 = (t0 + 47704);
    xsi_vlogvar_assign_value(t41, t15, 0, 0, 8);
    t42 = (t0 + 47864);
    xsi_vlogvar_assign_value(t42, t16, 0, 0, 7);
    t43 = (t0 + 48024);
    xsi_vlogvar_assign_value(t43, t18, 0, 0, 32);
    t44 = (t0 + 48184);
    xsi_vlogvar_assign_value(t44, t21, 0, 0, 32);
    t45 = (t0 + 48344);
    xsi_vlogvar_assign_value(t45, t24, 0, 0, 32);
    t46 = (t0 + 48504);
    xsi_vlogvar_assign_value(t46, t27, 0, 0, 32);

LAB155:    t47 = (t0 + 54032);
    t48 = *((char **)t47);
    t49 = (t48 + 80U);
    t50 = *((char **)t49);
    t51 = (t50 + 272U);
    t52 = *((char **)t51);
    t53 = (t52 + 0U);
    t54 = *((char **)t53);
    t6 = ((int  (*)(char *, char *))t54)(t0, t48);
    if (t6 != 0)
        goto LAB157;

LAB156:    t48 = (t0 + 54032);
    t55 = *((char **)t48);
    t48 = (t0 + 45944);
    t56 = (t48 + 56U);
    t57 = *((char **)t56);
    memcpy(t58, t57, 8);
    t59 = (t0 + 6032);
    t60 = (t0 + 53936);
    t61 = 0;
    xsi_delete_subprogram_invocation(t59, t55, t0, t60, t61);
    t62 = (t0 + 10104);
    xsi_vlogvar_assign_value(t62, t58, 0, 0, 1);
    goto LAB41;

LAB31:    xsi_set_current_line(273, ng75);

LAB158:    xsi_set_current_line(275, ng75);
    t3 = (t0 + 11544);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 11704);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(276, ng75);
    t2 = ((char*)((ng81)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(277, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(278, ng75);
    t2 = (t0 + 10424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 12184);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    xsi_set_current_line(279, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 9704U);
    t17 = *((char **)t2);
    t2 = (t0 + 11704);
    t18 = (t2 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 11864);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 12024);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 12184);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 11544);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 53936);
    t33 = (t0 + 4736);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 37304);
    xsi_vlogvar_assign_value(t35, t3, 0, 0, 3);
    t36 = (t0 + 37464);
    xsi_vlogvar_assign_value(t36, t4, 0, 0, 15);
    t37 = (t0 + 37624);
    xsi_vlogvar_assign_value(t37, t7, 0, 0, 8);
    t38 = (t0 + 37784);
    xsi_vlogvar_assign_value(t38, t8, 0, 0, 12);
    t39 = (t0 + 37944);
    xsi_vlogvar_assign_value(t39, t9, 0, 0, 8);
    t40 = (t0 + 38104);
    xsi_vlogvar_assign_value(t40, t10, 0, 0, 8);
    t41 = (t0 + 38264);
    xsi_vlogvar_assign_value(t41, t11, 0, 0, 5);
    t42 = (t0 + 38424);
    xsi_vlogvar_assign_value(t42, t12, 0, 0, 5);
    t43 = (t0 + 38584);
    xsi_vlogvar_assign_value(t43, t13, 0, 0, 8);
    t44 = (t0 + 38744);
    xsi_vlogvar_assign_value(t44, t14, 0, 0, 8);
    t45 = (t0 + 38904);
    xsi_vlogvar_assign_value(t45, t15, 0, 0, 8);
    t46 = (t0 + 39064);
    xsi_vlogvar_assign_value(t46, t16, 0, 0, 7);
    t47 = (t0 + 39224);
    xsi_vlogvar_assign_value(t47, t17, 0, 0, 8);
    t48 = (t0 + 39384);
    xsi_vlogvar_assign_value(t48, t19, 0, 0, 32);
    t49 = (t0 + 39544);
    xsi_vlogvar_assign_value(t49, t22, 0, 0, 32);
    t50 = (t0 + 39704);
    xsi_vlogvar_assign_value(t50, t25, 0, 0, 32);
    t51 = (t0 + 39864);
    xsi_vlogvar_assign_value(t51, t28, 0, 0, 32);
    t52 = (t0 + 40024);
    xsi_vlogvar_assign_value(t52, t31, 0, 0, 32);

LAB159:    t53 = (t0 + 54032);
    t54 = *((char **)t53);
    t55 = (t54 + 80U);
    t56 = *((char **)t55);
    t57 = (t56 + 272U);
    t59 = *((char **)t57);
    t60 = (t59 + 0U);
    t61 = *((char **)t60);
    t6 = ((int  (*)(char *, char *))t61)(t0, t54);
    if (t6 != 0)
        goto LAB161;

LAB160:    t54 = (t0 + 54032);
    t62 = *((char **)t54);
    t54 = (t0 + 37144);
    t80 = (t54 + 56U);
    t81 = *((char **)t80);
    memcpy(t58, t81, 8);
    t82 = (t0 + 4736);
    t83 = (t0 + 53936);
    t84 = 0;
    xsi_delete_subprogram_invocation(t82, t62, t0, t83, t84);
    t85 = (t0 + 10104);
    xsi_vlogvar_assign_value(t85, t58, 0, 0, 1);
    xsi_set_current_line(284, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB165;

LAB162:    if (t72 != 0)
        goto LAB164;

LAB163:    *((unsigned int *)t58) = 1;

LAB165:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB166;

LAB167:
LAB168:    goto LAB41;

LAB33:    xsi_set_current_line(291, ng75);

LAB172:    xsi_set_current_line(293, ng75);
    t3 = (t0 + 11544);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng1)));
    memset(t58, 0, 8);
    xsi_vlog_signed_add(t58, 32, t7, 32, t8, 32);
    t9 = (t0 + 11704);
    xsi_vlogvar_assign_value(t9, t58, 0, 0, 32);
    xsi_set_current_line(294, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(295, ng75);
    t2 = ((char*)((ng90)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(296, ng75);
    t2 = (t0 + 11384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 11384);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 11384);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 11544);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng1)));
    memset(t86, 0, 8);
    xsi_vlog_signed_add(t86, 32, t15, 32, t16, 32);
    xsi_vlog_generic_get_array_select_value(t58, 32, t4, t9, t12, 1, 1, t86, 32, 1);
    t17 = (t0 + 12184);
    xsi_vlogvar_assign_value(t17, t58, 0, 0, 32);
    xsi_set_current_line(297, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 9704U);
    t17 = *((char **)t2);
    t2 = (t0 + 11704);
    t18 = (t2 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 11864);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 12024);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 12184);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 11544);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 53936);
    t33 = (t0 + 4304);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 34264);
    xsi_vlogvar_assign_value(t35, t3, 0, 0, 3);
    t36 = (t0 + 34424);
    xsi_vlogvar_assign_value(t36, t4, 0, 0, 15);
    t37 = (t0 + 34584);
    xsi_vlogvar_assign_value(t37, t7, 0, 0, 8);
    t38 = (t0 + 34744);
    xsi_vlogvar_assign_value(t38, t8, 0, 0, 12);
    t39 = (t0 + 34904);
    xsi_vlogvar_assign_value(t39, t9, 0, 0, 8);
    t40 = (t0 + 35064);
    xsi_vlogvar_assign_value(t40, t10, 0, 0, 8);
    t41 = (t0 + 35224);
    xsi_vlogvar_assign_value(t41, t11, 0, 0, 5);
    t42 = (t0 + 35384);
    xsi_vlogvar_assign_value(t42, t12, 0, 0, 5);
    t43 = (t0 + 35544);
    xsi_vlogvar_assign_value(t43, t13, 0, 0, 8);
    t44 = (t0 + 35704);
    xsi_vlogvar_assign_value(t44, t14, 0, 0, 8);
    t45 = (t0 + 35864);
    xsi_vlogvar_assign_value(t45, t15, 0, 0, 8);
    t46 = (t0 + 36024);
    xsi_vlogvar_assign_value(t46, t16, 0, 0, 7);
    t47 = (t0 + 36184);
    xsi_vlogvar_assign_value(t47, t17, 0, 0, 8);
    t48 = (t0 + 36344);
    xsi_vlogvar_assign_value(t48, t19, 0, 0, 32);
    t49 = (t0 + 36504);
    xsi_vlogvar_assign_value(t49, t22, 0, 0, 32);
    t50 = (t0 + 36664);
    xsi_vlogvar_assign_value(t50, t25, 0, 0, 32);
    t51 = (t0 + 36824);
    xsi_vlogvar_assign_value(t51, t28, 0, 0, 32);
    t52 = (t0 + 36984);
    xsi_vlogvar_assign_value(t52, t31, 0, 0, 32);

LAB173:    t53 = (t0 + 54032);
    t54 = *((char **)t53);
    t55 = (t54 + 80U);
    t56 = *((char **)t55);
    t57 = (t56 + 272U);
    t59 = *((char **)t57);
    t60 = (t59 + 0U);
    t61 = *((char **)t60);
    t6 = ((int  (*)(char *, char *))t61)(t0, t54);
    if (t6 != 0)
        goto LAB175;

LAB174:    t54 = (t0 + 54032);
    t62 = *((char **)t54);
    t54 = (t0 + 34104);
    t80 = (t54 + 56U);
    t81 = *((char **)t80);
    memcpy(t58, t81, 8);
    t82 = (t0 + 4304);
    t83 = (t0 + 53936);
    t84 = 0;
    xsi_delete_subprogram_invocation(t82, t62, t0, t83, t84);
    t85 = (t0 + 10104);
    xsi_vlogvar_assign_value(t85, t58, 0, 0, 1);
    xsi_set_current_line(302, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB179;

LAB176:    if (t72 != 0)
        goto LAB178;

LAB177:    *((unsigned int *)t58) = 1;

LAB179:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB180;

LAB181:
LAB182:    xsi_set_current_line(305, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB187;

LAB184:    if (t72 != 0)
        goto LAB186;

LAB185:    *((unsigned int *)t58) = 1;

LAB187:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB188;

LAB189:
LAB190:    goto LAB41;

LAB35:    xsi_set_current_line(311, ng75);

LAB192:    xsi_set_current_line(313, ng75);
    t3 = (t0 + 11544);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng1)));
    memset(t58, 0, 8);
    xsi_vlog_signed_add(t58, 32, t7, 32, t8, 32);
    t9 = (t0 + 11704);
    xsi_vlogvar_assign_value(t9, t58, 0, 0, 32);
    xsi_set_current_line(314, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(315, ng75);
    t2 = ((char*)((ng92)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(316, ng75);
    t2 = (t0 + 11384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 11384);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 11384);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 11544);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng1)));
    memset(t86, 0, 8);
    xsi_vlog_signed_add(t86, 32, t15, 32, t16, 32);
    xsi_vlog_generic_get_array_select_value(t58, 32, t4, t9, t12, 1, 1, t86, 32, 1);
    t17 = (t0 + 12184);
    xsi_vlogvar_assign_value(t17, t58, 0, 0, 32);
    xsi_set_current_line(317, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 9704U);
    t17 = *((char **)t2);
    t2 = (t0 + 11704);
    t18 = (t2 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 11864);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 12024);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 12184);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 11544);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 53936);
    t33 = (t0 + 4304);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 34264);
    xsi_vlogvar_assign_value(t35, t3, 0, 0, 3);
    t36 = (t0 + 34424);
    xsi_vlogvar_assign_value(t36, t4, 0, 0, 15);
    t37 = (t0 + 34584);
    xsi_vlogvar_assign_value(t37, t7, 0, 0, 8);
    t38 = (t0 + 34744);
    xsi_vlogvar_assign_value(t38, t8, 0, 0, 12);
    t39 = (t0 + 34904);
    xsi_vlogvar_assign_value(t39, t9, 0, 0, 8);
    t40 = (t0 + 35064);
    xsi_vlogvar_assign_value(t40, t10, 0, 0, 8);
    t41 = (t0 + 35224);
    xsi_vlogvar_assign_value(t41, t11, 0, 0, 5);
    t42 = (t0 + 35384);
    xsi_vlogvar_assign_value(t42, t12, 0, 0, 5);
    t43 = (t0 + 35544);
    xsi_vlogvar_assign_value(t43, t13, 0, 0, 8);
    t44 = (t0 + 35704);
    xsi_vlogvar_assign_value(t44, t14, 0, 0, 8);
    t45 = (t0 + 35864);
    xsi_vlogvar_assign_value(t45, t15, 0, 0, 8);
    t46 = (t0 + 36024);
    xsi_vlogvar_assign_value(t46, t16, 0, 0, 7);
    t47 = (t0 + 36184);
    xsi_vlogvar_assign_value(t47, t17, 0, 0, 8);
    t48 = (t0 + 36344);
    xsi_vlogvar_assign_value(t48, t19, 0, 0, 32);
    t49 = (t0 + 36504);
    xsi_vlogvar_assign_value(t49, t22, 0, 0, 32);
    t50 = (t0 + 36664);
    xsi_vlogvar_assign_value(t50, t25, 0, 0, 32);
    t51 = (t0 + 36824);
    xsi_vlogvar_assign_value(t51, t28, 0, 0, 32);
    t52 = (t0 + 36984);
    xsi_vlogvar_assign_value(t52, t31, 0, 0, 32);

LAB193:    t53 = (t0 + 54032);
    t54 = *((char **)t53);
    t55 = (t54 + 80U);
    t56 = *((char **)t55);
    t57 = (t56 + 272U);
    t59 = *((char **)t57);
    t60 = (t59 + 0U);
    t61 = *((char **)t60);
    t6 = ((int  (*)(char *, char *))t61)(t0, t54);
    if (t6 != 0)
        goto LAB195;

LAB194:    t54 = (t0 + 54032);
    t62 = *((char **)t54);
    t54 = (t0 + 34104);
    t80 = (t54 + 56U);
    t81 = *((char **)t80);
    memcpy(t58, t81, 8);
    t82 = (t0 + 4304);
    t83 = (t0 + 53936);
    t84 = 0;
    xsi_delete_subprogram_invocation(t82, t62, t0, t83, t84);
    t85 = (t0 + 10104);
    xsi_vlogvar_assign_value(t85, t58, 0, 0, 1);
    xsi_set_current_line(322, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB199;

LAB196:    if (t72 != 0)
        goto LAB198;

LAB197:    *((unsigned int *)t58) = 1;

LAB199:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB200;

LAB201:
LAB202:    xsi_set_current_line(325, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB207;

LAB204:    if (t72 != 0)
        goto LAB206;

LAB205:    *((unsigned int *)t58) = 1;

LAB207:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB208;

LAB209:
LAB210:    goto LAB41;

LAB37:    xsi_set_current_line(331, ng75);

LAB212:    xsi_set_current_line(333, ng75);
    t3 = (t0 + 11544);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng1)));
    memset(t58, 0, 8);
    xsi_vlog_signed_add(t58, 32, t7, 32, t8, 32);
    t9 = (t0 + 11704);
    xsi_vlogvar_assign_value(t9, t58, 0, 0, 32);
    xsi_set_current_line(334, ng75);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 11864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(335, ng75);
    t2 = ((char*)((ng93)));
    t3 = (t0 + 12024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(336, ng75);
    t2 = (t0 + 11384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 11384);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 11384);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 11544);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng1)));
    memset(t86, 0, 8);
    xsi_vlog_signed_add(t86, 32, t15, 32, t16, 32);
    xsi_vlog_generic_get_array_select_value(t58, 32, t4, t9, t12, 1, 1, t86, 32, 1);
    t17 = (t0 + 12184);
    xsi_vlogvar_assign_value(t17, t58, 0, 0, 32);
    xsi_set_current_line(337, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = (t0 + 9064U);
    t4 = *((char **)t2);
    t2 = (t0 + 8904U);
    t7 = *((char **)t2);
    t2 = (t0 + 8744U);
    t8 = *((char **)t2);
    t2 = (t0 + 9384U);
    t9 = *((char **)t2);
    t2 = (t0 + 9544U);
    t10 = *((char **)t2);
    t2 = (t0 + 7784U);
    t11 = *((char **)t2);
    t2 = (t0 + 7944U);
    t12 = *((char **)t2);
    t2 = (t0 + 7304U);
    t13 = *((char **)t2);
    t2 = (t0 + 7464U);
    t14 = *((char **)t2);
    t2 = (t0 + 7624U);
    t15 = *((char **)t2);
    t2 = (t0 + 8264U);
    t16 = *((char **)t2);
    t2 = (t0 + 9704U);
    t17 = *((char **)t2);
    t2 = (t0 + 11704);
    t18 = (t2 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 11864);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 12024);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 12184);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t0 + 11544);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 53936);
    t33 = (t0 + 4304);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 34264);
    xsi_vlogvar_assign_value(t35, t3, 0, 0, 3);
    t36 = (t0 + 34424);
    xsi_vlogvar_assign_value(t36, t4, 0, 0, 15);
    t37 = (t0 + 34584);
    xsi_vlogvar_assign_value(t37, t7, 0, 0, 8);
    t38 = (t0 + 34744);
    xsi_vlogvar_assign_value(t38, t8, 0, 0, 12);
    t39 = (t0 + 34904);
    xsi_vlogvar_assign_value(t39, t9, 0, 0, 8);
    t40 = (t0 + 35064);
    xsi_vlogvar_assign_value(t40, t10, 0, 0, 8);
    t41 = (t0 + 35224);
    xsi_vlogvar_assign_value(t41, t11, 0, 0, 5);
    t42 = (t0 + 35384);
    xsi_vlogvar_assign_value(t42, t12, 0, 0, 5);
    t43 = (t0 + 35544);
    xsi_vlogvar_assign_value(t43, t13, 0, 0, 8);
    t44 = (t0 + 35704);
    xsi_vlogvar_assign_value(t44, t14, 0, 0, 8);
    t45 = (t0 + 35864);
    xsi_vlogvar_assign_value(t45, t15, 0, 0, 8);
    t46 = (t0 + 36024);
    xsi_vlogvar_assign_value(t46, t16, 0, 0, 7);
    t47 = (t0 + 36184);
    xsi_vlogvar_assign_value(t47, t17, 0, 0, 8);
    t48 = (t0 + 36344);
    xsi_vlogvar_assign_value(t48, t19, 0, 0, 32);
    t49 = (t0 + 36504);
    xsi_vlogvar_assign_value(t49, t22, 0, 0, 32);
    t50 = (t0 + 36664);
    xsi_vlogvar_assign_value(t50, t25, 0, 0, 32);
    t51 = (t0 + 36824);
    xsi_vlogvar_assign_value(t51, t28, 0, 0, 32);
    t52 = (t0 + 36984);
    xsi_vlogvar_assign_value(t52, t31, 0, 0, 32);

LAB213:    t53 = (t0 + 54032);
    t54 = *((char **)t53);
    t55 = (t54 + 80U);
    t56 = *((char **)t55);
    t57 = (t56 + 272U);
    t59 = *((char **)t57);
    t60 = (t59 + 0U);
    t61 = *((char **)t60);
    t6 = ((int  (*)(char *, char *))t61)(t0, t54);
    if (t6 != 0)
        goto LAB215;

LAB214:    t54 = (t0 + 54032);
    t62 = *((char **)t54);
    t54 = (t0 + 34104);
    t80 = (t54 + 56U);
    t81 = *((char **)t80);
    memcpy(t58, t81, 8);
    t82 = (t0 + 4304);
    t83 = (t0 + 53936);
    t84 = 0;
    xsi_delete_subprogram_invocation(t82, t62, t0, t83, t84);
    t85 = (t0 + 10104);
    xsi_vlogvar_assign_value(t85, t58, 0, 0, 1);
    xsi_set_current_line(342, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB219;

LAB216:    if (t72 != 0)
        goto LAB218;

LAB217:    *((unsigned int *)t58) = 1;

LAB219:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB220;

LAB221:
LAB222:    xsi_set_current_line(345, ng75);
    t2 = (t0 + 7144U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t58, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t2);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t7);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t7);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB227;

LAB224:    if (t72 != 0)
        goto LAB226;

LAB225:    *((unsigned int *)t58) = 1;

LAB227:    t9 = (t58 + 4);
    t75 = *((unsigned int *)t9);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB228;

LAB229:
LAB230:    goto LAB41;

LAB45:    t47 = (t0 + 54128U);
    *((char **)t47) = &&LAB43;
    goto LAB1;

LAB48:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(87, ng75);

LAB53:    xsi_set_current_line(88, ng75);
    t10 = (t0 + 12184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 10424);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB52;

LAB57:    t47 = (t0 + 54128U);
    *((char **)t47) = &&LAB55;
    goto LAB1;

LAB60:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(104, ng75);

LAB65:    xsi_set_current_line(105, ng75);
    t10 = (t0 + 12184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 10584);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB64;

LAB69:    t53 = (t0 + 54128U);
    *((char **)t53) = &&LAB67;
    goto LAB1;

LAB72:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(121, ng75);

LAB77:    xsi_set_current_line(122, ng75);
    t10 = (t0 + 12184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 11384);
    t14 = (t0 + 11384);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 11384);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 11544);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t86, t87, t16, t19, 1, 1, t22, 32, 1);
    t23 = (t86 + 4);
    t88 = *((unsigned int *)t23);
    t6 = (!(t88));
    t24 = (t87 + 4);
    t89 = *((unsigned int *)t24);
    t90 = (!(t89));
    t91 = (t6 && t90);
    if (t91 == 1)
        goto LAB78;

LAB79:    xsi_set_current_line(123, ng75);
    t2 = (t0 + 11544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t58, 0, 8);
    xsi_vlog_signed_minus(t58, 32, t4, 32, t7, 32);
    t8 = (t0 + 11544);
    xsi_vlogvar_assign_value(t8, t58, 0, 0, 32);
    goto LAB76;

LAB78:    t92 = *((unsigned int *)t86);
    t93 = *((unsigned int *)t87);
    t94 = (t92 - t93);
    t95 = (t94 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t87), t95);
    goto LAB79;

LAB83:    t53 = (t0 + 54128U);
    *((char **)t53) = &&LAB81;
    goto LAB1;

LAB86:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(139, ng75);

LAB91:    xsi_set_current_line(140, ng75);
    t10 = (t0 + 12184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 11384);
    t14 = (t0 + 11384);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 11384);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 11544);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t86, t87, t16, t19, 1, 1, t22, 32, 1);
    t23 = (t86 + 4);
    t88 = *((unsigned int *)t23);
    t6 = (!(t88));
    t24 = (t87 + 4);
    t89 = *((unsigned int *)t24);
    t90 = (!(t89));
    t91 = (t6 && t90);
    if (t91 == 1)
        goto LAB92;

LAB93:    xsi_set_current_line(141, ng75);
    t2 = (t0 + 11544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t58, 0, 8);
    xsi_vlog_signed_minus(t58, 32, t4, 32, t7, 32);
    t8 = (t0 + 11544);
    xsi_vlogvar_assign_value(t8, t58, 0, 0, 32);
    goto LAB90;

LAB92:    t92 = *((unsigned int *)t86);
    t93 = *((unsigned int *)t87);
    t94 = (t92 - t93);
    t95 = (t94 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t87), t95);
    goto LAB93;

LAB97:    t47 = (t0 + 54128U);
    *((char **)t47) = &&LAB95;
    goto LAB1;

LAB100:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(157, ng75);

LAB105:    xsi_set_current_line(158, ng75);
    t10 = (t0 + 12184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 11224);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB104;

LAB109:    t47 = (t0 + 54128U);
    *((char **)t47) = &&LAB107;
    goto LAB1;

LAB112:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(175, ng75);

LAB117:    xsi_set_current_line(176, ng75);
    t10 = (t0 + 12184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 11224);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB116;

LAB121:    t49 = (t0 + 54128U);
    *((char **)t49) = &&LAB119;
    goto LAB1;

LAB125:    t49 = (t0 + 54128U);
    *((char **)t49) = &&LAB123;
    goto LAB1;

LAB129:    t47 = (t0 + 54128U);
    *((char **)t47) = &&LAB127;
    goto LAB1;

LAB132:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB133;

LAB134:    xsi_set_current_line(221, ng75);

LAB137:    xsi_set_current_line(222, ng75);
    t10 = (t0 + 12184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 10424);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB136;

LAB141:    t47 = (t0 + 54128U);
    *((char **)t47) = &&LAB139;
    goto LAB1;

LAB145:    t47 = (t0 + 54128U);
    *((char **)t47) = &&LAB143;
    goto LAB1;

LAB148:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB149;

LAB150:    xsi_set_current_line(253, ng75);

LAB153:    xsi_set_current_line(254, ng75);
    t10 = (t0 + 12184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 10584);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB152;

LAB157:    t47 = (t0 + 54128U);
    *((char **)t47) = &&LAB155;
    goto LAB1;

LAB161:    t53 = (t0 + 54128U);
    *((char **)t53) = &&LAB159;
    goto LAB1;

LAB164:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB165;

LAB166:    xsi_set_current_line(284, ng75);

LAB169:    xsi_set_current_line(285, ng75);
    t10 = (t0 + 12184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 11384);
    t14 = (t0 + 11384);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 11384);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 11544);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t86, t87, t16, t19, 1, 1, t22, 32, 1);
    t23 = (t86 + 4);
    t88 = *((unsigned int *)t23);
    t6 = (!(t88));
    t24 = (t87 + 4);
    t89 = *((unsigned int *)t24);
    t90 = (!(t89));
    t91 = (t6 && t90);
    if (t91 == 1)
        goto LAB170;

LAB171:    xsi_set_current_line(286, ng75);
    t2 = (t0 + 11544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t58, 0, 8);
    xsi_vlog_signed_minus(t58, 32, t4, 32, t7, 32);
    t8 = (t0 + 11544);
    xsi_vlogvar_assign_value(t8, t58, 0, 0, 32);
    goto LAB168;

LAB170:    t92 = *((unsigned int *)t86);
    t93 = *((unsigned int *)t87);
    t94 = (t92 - t93);
    t95 = (t94 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t87), t95);
    goto LAB171;

LAB175:    t53 = (t0 + 54128U);
    *((char **)t53) = &&LAB173;
    goto LAB1;

LAB178:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB179;

LAB180:    xsi_set_current_line(302, ng75);

LAB183:    xsi_set_current_line(303, ng75);
    t10 = (t0 + 11544);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    memset(t86, 0, 8);
    xsi_vlog_signed_add(t86, 32, t12, 32, t13, 32);
    t14 = (t0 + 11544);
    xsi_vlogvar_assign_value(t14, t86, 0, 0, 32);
    goto LAB182;

LAB186:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB187;

LAB188:    xsi_set_current_line(305, ng75);

LAB191:    xsi_set_current_line(306, ng75);
    t10 = (t0 + 12184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 11064);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB190;

LAB195:    t53 = (t0 + 54128U);
    *((char **)t53) = &&LAB193;
    goto LAB1;

LAB198:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB199;

LAB200:    xsi_set_current_line(322, ng75);

LAB203:    xsi_set_current_line(323, ng75);
    t10 = (t0 + 11544);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    memset(t86, 0, 8);
    xsi_vlog_signed_add(t86, 32, t12, 32, t13, 32);
    t14 = (t0 + 11544);
    xsi_vlogvar_assign_value(t14, t86, 0, 0, 32);
    goto LAB202;

LAB206:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB207;

LAB208:    xsi_set_current_line(325, ng75);

LAB211:    xsi_set_current_line(326, ng75);
    t10 = (t0 + 12184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 10904);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB210;

LAB215:    t53 = (t0 + 54128U);
    *((char **)t53) = &&LAB213;
    goto LAB1;

LAB218:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB219;

LAB220:    xsi_set_current_line(342, ng75);

LAB223:    xsi_set_current_line(343, ng75);
    t10 = (t0 + 11544);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    memset(t86, 0, 8);
    xsi_vlog_signed_add(t86, 32, t12, 32, t13, 32);
    t14 = (t0 + 11544);
    xsi_vlogvar_assign_value(t14, t86, 0, 0, 32);
    goto LAB222;

LAB226:    t8 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB227;

LAB228:    xsi_set_current_line(345, ng75);

LAB231:    xsi_set_current_line(346, ng75);
    t10 = (t0 + 12184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 10744);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB230;

}


extern void work_m_04858756158748446335_2524751178_init()
{
	static char *pe[] = {(void *)Cont_23_0,(void *)Cont_24_1,(void *)NetDecl_26_2,(void *)NetDecl_27_3,(void *)NetDecl_28_4,(void *)NetDecl_30_5,(void *)NetDecl_31_6,(void *)NetDecl_32_7,(void *)NetDecl_33_8,(void *)NetDecl_34_9,(void *)NetDecl_36_10,(void *)NetDecl_38_11,(void *)NetDecl_39_12,(void *)NetDecl_40_13,(void *)NetDecl_41_14,(void *)NetDecl_42_15,(void *)NetDecl_43_16,(void *)NetDecl_44_17,(void *)Initial_60_18,(void *)Always_74_19};
	static char *se[] = {(void *)sp_TEST_XXX,(void *)sp_TEST_LDI,(void *)sp_TEST_LDS,(void *)sp_TEST_STS,(void *)sp_TEST_LD,(void *)sp_TEST_MOV,(void *)sp_TEST_ADD,(void *)sp_TEST_SUB,(void *)sp_TEST_POP,(void *)sp_TEST_PUSH,(void *)sp_TEST_BRBS,(void *)sp_TEST_BRBC,(void *)sp_TEST_RJMP};
	xsi_register_didat("work_m_04858756158748446335_2524751178", "isim/unitTestCpu_isim_beh.exe.sim/work/m_04858756158748446335_2524751178.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

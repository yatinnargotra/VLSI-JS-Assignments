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
static const char *ng0 = "D:/BE42359/MOD_N_COUNTER/MOD_N_COUNTER.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_1887810462_3212880686_p_0(char *t0)
{
    char t13[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 1472U);
    t3 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 3560);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t5 = t1;
    memset(t5, (unsigned char)2, 5U);
    t6 = (t0 + 3656);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(48, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t5 = t1;
    memset(t5, (unsigned char)3, 5U);
    t6 = (t0 + 3656);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB7:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5568U);
    t3 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t2, t1, 7);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 5606);
    t5 = (t0 + 3656);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);

LAB18:
LAB10:    goto LAB3;

LAB9:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t2 = (t0 + 5568U);
    t12 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t6, t2, 24);
    if (t12 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 5601);
    t5 = (t0 + 3656);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);

LAB13:    goto LAB10;

LAB12:    xsi_set_current_line(52, ng0);
    t7 = (t0 + 1832U);
    t8 = *((char **)t7);
    t7 = (t0 + 5568U);
    t9 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t8, t7, 1);
    t10 = (t13 + 12U);
    t14 = *((unsigned int *)t10);
    t15 = (1U * t14);
    t16 = (5U != t15);
    if (t16 == 1)
        goto LAB15;

LAB16:    t17 = (t0 + 3656);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 5U);
    xsi_driver_first_trans_fast(t17);
    goto LAB13;

LAB15:    xsi_size_not_matching(5U, t15, 0);
    goto LAB16;

LAB17:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t5 = (t0 + 5568U);
    t7 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t13, t6, t5, 1);
    t8 = (t13 + 12U);
    t14 = *((unsigned int *)t8);
    t15 = (1U * t14);
    t4 = (5U != t15);
    if (t4 == 1)
        goto LAB20;

LAB21:    t9 = (t0 + 3656);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 5U);
    xsi_driver_first_trans_fast(t9);
    goto LAB18;

LAB20:    xsi_size_not_matching(5U, t15, 0);
    goto LAB21;

}

static void work_a_1887810462_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(65, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 3720);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3576);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1887810462_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1887810462_3212880686_p_0,(void *)work_a_1887810462_3212880686_p_1};
	xsi_register_didat("work_a_1887810462_3212880686", "isim/modNcounterTB_isim_beh.exe.sim/work/a_1887810462_3212880686.didat");
	xsi_register_executes(pe);
}

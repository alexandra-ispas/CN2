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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_05837435898402394808_0457016286_init();
    work_m_01469768745708863870_0266380040_init();
    work_m_16916527834843792235_0782664348_init();
    work_m_05274668823053730225_1262452598_init();
    work_m_10467465676061714548_3648169201_init();
    work_m_15015990445704735514_3052468000_init();
    work_m_03057999806845263529_0052631370_init();
    work_m_14825895199902896100_1696645267_init();
    work_m_07822024030161736352_3356059340_init();
    work_m_06558127173802137560_1835084805_init();
    work_m_16539632033081948516_1200043877_init();
    work_m_04858756158748446335_2524751178_init();
    work_m_02372454374292579495_0329307366_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_02372454374292579495_0329307366");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}

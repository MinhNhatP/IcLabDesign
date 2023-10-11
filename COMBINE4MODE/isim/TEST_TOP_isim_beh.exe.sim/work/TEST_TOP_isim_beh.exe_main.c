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
    work_m_10673958383904475558_3630433232_init();
    work_m_04788112495222607384_0400432237_init();
    work_m_04788112495222607384_3957347592_init();
    work_m_16654235563616607292_0000069476_init();
    work_m_17722031325934828306_3096238361_init();
    work_m_16030904005608381089_1970878987_init();
    work_m_03349252579589407866_3076666531_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_03349252579589407866_3076666531");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}

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
    work_m_00000000003689793958_3630433232_init();
    work_m_00000000000643452440_0400432237_init();
    work_m_00000000000643452440_3957347592_init();
    work_m_00000000003607862332_0000069476_init();
    work_m_00000000002024848146_3096238361_init();
    work_m_00000000004205615777_1970878987_init();
    work_m_00000000003715941498_3076666531_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003715941498_3076666531");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}


# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name COMBINE4MODE -dir "G:/HK7/IClab/W3/COMBINE4MODE/COMBINE4MODE/planAhead_run_1" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "TOP.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {MODE4_SANGDON.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {MODE3_LEDCHAY_TRAIPHAI.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {MODE2_LEDSANGDAN_TATDAN.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {MODE1_LEDCHOPTAT.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {DIV_CLK_4_MODE.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {TOP.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top TOP $srcset
add_files [list {TOP.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4

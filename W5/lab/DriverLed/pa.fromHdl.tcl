
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name DriverLed -dir "G:/HK7/IClab/W5/lab/DriverLed/planAhead_run_1" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Top.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {../../driver/TM1638.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../../driver/ClkDiv_781k.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Top.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Top $srcset
add_files [list {Top.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4

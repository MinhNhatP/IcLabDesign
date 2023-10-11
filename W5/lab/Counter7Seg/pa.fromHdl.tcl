
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Counter7Seg -dir "G:/HK7/IClab/W5/lab/Counter7Seg/planAhead_run_1" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "PhanMinhNhat.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {add3.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {TM1638.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {hex_bcd.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {counter.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {clock.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {TOP.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top PhanMinhNhat $srcset
add_files [list {PhanMinhNhat.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4


# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Divide4f -dir "G:/HK7/IClab/W3/lab/Divide4f/planAhead_run_1" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "divide4f.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {divide4f.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top DIVIDE_4F $srcset
add_files [list {divide4f.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4


# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name VERILOG_Register_Stack -dir "C:/VERILOG_Register_Stack/planAhead_run_2" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Top_Module_1.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Register_Stack_1.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Digital_Tube1.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Top_Module_1.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Top_Module_1 $srcset
add_files [list {Top_Module_1.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3

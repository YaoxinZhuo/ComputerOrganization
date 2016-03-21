
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name MultifunctionALU1 -dir "C:/MultifunctionALU1/planAhead_run_2" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "TopALU1test1.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {UniversalDigital1.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {top1.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {TopALU1.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {TopALU1test1.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top TopALU1test1 $srcset
add_files [list {TopALU1test1.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3

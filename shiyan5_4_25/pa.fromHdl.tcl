
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name shiyan5_4_25 -dir "C:/shiyan5_4_25/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "experiment5_storage_1_top.ucf" [current_fileset -constrset]
add_files [list {ipcore_dir/RAM_B.ngc}]
set hdlfile [add_files [list {ipcore_dir/RAM_B.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {shiyan5_test1.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top experiment5_storage_1_top $srcset
add_files [list {experiment5_storage_1_top.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3

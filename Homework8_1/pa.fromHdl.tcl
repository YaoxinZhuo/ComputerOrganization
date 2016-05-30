
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Homework8_1 -dir "C:/ComputerOrganazationHomework/Homework8_1/planAhead_run_3" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Expetiment8_1_DigitalOutput.ucf" [current_fileset -constrset]
add_files [list {ipcore_dir/Inst_Rom_8_1.ngc}]
set hdlfile [add_files [list {ipcore_dir/Inst_Rom_8_1.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {translateInstructAndFunction.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Register_8_1jicunqiDui.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {instruct_Register_8_1.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ALU_8_1fromExperiment3.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Integration_8_1.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Expetiment8_1_DigitalOutput.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Expetiment8_1_DigitalOutput $srcset
add_files [list {Expetiment8_1_DigitalOutput.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3

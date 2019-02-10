
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name hc_l3 -dir "E:/Repos/csdlabs/hc_l3/planAhead_run_2" -part xc6slx45csg484-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "constraintsLAB3.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {remote_sources/_/_/_/_/Repos/csdlabs/counter.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {remote_sources/_/_/_/_/Repos/csdlabs/prog_counter.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {remote_sources/_/_/_/_/Repos/csdlabs/binary_bcd.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {remote_sources/_/_/_/_/Repos/csdlabs/final_bcd_counter.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {remote_sources/_/_/_/_/Repos/csdlabs/lab_board.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top lab_board $srcset
add_files [list {constraintsLAB3.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx45csg484-3

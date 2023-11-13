# Ardupilot_IGE_APMI
Ardupilot autopilot with APMI code for adding IGE (In Ground-Effect) corrections.

This is the source code for experiment presented in: "Assessment and modeling of the aerodynamic ground effect of a fully-actuated hexarotor with tilted propellers".

The modified files are:
- Ardupilot_IGE_APMI/libraries/AP_Motors/AP_Motors_Class.h               (line 312) -> define the function get_correction_IGE(), which implements the APMI based on the aerodynamic models.
- ArduPilot_IGE/libraries/AP_Motors/AP_MotorsMatrix.cpp                  (line 230) -> applied the IGE correction to the thrust computed by the altitude controller, for the coplanar configuration.
- ArduPilot_IGE/libraries/AP_Motors/AP_MotorsMatrix_6DoF_Scripting.cpp   (line 128) -> applied the IGE correction to the thrust computed by the altitude controller, for the fully-actuated configuration.

Some parameters of the model can be modified from a Ground Control Station, like Mission Planner:
- ATC_EQ_IGE:  model to use in the APMI. Values = {0: Disabled, 1: Coplanar, 2: Fully-Actuated}. Default value: 1
- ATC_ALT_IGE: offset between the Z-origin of the Motion Capture system and the floor, in meters. Default: 0.2.
- ATC_R_IGE:   radius of the propellers, in meters. Default: 0.1194.
- ATC_C_IGE:   frame width, in meters. Default: 0.22.
- ATC_D_IGE:   propeller spacing, in meters. Default: 0.28.
- ATC_JK_IGE:  adjustment of Jk. Default: 2.2.



#pragma once

#include <math.h>
#include "string"
#include "frc/Filesystem.h"
#include "rev/ColorSensorV3.h"

using namespace std;

namespace GeneralConstants
{
    const double Kdt = 0.005; //0.005, 0.02
    const int MAX_RPM = 6380;
    const int TICKS_PER_ROTATION = 2048;

    const double FREE_SPEED = 6380;
    const double FREE_CURRENT = 1.5;
    const double STALL_CURRENT = 257;
    const double MAX_VOLTAGE = 12;

    const double RESISTANCE = MAX_VOLTAGE/STALL_CURRENT;
    const double Kv = ((FREE_SPEED * 2 * M_PI) / 60 ) / (MAX_VOLTAGE - FREE_CURRENT * RESISTANCE);

    const double GOAL_HEIGHT = 2.641;
    const double GOAL_RADIUS = 0.6096;

    const double HANGAR_X = -2.5;
    const double HANGAR_Y = -7;
    const double FIELD_WIDTH = 8.2296;
    const double FIELD_LENGTH = 16.4592;
    const double HUB_BASE_RADIUS = 0.5;

    const int MAX_BALL_COUNT = 1;

}

namespace LimelightConstants
{
    const double ANGLE_OFFSET = 34; //31.4
    const double HEIGHT_OFFSET = 0.9652; //0.533, 0.7874, 0.9144 raised, 0.9652 raised new mount
    const double TURRET_ANGLE_OFFSET = 4.75; //4.2 shot left
    const double TURRET_CENTER_RADIUS = 0.127;
    const double ROBOT_TURRET_CENTER_DISTANCE = 0.127;
    const double LIMELIGHT_TO_BALL_CENTER_DIST = -0.2032; //TODO get more precise, -0.1145, -0.2032?
}

namespace InputConstants
{
    const int LJOY_PORT = 0;
    const int LJOY_X = 0;
    const int LJOY_Y = 1;

    const int RJOY_PORT = 1;
    const int RJOY_X = 0;
    const int RJOY_Y = 1;

    const int XBOX_PORT = 2;
    const int XBOX_LJOY_X = 0;
    const int XBOX_LJOY_Y = 1;
    const int XBOX_LTRIGGER = 2;
    const int XBOX_RTRIGGER = 3;
    const int XBOX_RJOY_X = 4;
    const int XBOX_RJOY_Y = 5;

    const int OUTAKE_BUTTON = 3; //TODO get value
    
    const int AUTO_CLIMB_BUTTON = 1;
    const int AUTO_CLIMB_CANCEL = 2;
    const int CLIMB_PNEUMATIC2_BUTTON = 3;
    const int CLIMB_PNEUMATIC1_BUTTON = 4; 
    const int DISTANCE_DOWN_BUTTON = 5;
    const int DISTANCE_UP_BUTTON = 6; 
    const int CLIMB_MODE_TOGGLE_BUTTON = 7;
    const int FIELD_ORIENT_BUTTON = 8;

}

namespace OutputConstants
{
    const string odometryFile = frc::filesystem::GetDeployDirectory() + "/odometry.csv"; //"/home/lvuser/odometry.csv";
    const string hoodFile = "/home/lvuser/hood.csv";

    const string flywheelFile = "/home/lvuser/flywheel.csv";   
    //const string flywheelFile = frc::filesystem::GetDeployDirectory() + "/flywheel.csv";
    
    const string climbFile = frc::filesystem::GetDeployDirectory() + "/climb.csv";
    const string swerveModuleFile = frc::filesystem::GetDeployDirectory() + "/swerveModule.csv";
    const string turretFile = "/home/lvuser/turret.csv";
}

namespace SwerveConstants
{
    const double WIDTH = 29; //Change to 22 
    const double LENGTH = 29;
    const double WHEEL_DIAGONAL = 0.8128;
    const double TREAD_RADIUS = 0.0508; 
    const double DRIVE_GEAR_RATIO = 1/6.12; 

    //const double trPosAngle = atan2((SwerveConstants::WIDTH/2), (SwerveConstants::LENGTH/2));
    //const double tlPosAngle = -trPosAngle;
    //const double brPosAngle = 180 - trPosAngle;
    //const double blPosAngle = trPosAngle - 180;

    const int TR_DRIVE_ID = 13; //13, 3
    const int TL_DRIVE_ID = 11; //11, 1
    const int BR_DRIVE_ID = 18; //18, 4
    const int BL_DRIVE_ID = 15; //15, 22

    const int TR_TURN_ID = 14; //14, 5
    const int TL_TURN_ID = 12; //12, 7
    const int BR_TURN_ID = 17; //17, 10
    const int BL_TURN_ID = 16; //16, 19

    const int TR_CANCODER_ID = 62; //62, 2
    const int TL_CANCODER_ID = 10; //10, 9
    const int BR_CANCODER_ID = 8; //8, 8
    const int BL_CANCODER_ID = 42; //42, 6
    
    const double TR_CANCODER_OFFSET = 19.77; //19.77, 
    const double TL_CANCODER_OFFSET = 109.952; //109.952
    const double BR_CANCODER_OFFSET = 197.5; //197.5
    const double BL_CANCODER_OFFSET = -236; // 356.39, -184 + 90, -236.3 + 180, 

    const double MAX_LA = 3;
    const double MAX_LV = 4;
    const double MAX_AA = 270;
    const double MAX_AV = 450;

    const double klV = 0.489016;
    const double klVI = -0.32683;
    const double klA = 0;
    const double klP = 0.05;
    const double klD = 0;

    const double kaV = 34.2064;
    const double kaVI = -25.4095;
    const double kaA = 0;
    const double kaP = 0.008; //0.0075
    const double kaD = 0;

}

namespace IntakeConstants
{
    const int MOTOR_ID = 40;
    const int SOLENOID_ID = 0;
}

namespace ClimbConstants
{
    const int MASTER_ID = 30;
    const int SLAVE_ID = 31;
    const int PNEUMATIC_1_ID = 3;
    const int PNEUMATIC_2_ID = 2;
    const int BRAKE_ID = 1;

    const double RAISE_FF = 19308.5;
    const double RAISE_FF_INTERCEPT = -9083.19;

    const double TOO_FAR_FROM_STATIC_HOOKS = 16500;
    const double ABOVE_STATIC_HOOKS = 25000;
    const double CLEAR_OF_BARS = 90850;
    const double NEARING_HARDSTOP = 110000;
    //const double OFF_HOOKS = -110500;
    const double EXTEND_THRESHOLD = 1000; //TODO experiment for value
    const double HIGH_EXTEND_THRESHOLD = 2000;

    //const double RAISE_VOLTAGE = -6; //TODO increase, get better trapezoidal motion and stuff

    const double LOW_CLIMB_VOLTAGE = 9;
    const double MID_CLIMB_VOLTAGE = 8;
    const double HIGH_CLIMB_VOLTAGE = 6;

    //const double LOW_STALL_CURRENT = 175;
    //const double MID_STALL_CURRENT = 100;
    //const double HIGH_STALL_CURRENT = 100;

    //const double LOW_STALL_CURRENT_SPIKE = 50;
    //const double MID_STALL_CURRENT_SPIKE = 100;
    //const double HIGH_STALL_CURRENT_SPIKE = 200; //idk why I have this

    const double SUPER_SLOW_RAISE_VOLTAGE = -1;
    const double SLOW_RAISE_VOLTAGE = -2.5; //TODO make sure to lower on bar
    const double SLOW_CLIMB_VOLTAGE = 5;

    const double ROLL_MAX = 170; //TODO yeah these two
    const double ROLL_MIN = -180;

    const double ON_BAR_DELAY = 0.85;
}

namespace ShooterConstants
{
    const int HOOD_ID = 19;
    const int TURRET_ID = 20;
    const int KICKER_ID = 21;
    const int FLYWHEEL_SLAVE_ID = 22;
    const int FLYWHEEL_MASTER_ID = 23;

    const int MAX_HOOD_TICKS = -4000;
    const double MAX_HOOD_ANGLE = 60; //TODO get values (0, 60), (-2000, 48), (-3000, 43?)
    const double MIN_HOOD_ANGLE = 36;
    const double HOOD_ZERO_CURRENT = 0.6;
    const double TICKS_PER_HOOD_DEGREE = 166.67;
    const double HOOD_WEIGHT_FF = -0.69;

    const double HOOD_NEG_FF = 19370; //18818.3, 18370
    const double HOOD_NEG_FF_INTERCEPT = 13400; //9850.67, 13400
    const double HOOD_POS_FF = 14777.1;
    const double HOOD_POS_FF_INTERCEPT = -604.762;

    const double FLYWHEEL_RADIUS = 0.0381; //TODO 2 inches, make more precise
    const double FLYWHEEL_GEAR_RATIO = (2.0/3.0); //TODO get value
    const double MAX_VELOCITY = (GeneralConstants::MAX_RPM / FLYWHEEL_GEAR_RATIO) * 2 * M_PI * FLYWHEEL_RADIUS / 60;

    const double FLYWHEEL_FF = 1703;
    const double FLYWHEEL_FF_INTERCEPT = -750;
    const double TURRET_FF = 106.583; //82
    const double TURRET_FF_INTERCEPT = -79.5229;

    const double TURRET_ZERO_CURRENT = 2.8; //TODO test value
    const double TICKS_PER_TURRET_DEGREE = 175; //TODO test value

    const string SHOTS_FILE_NAME = frc::filesystem::GetDeployDirectory() + "/shots_raised_2_edited.csv";
    const string LOW_ANGLE_SHOTS_FILE_NAME = frc::filesystem::GetDeployDirectory() + "/shots_low_angle.csv";
    const double Kr = 0.0762; //TODO get value, 3 inches = 0.0762

    const int FLYWHEEL_READY = 330;
    const int FLYWHEEL_EJECT_READY = 500;
    const int HOOD_READY = 150;
    const int TURRET_AIMED = 3;
    const int TURRET_UNLOAD_AIMED = 3;

    const double KICKER_VOLTS = 5;

    const double UNLOADING_CURRENT = 15;
    const double UNLOADING_CURRENT_LOW = 5;

}

namespace ChannelConstants
{
    constexpr auto COLOR_SENSOR_PORT = frc::I2C::Port::kOnboard;
    const double RED_R = 255; //TODO get values
    const double RED_G = 0;
    const double RED_B = 0;
    
    const double BLUE_R = 0;
    const double BLUE_G = 0;
    const double BLUE_B = 255;

    const int BALL_PROXIMITY = 310;
}
#pragma once

#include <frc/Timer.h>

#include "SwerveDrive.h"
#include "Intake.h"
#include "Shooter.h"
#include "SwervePath.h"
#include "Constants.h"
#include <vector>

class AutoPaths
{
    public:
        enum Path
        {
            TAXI_DUMB,
            TWO_DUMB,
            TWO_RIGHT,
            TWO_MIDDLE,
            TWO_LEFT,
            THREE,
            BIG_BOY
        };
        AutoPaths();
        void setPath(Path path);
        Path getPath();

        Shooter::State getShooterState();
        Intake::State getIntakeState();

        void startTimer();
        //void stopTimer();

        void periodic(double yaw, SwerveDrive* swerveDrive);
        double initYaw();
    private:
        Path path_;
        Shooter::State shooterState_;
        Intake::State intakeState_;

        frc::Timer timer_;
        double startTime_;

        vector<SwervePath> swervePaths_;
        int pathNum_;
        //SwervePath swervePath_;
        //SwervePath swervePath_(SwerveConstants::MAX_LA, SwerveConstants::MAX_LV, SwerveConstants::MAX_AA, SwerveConstants::MAX_AV)
};
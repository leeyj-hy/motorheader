#ifndef TEST_STP_MOTOR__
#define TEST_STP_MOTOR__
#include "motor.h"

namespace motor
{   
    class stp_motor : public BaseMotor{
        public:
            void init() override;
            
            void movePose(float goal) override;
            float curPose() override;
        private:
           
    };

}
#endif
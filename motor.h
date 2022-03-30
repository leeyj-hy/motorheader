#ifndef TEST_BASE_MOTOR__
#define TEST_BASE_MOTOR__
#include <iostream>
namespace motor
{
    class BaseMotor{
        public:
            virtual void init() {
                std::cout << ("Init not defined!! please define init state!!") << std::endl;
                exit(-1);
            };
           
            virtual void movePose(float goal)
            {
                std::cout << ("movePose not defined!! please define movePose function!!") << std::endl;
                exit(-1);
            };
            
            virtual float curPose()
            {
                std::cout << ("currPose not defined!! please define curPose function!!") << std::endl;
                exit(-1);
            };
        protected:
            float goal_;
            float positon_;
    };
} // namespace motor


#endif
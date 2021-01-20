#include "mediapipe/framework/calculator_framework.h"


namespace mediapipe {
    class FirstCalculator : public CalculatorBase
    {
        public:
        FirstCalculator(){};
        ~FirstCalculator(){};

        static ::mediapipe::Status GetContract(CalculatorContract* cc)
        {

            cc->Inputs().Tag("TAG_NAME")->set<CLASS_TYPE>();

            cc->Outputs().Tag("TAG_NAME")->set<CLASS_TYPE>();

            return ::mediapipe::OkStatus();
        }

        ::mediapipe::Status Open(CalculatorContext *cc)
        {
            return ::mediapipe::OkStatus();
        }

        ::mediapipe::Status Process(CalculatorContext *cc)
        {
            return ::mediapipe::OkStatus();
        }

        ::mediapipe::Status Close(CalculatorContext *cc)
        {
            return ::mediapipe::OkStatus();
        }
    };
    REGISTER_CALCULATOR(FirstCalculator);
}

#include "mediapipe/framework/calculator_framework.h"
#include "mediapipe/framework/formats/image_frame.h"
// #include "mediapipe/framework/formats/tensor.h"

//for knoiwng GpuBuffer type
#include "mediapipe/gpu/gl_calculator_helper.h"

namespace mediapipe {

    namespace {

    constexpr char kInputFrameTag[] = "INPUT_IMAGE";
    constexpr char kInputIndices[] = "LANDMARK_INDICES";
    // constexpr char kOutputFrameTag[] = "IMAGE";

    // constexpr char kInputFrameTagGpu[] = "IMAGE_GPU";
    // constexpr char kInputAlphaTagGpu[] = "ALPHA_GPU";
    constexpr char kOutputFrameTagGpu[] = "IMAGE_GPU";

    constexpr int kNumChannelsRGBA = 4;

    // enum { ATTRIB_VERTEX, ATTRIB_TEXTURE_POSITION, NUM_ATTRIBUTES };
    } 



    class LandmarkToMaskCalculator : public CalculatorBase
    {
        public:
        LandmarkToMaskCalculator(){};
        ~LandmarkToMaskCalculator(){};

        static ::mediapipe::Status GetContract(CalculatorContract* cc)
        {

            cc->Inputs().Tag(kInputFrameTag).Set<GpuBuffer>();

            // cc->Outputs().Tag(kInputIndices).Set<std::vector<std::int>>();

            cc->Outputs().Tag(kOutputFrameTagGpu).Set<GpuBuffer>();

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
    REGISTER_CALCULATOR(LandmarkToMaskCalculator);
}

#include <vulkan/vulkan.h>

vr::EVRInitError error = vr::VRInitError_None;
vr::IVRSystem* vrSystem = vr::VR_Init(&error, vr::VRApplication_Scene);
if (error != vr::VRInitError_None) {
    printf("Failed to initialize OpenVR\n");
    return -1;
}

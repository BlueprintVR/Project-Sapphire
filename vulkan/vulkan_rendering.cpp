
#include <vulkan/vulkan.h>
#include <openvr.h>

void RenderFrame(vr::IVRSystem* vrSystem, VkImage vulkanImage) {
    // Submit the Vulkan frame to OpenVR's compositor
    vr::Texture_t vrTexture = {};
    vrTexture.handle = (void*)vulkanImage;
    vrTexture.eType = vr::TextureType_Vulkan;
    vrTexture.eColorSpace = vr::ColorSpace_Gamma;

    vr::VRCompositor()->Submit(vr::Eye_Left, &vrTexture);
    vr::VRCompositor()->Submit(vr::Eye_Right, &vrTexture);
}

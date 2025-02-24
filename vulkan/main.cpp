// main.cpp
#include <vulkan/vulkan.h>
#include <openvr.h>
#include "vulkan_init.cpp"
#include "openvr_init.cpp"
#include "vulkan_rendering.cpp"

int main() {
    // Initialize OpenVR
    InitOpenVR();

    // Initialize Vulkan
    InitVulkan(vrSystem);

    // Rendering loop
    while (true) {
        VkImage vulkanImage = RenderVulkanFrame();  // Assume this function renders a frame
        RenderFrame(vrSystem, vulkanImage);
    }

    return 0;
}

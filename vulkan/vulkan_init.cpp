#include <vulkan/vulkan.h>

VkInstanceCreateInfo createInfo = {};
createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;

// Get OpenVR's required Vulkan extensions
std::vector<const char*> extensions;
extensions.push_back(VRCompositor()->GetVulkanInstanceExtensionsRequired());

// Pass extensions to Vulkan instance
createInfo.enabledExtensionCount = static_cast<uint32_t>(extensions.size());
createInfo.ppEnabledExtensionNames = extensions.data();

VkInstance instance;
vkCreateInstance(&createInfo, nullptr, &instance);

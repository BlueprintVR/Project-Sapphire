# CoreVR

## About this project
CoreVR is a new framework for building VR Apps for Blueprint headsets. CoreVR makes it easier to develop VR apps for Blueprint,
written and made for C++, to ensure compatibility with most hardware components and improved efficiency. If you're familiar with Vulkan, its easy to learn CoreVR,
since the framework is a deriative of Vulkan and mainly adds components specific to VR development.

## Installation
CoreVR is still under development and is temporary unavalibe to install on your development computer.

## Usage
We have provided an example of a Blueprint app using CoreVR.
```cpp
#include <corevr/corevr.h>

VrInstance instance;
VrAppDescription description = {};
description.struct = APP_STRUCTURE_DESCRIPTION;
description.appName = "App Name";
description.appVersion = VR_MAKE_VERSION(0, 0, 1);
description.engineName = "Render Engine Name";
description.engineVersion = VR_MAKE_VERSION(0, 0, 1);
description.apiVersion = VR_API_VERSION_0_1;

VrInstanceCreate create = {vr window};
create.struct = VR_WINDOW;
create.AppDescription = &appDescription;

VrExecute result = vrCreate(&create, nullptr, &instance);
if (result != VR_COMPLETE) {
    std::cerr << "VR Window creation has failed" << std::end;
    return -1;
}
```

This code is for initializing CoreVR into your VR Blueprint apps, this step is required.

## Support
Our support team is working hard on creating a web page for CoreVR documentation, stay tuned!

## Roadmap
Right now our team doesn't have plans for new features into CoreVR but it is expected for new framework updates to become availible.

## Contributing
Anyone can contribute, but you must treat this repository with safety and carefully.

## Authors and acknowledgment
Thanks to everyone who has contributed to this project, your commitment is valuable to us!
## License
For open source projects, say how it is licensed.

## Project status
If you have run out of energy or time for your project, put a note at the top of the README saying that development has slowed down or stopped completely. Someone may choose to fork your project or volunteer to step in as a maintainer or owner, allowing your project to keep going. You can also make an explicit request for maintainers.

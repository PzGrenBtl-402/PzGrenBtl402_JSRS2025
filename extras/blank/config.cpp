#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"pzgrenbtl402_jsrs2025_main"};
        author = ECSTRING(Main,authors);
        authors[] = {""};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

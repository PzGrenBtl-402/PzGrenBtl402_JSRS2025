#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "pzgrenbtl402_jsrs2025_main",
            "jsrs_soundmod_2025_Beta",
            "hlcweapons_MG3s"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(Main,authors);
        authors[] = {"Timi007"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "pzgrenbtl402_jsrs2025_compat_pzgrenbtl402_redd_main",
            "jsrs_soundmod_2025_Beta",
            "PzGrenBtl402_Redd_NiArms_Sounds"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,authors);
        authors[] = {"Timi007"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"

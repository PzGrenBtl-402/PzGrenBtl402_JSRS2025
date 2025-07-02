#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "pzgrenbtl402_jsrs2025_main",
            "bwa3_weapons",
            "bwa3_mg3",
            "bwa3_mg4",
            "bwa3_mg5",
            "bwa3_g36",
            "bwa3_p2a1",
            "bwa3_pzf3",
            "bwa3_mrs120",
            "bwa3_pzh2000"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(Main,authors);
        authors[] = {"Timi007"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"

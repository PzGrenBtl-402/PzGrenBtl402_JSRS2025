#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Data_F_Enoch_Loadorder", "A3_Data_F_Mod_Loadorder"};
        author = CSTRING(authors);
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@PzGrenBtl402_JSRS2025";
        name = "PzGrenBtl 402 JSRS2025";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca.paa";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
        description = "Issue Tracker: https://github.com/PzGrenBtl-402/PzGrenBtl402/issues";
    };
};

class CfgSettings {
    class CBA {
        class Versioning {
            class PREFIX {};
        };
    };
};

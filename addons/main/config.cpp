#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jsrs2025_config_c"};
        author = CSTRING(authors);
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@JSRS SOUNDMOD 2025 - PzGrenBtl 402 Compat";
        name = "JSRS SOUNDMOD 2025 - PzGrenBtl 402 Compat";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca.paa";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
        description = "Issue Tracker: https://github.com/PzGrenBtl-402/PzGrenBtl402_JSRS2025/issues";
    };
};

class CfgSettings {
    class CBA {
        class Versioning {
            class PREFIX {};
        };
    };
};

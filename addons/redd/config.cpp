#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "pzgrenbtl402_jsrs2025_main",
            "PzGrenBtl402_Redd_Main",
            "Redd_Marder_1A5",
            "Redd_Tank_Gepard_1A2",
            "Redd_Tank_Wiesel_1A4_MK20",
            "Redd_Tank_Wiesel_1A2_TOW",
            "Redd_Tank_Fuchs_1A4",
            "rnt_sppz_2a2_luchs",
            "Redd_Tank_LKW_leicht_gl",
            "rnt_lkw_10t_mil_gl_kat_i",
            "rnt_lkw_7t_mil_gl_kat_i",
            "rnt_lkw_5t_mil_gl_kat_i"
        };
        author = ECSTRING(Main,authors);
        authors[] = {"Timi007"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

#define SOUND_AUTOCANNON_SMALL \
    class StandardSound { \
        soundSetShot[] = {  \
            "jsrs_2025_autocannon_small_shot_soundset", \
            "jsrs_2025_tailsystem_Autocannon_soundset" \
        }; \
    }

class Mode_FullAuto;
class Mode_SemiAuto;

class CfgWeapons {
    class autocannon_35mm;
    class Redd_MK20: autocannon_35mm {
        class AP: autocannon_35mm {
            class FullAuto: Mode_FullAuto {
                SOUND_AUTOCANNON_SMALL;
            };

            class Single: Mode_SemiAuto {
                SOUND_AUTOCANNON_SMALL;
            };
        };

        class HE: autocannon_35mm {
            class FullAuto: Mode_FullAuto {
                SOUND_AUTOCANNON_SMALL;
            };

            class Single: Mode_SemiAuto {
                SOUND_AUTOCANNON_SMALL;
            };
        };
    };

    class Redd_MK20FL: Redd_MK20 {
        class AP: autocannon_35mm {
            class FullAuto: Mode_FullAuto {
                SOUND_AUTOCANNON_SMALL;
            };

            class Single: Mode_SemiAuto {
                SOUND_AUTOCANNON_SMALL;
            };
        };

        class HE: autocannon_35mm {
            class FullAuto: Mode_FullAuto {
                SOUND_AUTOCANNON_SMALL;
            };

            class Single: Mode_SemiAuto {
                SOUND_AUTOCANNON_SMALL;
            };
        };
    };
};

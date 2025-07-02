#define SOUND_AUTOCANNON_BIG \
    class StandardSound { \
        soundSetShot[] = {  \
            "jsrs_2025_autocannon_big_shot_soundset", \
            "jsrs_2025_weapon_stereo_autocannon_soundset", \
            "jsrs_2025_autocannon_tails_soundset" \
        }; \
    }

#define SOUNDSET_MG3 \
    soundSetShot[] = { \
        "jsrs_2025_mg3_shot_soundset", \
        "jsrs_2025_weapon_snap_lmg_soundset", \
        "jsrs_2025_762mm_tails_soundset" \
    }

#define SOUND_MG3 \
    class StandardSound { \
        SOUNDSET_MG3; \
    }

#define SOUNDSET_MG5 \
    soundSetShot[] = { \
        "jsrs_2025_navid_shot_soundset", \
        "jsrs_2025_weapon_snap_lmg_soundset", \
        "jsrs_2025_762mm_tails_soundset" \
    }

#define SOUND_MG5 \
    class StandardSound: StandardSound { \
        SOUNDSET_MG5; \
    }

#define SOUNDSET_MG5_COAX \
    soundSetShot[] = { \
        "jsrs_2025_navid_shot_soundset", \
        "jsrs_2025_weapon_snap_medium_soundset", \
        "jsrs_2025_762mm_vehicle_tails_soundset" \
    }

#define SOUND_MG5_COAX \
    class StandardSound { \
        SOUNDSET_MG5_COAX; \
    }

#define SOUNDSET_G36 \
    soundSetShot[] = { \
        "jsrs_2025_g36_shot_soundset", \
        "jsrs_2025_weapon_snap_556mm_soundset", \
        "jsrs_2025_556mm_tails_soundset" \
    }

#define SOUNDSET_G36_SILENCED \
    soundSetShot[] = { \
        "jsrs_2025_g36_shot_silenced_soundset", \
        "jsrs_2025_weapon_snap_silenced_soundset", \
        "jsrs_2025_556mm_silenced_tails_soundset" \
    }

class Mode_FullAuto;
class Mode_SemiAuto;

class CfgWeapons {
    class CannonCore;
    class autocannon_Base_F: CannonCore {
        class player;
        class close;
        class short;
        class medium;
        class far;
    };

    class BWA3_MK30: autocannon_Base_F {
        SOUND_AUTOCANNON_BIG;

        class player: player {
            SOUND_AUTOCANNON_BIG;
        };
        class player_single: player {
            SOUND_AUTOCANNON_BIG;
        };
        class close: close {
            SOUND_AUTOCANNON_BIG;
        };
        class short: short {
            SOUND_AUTOCANNON_BIG;
        };
        class medium: medium {
            SOUND_AUTOCANNON_BIG;
        };
        class far: far {
            SOUND_AUTOCANNON_BIG;
        };

        class HE: autocannon_Base_F {
            SOUND_AUTOCANNON_BIG;

            class player: player {
                SOUND_AUTOCANNON_BIG;
            };
            class player_single: player {
                SOUND_AUTOCANNON_BIG;
            };
            class close: close {
                SOUND_AUTOCANNON_BIG;
            };
            class short: short {
                SOUND_AUTOCANNON_BIG;
            };
            class medium: medium {
                SOUND_AUTOCANNON_BIG;
            };
            class far: far {
                SOUND_AUTOCANNON_BIG;
            };
        };

        class AP: autocannon_Base_F {
            SOUND_AUTOCANNON_BIG;

            class player: player {
                SOUND_AUTOCANNON_BIG;
            };
            class player_single: player {
                SOUND_AUTOCANNON_BIG;
            };
            class close: close {
                SOUND_AUTOCANNON_BIG;
            };
            class short: short {
                SOUND_AUTOCANNON_BIG;
            };
            class medium: medium {
                SOUND_AUTOCANNON_BIG;
            };
            class far: far {
                SOUND_AUTOCANNON_BIG;
            };
        };
    };


    class MGun;
    class LMG_RCWS: MGun {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };

    class BWA3_MG3_vehicle: LMG_RCWS {
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            SOUNDSET_MG3;
        };

        class manual: manual {
            SOUND_MG3;
        };
        class close: close {
            SOUND_MG3;
        };
        class short: short {
            SOUND_MG3;
        };
        class medium: medium {
            SOUND_MG3;
        };
        class far: far {
            SOUND_MG3;
        };
    };

    class BWA3_MG3_loader: BWA3_MG3_vehicle {
        class StandardSound: BaseSoundModeType {
            SOUNDSET_MG3;
        };

        class manual: manual {
            SOUND_MG3;
        };
        class close: close {
            SOUND_MG3;
        };
        class short: short {
            SOUND_MG3;
        };
        class medium: medium {
            SOUND_MG3;
        };
        class far: far {
            SOUND_MG3;
        };
    };

    class BWA3_MG5_vehicle: LMG_RCWS {
        nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg", 0, 1, 0};
        soundbullet[] = {"nullbullet", 1};
        reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\lmg_navid_reload.ogg", 2, 1, 35};

        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            SOUNDSET_MG5_COAX;
        };

        class manual: manual {
            SOUND_MG5_COAX;
        };
        class close: close {
            SOUND_MG5_COAX;
        };
        class short: short {
            SOUND_MG5_COAX;
        };
        class medium: medium {
            SOUND_MG5_COAX;
        };
        class far: far {
            SOUND_MG5_COAX;
        };
    };

    class BWA3_MG5_loader: BWA3_MG5_vehicle {
        nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg", 0, 1, 0};
        soundbullet[] = {"nullbullet", 1};
        reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\lmg_navid_reload.ogg", 2, 1, 35};

        class manual: manual {
            SOUND_MG5;
        };
        class close: close {
            SOUND_MG5;
        };
        class short: short {
            SOUND_MG5;
        };
        class medium: medium {
            SOUND_MG5;
        };
        class far: far {
            SOUND_MG5;
        };
    };

    class Rifle_Long_Base_F;
    class BWA3_MG5: Rifle_Long_Base_F {
        nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg", 0, 1, 0};
        soundbullet[] = {"nullbullet", 1};
        reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\lmg_navid_reload.ogg", 2, 1, 35};

        class manual: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                SOUNDSET_MG5;
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {
					"jsrs_2025_navid_shot_silenced_soundset",
					"jsrs_2025_weapon_snap_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
            };
        };
    };

    class Rifle_Base_F;
    class BWA3_G36A1: Rifle_Base_F {
        nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg", 0, 1, 0};
        soundbullet[] = {"nullbullet", 1};

        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                SOUNDSET_G36;
            };

            class SilencedSound: BaseSoundModeType {
                SOUNDSET_G36_SILENCED;
            };
        };

        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                SOUNDSET_G36;
            };

            class SilencedSound: BaseSoundModeType {
                SOUNDSET_G36_SILENCED;
            };
        };
    };
};

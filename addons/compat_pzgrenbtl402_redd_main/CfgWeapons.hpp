class Mode_FullAuto;
class Mode_SemiAuto;

class CfgWeapons {
    class autocannon_35mm;
    class Redd_MK20: autocannon_35mm {
        class AP: autocannon_35mm {
            class FullAuto: Mode_FullAuto {
                class StandardSound {
                    soundsetshot[] = {
                        "jsrs_2025_autocannon_small_shot_soundset",
                        "jsrs_2025_weapon_stereo_autocannon_soundset",
                        "jsrs_2025_autocannon_tails_soundset"
                    };
                };
            };

            class Single: Mode_SemiAuto {
                class StandardSound {
                    soundsetshot[] = {
                        "jsrs_2025_autocannon_small_shot_soundset",
                        "jsrs_2025_weapon_stereo_autocannon_soundset",
                        "jsrs_2025_autocannon_tails_soundset"
                    };
                };
            };
        };

        class HE: autocannon_35mm {
            class FullAuto: Mode_FullAuto {
                class StandardSound {
                    soundsetshot[] = {
                        "jsrs_2025_autocannon_small_shot_soundset",
                        "jsrs_2025_weapon_stereo_autocannon_soundset",
                        "jsrs_2025_autocannon_tails_soundset"
                    };
                };
            };

            class Single: Mode_SemiAuto {
                class StandardSound {
                    soundsetshot[] = {
                        "jsrs_2025_autocannon_small_shot_soundset",
                        "jsrs_2025_weapon_stereo_autocannon_soundset",
                        "jsrs_2025_autocannon_tails_soundset"
                    };
                };
            };
        };
    };

    class Redd_MK20FL: Redd_MK20 {
        class AP: autocannon_35mm {
            class FullAuto: Mode_FullAuto {
                class StandardSound {
                    soundsetshot[] = {
                        "jsrs_2025_autocannon_small_shot_soundset",
                        "jsrs_2025_weapon_stereo_autocannon_soundset",
                        "jsrs_2025_autocannon_tails_soundset"
                    };
                };
            };

            class Single: Mode_SemiAuto {
                class StandardSound {
                    soundsetshot[] = {
                        "jsrs_2025_autocannon_small_shot_soundset",
                        "jsrs_2025_weapon_stereo_autocannon_soundset",
                        "jsrs_2025_autocannon_tails_soundset"
                    };
                };
            };
        };

        class HE: autocannon_35mm {
            class FullAuto: Mode_FullAuto {
                class StandardSound {
                    soundsetshot[] = {
                        "jsrs_2025_autocannon_small_shot_soundset",
                        "jsrs_2025_weapon_stereo_autocannon_soundset",
                        "jsrs_2025_autocannon_tails_soundset"
                    };
                };
            };

            class Single: Mode_SemiAuto {
                class StandardSound {
                    soundsetshot[] = {
                        "jsrs_2025_autocannon_small_shot_soundset",
                        "jsrs_2025_weapon_stereo_autocannon_soundset",
                        "jsrs_2025_autocannon_tails_soundset"
                    };
                };
            };
        };
    };
};

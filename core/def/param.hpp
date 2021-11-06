class Params {
    class btc_p_time_title { // << Time options >>
        title = $STR_BTC_HAM_PARAM_TIME_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_time { // Set the start time:
        title = __EVAL(format ["      %1", localize "STR_A3_CFGVEHICLES_MODULEDATE_F_ARGUMENTS_HOUR_0"]);
        values[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
        texts[]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24"};
        default = 12;
    };
    class btc_p_acctime { // Acceleration time multiplier:
        title = __EVAL(format ["      %1", localize "STR_USRACT_TIME_INC"]);
        values[]={1,2,3,4,5,6,7,8,9,10,11,12};
        texts[]={"1","2","3","4","5","6","7","8","9","10","11","12"};
        default = 5;
    };
    class btc_p_load { // Load the savegame (if available)
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_LOAD"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_auto_db { // Auto savegame when all players disconnected
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_ASAVE"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED}; // texts[]={"Off","On"};
        default = 1;
    };
    class btc_p_type_title { // << Faction options >>
        title = $STR_BTC_HAM_PARAM_FAC_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_en { // Enemy type:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_ETYPE"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317};
        texts[]={
            "Bohemia Interactive: 2035 FIA (Side: WEST)",
            "Bohemia Interactive: LDF (Side: GUER)",
            "Bohemia Interactive: 2035 AAF (Side: GUER)",
            "Bohemia Interactive: 2035 FIA (Side: GUER)",
            "Bohemia Interactive: Pillards (Side: GUER)",
            "Bohemia Interactive: 2035 CSAT (Side: EAST)",
            "Bohemia Interactive: 2035 FIA (Side: EAST)",
            "EricJ: Taliban (Side: EAST)",
            "00VTN Bohemia Interactive: U.S.M.C. (MARPAT Woodland) (Side: WEST)",
            "01VTN Bohemia Interactive: U.S.M.C. (MARPAT Desert) (Side: WEST)",
            "05VTN Bohemia Interactive: TIA-SF (Side: WEST)",
            "AFR BIS/IceBreakr: Afrenian Army (Side: WEST)",
            "ARA Bohemia Interactive: Abramian Rebel Alliance (Side: WEST)",
            "ARL BIS/IceBreakr: ARL Lingor Rebels (Side: EAST)",
            "BLU Community Upgrade Project and ATLAS Mod: 2035 NATO (Side: WEST)",
            "CEC HcPookie: Cecanian Army (Side: EAST)",
            "CFP Drew: Afghan Police (Side: WEST)",
            "CFP CFP: Chadian Armed Forces (Side: WEST)",
            "CFP Tupolov: Army of the Czech Rep. (Jungle / Woodland) (Side: WEST)",
            "CFP CFP: Israeli Defense Force (Side: WEST)",
            "CFP Drew: Iraqi Army (Side: WEST)",
            "CFP Drew: Iraqi Police (Side: WEST)",
            "CFP Drew: Kenyan Defense Force (Side: WEST)",
            "CFP Drew: Malian Government Forces (Side: WEST)",
            "CFP CFP: Nigerian Army (Side: WEST)",
            "CFP Drew: Peshmerga (Side: WEST)",
            "CFP Drew: Uganda People's Defense Force (Side: WEST)",
            "CFP Drew: US 75th Rangers (Jungle/Woodland) (Side: WEST)",
            "CFP Drew: US Navy Seals (Arid / Desert) (Side: WEST)",
            "CFP Drew: US Navy Seals (Jungle / Woodland) (Side: WEST)",
            "CFP Drew: YPG (Side: WEST)",
            "CFP Drew: al-Nusra Front (Side: GUER)",
            "CFP Drew: Islamic State (Side: GUER)",
            "CFP Drew: Sudan People's Liberation Movement North (Side: GUER)",
            "CFP Drew: Sudan Revolutionary Front (Side: GUER)",
            "CFP Drew: South Sudan People's Defense Force (Side: GUER)",
            "CFP Drew: Tuareg Rebels (Side: GUER)",
            "CFP Tupolov: Western Ultranationalists (Side: GUER)",
            "CFP Drew: Abu Sayyaf Group (Side: EAST)",
            "CFP Drew: Al Qaeda (Side: EAST)",
            "CFP Drew: Al-Shabaab (Side: EAST)",
            "CFP Tupolov: Ansar Allah (Houthis) (Side: EAST)",
            "CFP Drew: Boko Haram (Side: EAST)",
            "CFP Drew: Central African Rebels (Side: EAST)",
            "CFP Drew: Hamas Al Qassam Brigades (Side: EAST)",
            "CFP Drew: Hezbollah (Side: EAST)",
            "CFP CFP: Iraqi Army (Hussein Regime) (Side: EAST)",
            "CFP Drew: Islamic Republic of Iran Army (Side: EAST)",
            "CFP Drew: Islamic State (Side: EAST)",
            "CFP Drew: Sudanese Armed Forces (Side: EAST)",
            "CFP CFP: Sudan Rapid Support Forces / Janjaweed (Side: EAST)",
            "CFP Drew: Somali Rebels (Side: EAST)",
            "CFP Drew: Sudan People's Liberation Movement In Opposition (Side: EAST)",
            "CFP Drew: Syrian Arab Army (Side: EAST)",
            "CFP Drew: Taliban Insurgents (Side: EAST)",
            "CUP Community Upgrade Project: Chernarus Defense Forces (Side: WEST)",
            "CUP Community Upgrade Project: Army of the Czech Rep. (Arid / Desert) (Side: WEST)",
            "CUP Community Upgrade Project: British Army (Arid / Desert) (Side: WEST)",
            "CUP Community Upgrade Project: Horizon Islands Legion (Side: WEST)",
            "CUP Community Upgrade Project: Royal New Zealand Navy (Side: WEST)",
            "CUP Community Upgrade Project: US Army (Arid / Desert) (Side: WEST)",
            "CUP Community Upgrade Project: US Marine Corps (Jungle / Woodland) (Side: WEST)",
            "CUP Community Upgrade Project: National Party of Chernarus (Side: GUER)",
            "CUP Community Upgrade Project: Royal Army Corps of Sahrani (Side: GUER)",
            "CUP Community Upgrade Project: United Nations (Side: GUER)",
            "CUP Community Upgrade Project: Chernarussian Movement of the Red Star (Side: EAST)",
            "CUP Community Upgrade Project: Russian Ground Forces (Jungle / Woodland) (Side: EAST)",
            "CUP Community Upgrade Project: Sahrani Liberation Army (Side: EAST)",
            "CUP Community Upgrade Project: Takistani Army (Side: EAST)",
            "CUP Community Upgrade Project: Takistani Militia (Side: EAST)",
            "CUP Community Upgrade Project: CUP Static Ships (Side: WEST)",
            "CUP_Units Drew: Chernarus Defense Forces [Winter] (Side: WEST)",
            "CUP_Units Community Upgrade Project: Bundeswehr (Jungle / Woodland) (Side: WEST)",
            "CUP_Units Community Upgrade Project: British Army (Jungle / Woodland) (Side: WEST)",
            "CUP_Units Drew: US Army 1991 [Arid/Desert] (Side: WEST)",
            "CUP_Units Drew: US Army 1991 [Woodland] (Side: WEST)",
            "CUP_Units Drew: US Army 2003 [Arid/Desert] (Side: WEST)",
            "CUP_Units Drew: US Army 2003 [Woodland] (Side: WEST)",
            "CUP_Units Tupolov: US CIA (Middle East) (Side: WEST)",
            "CUP_Units Tupolov: US Marine Corps (Arid / Desert) (Side: WEST)",
            "CUP_Units Drew: PMC Wagner (Arid / Desert) (Side: GUER)",
            "CUP_Units Drew: PMC Wagner (Woodland) (Side: GUER)",
            "CUP_Units Drew: PMC Wagner (Winter) (Side: GUER)",
            "CUP_Units Tupolov: Russian National Guard (Side: EAST)",
            "CUP_Units Drew: PMC Wagner (Arid / Desert) (Side: EAST)",
            "CUP_Units Drew: PMC Wagner (Woodland) (Side: EAST)",
            "CUP_Units Drew: PMC Wagner (Winter) (Side: EAST)",
            "CUP_Units Community Upgrade Project: Bundeswehr (Arid / Desert) (Side: WEST)",
            "CUP_Units Community Upgrade Project: ION PMC (Side: GUER)",
            "CUP_Units Community Upgrade Project: Takistani Locals (Side: GUER)",
            "CUP_Vehicles Drew: Afghan Army (Side: WEST)",
            "CUP_Vehicles Community Upgrade Project: US Army (Jungle / Woodland) (Side: WEST)",
            "CUP_Vehicles Drew: Chernarussian Movement of the Red Star [Winter] (Side: EAST)",
            "CUP_Vehicles Tupolov: Russian Ground Forces (Arid / Desert) (Side: EAST)",
            "Enoch Bohemia Interactive: Spetsnaz (Side: EAST)",
            "Expansion Bohemia Interactive: 2035 CTRG (Side: WEST)",
            "Expansion Bohemia Interactive: 2035 Gendarmerie (Side: WEST)",
            "Expansion Bohemia Interactive: 2035 NATO (Pacific) (Side: WEST)",
            "Expansion Drew: Korean People's Army (Side: EAST)",
            "Expansion Bohemia Interactive: 2035 Gendarmerie (Side: EAST)",
            "FAP nzdfcrash/icebreakr: Fapovian Army (Side: EAST)",
            "FOW Bohemia Interactive: [DE] Heer (Side: WEST)",
            "FOW Bohemia Interactive: [JP] Navy Air Service (Side: WEST)",
            "FOW Bohemia Interactive: [UK] Fleet Air Arm (Side: GUER)",
            "FOW Bohemia Interactive: [US] Navy (Side: GUER)",
            "FOW FOW Team: [DE] Waffen-SS (Side: WEST)",
            "fow_mod Bohemia Interactive: [AUS] Army (Pacific) (Side: GUER)",
            "fow_mod Bohemia Interactive: [HI] Army (Side: GUER)",
            "fow_mod FOW team: [JP] Imperial Army (Side: WEST)",
            "fow_mod Bohemia Interactive: [DE] Luftwaffe (Side: WEST)",
            "fow_mod Bohemia Interactive: [UK] Army (Side: GUER)",
            "fow_mod FOW team: [US] Army (Europe) (Side: GUER)",
            "fow_mod Bohemia Interactive: [US] Army (Pacific) (Side: GUER)",
            "fow_mod FOW team: [US] Marines Corps (Side: GUER)",
            "GAL HcPookie: GAL (Government Army of Lingor) (Side: WEST)",
            "GANGBLUE BIS/IceBreakr: Blue Gang (Side: WEST)",
            "GANGRED BIS/IceBreakr: Red Gang (Side: EAST)",
            "gm Global Mobilization: Denmark (Side: WEST)",
            "gm Global Mobilization: East Germany (Side: EAST)",
            "gm Global Mobilization: East Germany (Borderguards) (Side: EAST)",
            "gm Global Mobilization: West Germany (Side: WEST)",
            "gm Global Mobilization: West Germany (Borderguards) (Side: WEST)",
            "gm Global Mobilization: Poland (Side: EAST)",
            "IBR Bohemia Interactive: Alienz (Side: GUER)",
            "ISC Bohemia Interactive: [ISC] al-Nusra Front (Side: GUER)",
            "ISC Bohemia Interactive: [ISC] Iraqi Police (Side: WEST)",
            "ISC Bohemia Interactive: [ISC] Islamic State (Side: GUER)",
            "ISC Bohemia Interactive: [ISC] Islamic State (Side: EAST)",
            "ISC Bohemia Interactive: [ISC] Peshmerga (Side: WEST)",
            "ISC Bohemia Interactive: [ISC] YPG (Side: WEST)",
            "Jets Bravo Zero One Studios: [OPCAN] United Rebel Army (Side: EAST)",
            "LIB AWAR: ACI (Side: GUER)",
            "LIB AWAR & Lennard: ARR (Side: WEST)",
            "LIB Lennard: Deutsches Afrikakorps (Side: WEST)",
            "LIB Reyhard & Joarius: FFI (Side: GUER)",
            "LIB IFA3 Team: FallschirmjÃ¤ger (Side: WEST)",
            "LIB AWAR: Armia Krajowa (Polonais) (Side: GUER)",
            "LIB AWAR & Lennard: MKHL (Side: WEST)",
            "LIB Lennard: US North African Corps (Side: GUER)",
            "LIB Lennard: NKVD (Side: EAST)",
            "LIB AWAR: RAAF (Side: GUER)",
            "LIB AWAR & Lennard: RBAF (Side: WEST)",
            "LIB AWAR: Red Army (Side: EAST)",
            "LIB AWAR & Lennard: [Winter] Red Army (Side: EAST)",
            "LIB IFA3 Team: UK Airborne (Side: GUER)",
            "LIB El Tyranos: [Winter] UK Airborne (Side: GUER)",
            "LIB IFA3 Team: UK Army (Side: GUER)",
            "LIB El Tyranos: [Winter] UK Army (Side: GUER)",
            "LIB IFA3 Team: UK Desert Rats (Side: GUER)",
            "LIB El Tyranos: 101st Airborne Division (Side: GUER)",
            "LIB El Tyranos: 82nd Airborne Division (Side: GUER)",
            "LIB IFA3 team: US Army (Side: GUER)",
            "LIB El Tyranos: [Winter] US Army (Side: GUER)",
            "LIB Lennard: US 2nd Ranger Battalion (Side: GUER)",
            "LIB AWAR: Wehrmacht (Side: WEST)",
            "LIB AWAR & Lennard: [Winter] Wehrmacht (Side: WEST)",
            "LM J.Burgess: [OPCAN] Colonial Guard Corps (Woodland) (Side: WEST)",
            "LM J.Burgess: [OPCAN] Colonial Military Authority (Side: GUER)",
            "LM J.Burgess: [OPCAN] Colonial Police Force (Side: GUER)",
            "LM J.Burgess: [OPCAN] Fridens (Side: EAST)",
            "LM J.Burgess: [OPCAN] Fridens (Desert) (Side: EAST)",
            "LM J.Burgess: [OPCAN] Fridens (Woodland) (Side: EAST)",
            "LM J.Burgess: [OPCAN] Koslovics (Side: EAST)",
            "LM J.Burgess: [OPCAN] Secessionist Union (Side: EAST)",
            "LM J.Burgess: [OPCAN] UNSC Army (Woodland) (Side: WEST)",
            "LM J.Burgess: [OPCAN] UNSC Army (Desert) (Side: WEST)",
            "LM J.Burgess: [OPCAN] UNSC Army (Mixed) (Side: WEST)",
            "LM J.Burgess: [OPCAN] UNSC Army Peace Corps (Side: WEST)",
            "LM J.Burgess: [OPCAN] UNSC Marine Corps (Woodland) (Side: WEST)",
            "LM J.Burgess: [OPCAN] UNSC Marine Corps (CE:A) (Side: WEST)",
            "LM J.Burgess: [OPCAN] UNSC Marine Corps (Desert) (Side: WEST)",
            "LM J.Burgess: [OPCAN] UNSC Marine Corps (Infinite) (Side: WEST)",
            "LOP_LeightsOPFOR Project OPFOR: Afghan National Army and Police (Side: WEST)",
            "LOP_LeightsOPFOR Project OPFOR: African Militia (Side: GUER)",
            "LOP_LeightsOPFOR Project OPFOR: African Militia (Side: EAST)",
            "LOP_LeightsOPFOR Project OPFOR: Middle Eastern Militia (Side: GUER)",
            "LOP_LeightsOPFOR Project OPFOR: Middle Eastern Militia (Side: EAST)",
            "LOP_LeightsOPFOR Project OPFOR: Boko Haram (Side: EAST)",
            "LOP_LeightsOPFOR Project OPFOR: CDF (Project OPFOR) (Side: WEST)",
            "LOP_LeightsOPFOR Project OPFOR: ChDKZ (Project OPFOR) (Side: EAST)",
            "LOP_LeightsOPFOR Project OPFOR: Hellenic Armed Forces (Side: WEST)",
            "LOP_LeightsOPFOR Project OPFOR: Iraqi Armed Forces (Side: WEST)",
            "LOP_LeightsOPFOR Project OPFOR: Irish Republican Army (Side: EAST)",
            "LOP_LeightsOPFOR Project OPFOR: Iranian Armed Forces (Side: GUER)",
            "LOP_LeightsOPFOR Project OPFOR: Islamic State (Side: GUER)",
            "LOP_LeightsOPFOR Project OPFOR: Islamic State (Side: EAST)",
            "LOP_LeightsOPFOR Project OPFOR: Chernarussian National Insurgents (Side: GUER)",
            "LOP_LeightsOPFOR Project OPFOR: Korean People's Army (Side: EAST)",
            "LOP_LeightsOPFOR Project OPFOR: Kurdish Peshmerga Forces (Side: WEST)",
            "LOP_LeightsOPFOR Project OPFOR: Kurdish Peshmerga Forces (Side: GUER)",
            "LOP_LeightsOPFOR Project OPFOR: Private Military Company (Side: GUER)",
            "LOP_LeightsOPFOR Project OPFOR: Royal Army Corps of Sahrani (Side: GUER)",
            "LOP_LeightsOPFOR Project OPFOR: Sahrani Liberation Army (Side: EAST)",
            "LOP_LeightsOPFOR Project OPFOR: Syrian Armed Forces (Side: EAST)",
            "LOP_LeightsOPFOR Project OPFOR: Takistani Armed Forces (Side: EAST)",
            "LOP_LeightsOPFOR Project OPFOR: Turkish Armed Forces (Side: GUER)",
            "LOP_LeightsOPFOR Project OPFOR: Ultranationalists (Side: GUER)",
            "LOP_LeightsOPFOR Project OPFOR: Ukrainian Armed Forces (Side: GUER)",
            "LOP_LeightsOPFOR Project OPFOR: United Nations (Side: GUER)",
            "LOP_LeightsOPFOR Project OPFOR: United Armed Forces of Novorossiya (Side: EAST)",
            "LOP_LeightsOPFOR Project OPFOR: Ulster Volunteer Force (Side: GUER)",
            "Mark Bohemia Interactive: OTAN (forÃªt) (Side: WEST)",
            "MOL HcPookie: Molatian Army (Side: EAST)",
            "O jarrad96: Central African Rebels (Side: EAST)",
            "OPF Community Upgrade Project: 2035 CSAT (Pacific) (Side: EAST)",
            "OPTRE Article 2 Studios: Insurrectionists (Side: EAST)",
            "OPTRE Article 2 Studios: Colonial Police (Side: GUER)",
            "OPTRE Article 2 Studios: UNSCDF (Side: WEST)",
            "OPTRE_FC Article 2 Studios: Covenant (Side: EAST)",
            "RHS_AFRF Red Hammer Studios: [ISC] Iraqi Army (Side: WEST)",
            "RHS_AFRF Red Hammer Studios: Russia (MSV) (Side: EAST)",
            "RHS_AFRF Red Hammer Studios: Russia (RVA) (Side: EAST)",
            "RHS_AFRF Red Hammer Studios: Russia (TV) (Side: EAST)",
            "RHS_AFRF Red Hammer Studios: Russia (VDV) (Side: EAST)",
            "RHS_AFRF Red Hammer Studios: Russia (VMF) (Side: EAST)",
            "RHS_AFRF RHS: Russia (VPVO) (Side: EAST)",
            "RHS_AFRF Red Hammer Studios: Russia (VV) (Side: EAST)",
            "RHS_AFRF Red Hammer Studios: Russia (VVS - Grey) (Side: EAST)",
            "RHS_AFRF Red Hammer Studios: Russia (VVS - Camo) (Side: EAST)",
            "RHS_GREF Red Hammer Studios: [ISC] Syrian Arab Army (Side: EAST)",
            "RHS_GREF RHS (A2 port): CDF (Air Forces) (Side: GUER)",
            "RHS_GREF Red Hammer Studios: CDF (Air Forces) (Side: WEST)",
            "RHS_GREF Red Hammer Studios: ChDKZ (Side: EAST)",
            "RHS_SAF RHS (A2 port): SAF (RVIPVO) (Side: GUER)",
            "RHS_SAF RHS (A2 port): SAF (RVIPVO) (Side: EAST)",
            "RHS_SAF Red Hammer Studios: SAF (KOV) (Side: GUER)",
            "RHS_SAF RHS (A2 port): SAF (KOV) (Side: EAST)",
            "RHS_SAF RHS (A2 port): SAF (Casques Bleus) (Side: GUER)",
            "RHS_USAF Red Hammer Studios: USA (SOCOM) (Side: WEST)",
            "RHS_USAF Red Hammer Studios: USA (USAF) (Side: WEST)",
            "RHS_USAF Red Hammer Studios: USA (Army - D) (Side: WEST)",
            "RHS_USAF Red Hammer Studios: USA (USMC - D) (Side: WEST)",
            "RHS_USAF Red Hammer Studios: USA (Navy) (Side: WEST)",
            "RHSGREF www.3commandobrigade.com: CDF (Ground Forces) (Side: GUER)",
            "RHSGREF www.3commandobrigade.com: CDF (Ground Forces) (Side: WEST)",
            "RHSGREF Red Hammer Studios: NAPA (Side: GUER)",
            "RHSGREF Red Hammer Studios: Tanoan Liberation Army (Side: EAST)",
            "RHSGREF Red Hammer Studios: CDF (UN) (Side: GUER)",
            "SG Stagler: Sturmtroopers (Side: WEST)",
            "SG Stagler: Tank Sturmtroopers (Side: WEST)",
            "Tank Bohemia Interactive: 2035 Syndikat (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: USA (Army - W) (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: USA (USMC - W) (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: CDF (National Guard) (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: CDF (National Guard) (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: ChDKZ (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: Horizon Islands Defence Force (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB AAF (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB AAF (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB AAF (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Army (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Army (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Army (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Civilians (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Civilians (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Civilians (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Extremists (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Extremists (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Civilian Militia (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Civilian Militia (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Civilian Militia (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Militia (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Militia (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Militia (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert National Police (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert National Police (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert National Police (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Army Paramilitary (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Army Paramilitary (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Army Paramilitary (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Afghan National Army (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Afghan National Police (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Local Defence Volunteers (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Nationalist Militia (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Communist Militia (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Civilians (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Civilians (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Civilians (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Police Department (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Police Department (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Police Department (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Cold War USSR - Early (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Cold War USSR - Late (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Cold War US - Early (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Cold War US - Late (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan National Army (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan National Army (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan National Army (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan Civilians (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan Civilians (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan Civilians (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan Pro-Government Militia (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan Tribal Fighters (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan Insurgents (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan National Police (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan National Police (Side: GUER)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan National Police (Side: EAST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB UN Peacekeepers (Side: WEST)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB UN Peacekeepers (Side: GUER)",
            "UNSUNG Bohemia Interactive: Australia (UNSUNG) (Side: WEST)",
            "UNSUNG Razorback: N.V.A. (UNSUNG) (Side: EAST)",
            "UNSUNG Bohemia Interactive: V.C. (UNSUNG) (Side: EAST)",
            "UNSUNG UNSUNG: A.R.V.N. (UNSUNG) (Side: GUER)",
            "UNSUNG Bohemia Interactive: New Zealand (UNSUNG) (Side: WEST)",
            "UNSUNG Bohemia Interactive: R.O.K. (UNSUNG) (Side: WEST)",
            "UNSUNG Bohemia Interactive: U.S. (UNSUNG) (Side: WEST)",
            "VTN VTN: Mechanized infantry (EMR) (Side: EAST)",
            "VTN VTN: Militia (Side: GUER)",
            "VTN VTN: Insurgents (Side: GUER)",
            "VTN VTN: Mechanized infantry (VSR-98) (Side: EAST)",
            "VTN VTN: GRU SSPB (Side: EAST)",
            "VTN VTN: ISIL (Side: GUER)",
            "VTN VTN: MVD SPPU (Side: EAST)",
            "VTN VTN: Airforce (Side: EAST)",
            "VTN VTN: Takistan national guard (Side: EAST)",
            "Армия Такистана (Side: EAST)",
            "Население Такистана (Side: GUER)",
            "PAVN (Side: EAST)"
        };
        default = 317;
    };
    class btc_p_AA { // Anti-Air infantry:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_EAA"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_tank { // Enemy uses Tank:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_ETANK"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_civ { // Civil type:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_CTYPE"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28};
        texts[]={
            "EricJ: Afghan Civilians (Side: CIV)",
            "Bohemia Interactive: Civils (Side: CIV)",
            "Bohemia Interactive: Autre (Side: CIV)",
            "CFP Drew: Civilians (Afghanistan) (Side: CIV)",
            "CFP Drew: Civilians (African Christian) (Side: CIV)",
            "CFP Drew: Civilians (African Islamic) (Side: CIV)",
            "CFP Drew: Civilians (Asian) (Side: CIV)",
            "CFP Drew: Civilians (Chernarus Winter) (Side: CIV)",
            "CFP Drew: Civilians (Malden) (Side: CIV)",
            "CFP Drew: Civilians (Middle Eastern) (Side: CIV)",
            "CUP_Units Community Upgrade Project: Civilians (Russian) (Side: CIV)",
            "CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Chernarus) (Side: CIV)",
            "CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Sahrani) (Side: CIV)",
            "CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Takistan) (Side: CIV)",
            "gm Global Mobilization: East Germany (Side: CIV)",
            "gm Global Mobilization: West Germany (Side: CIV)",
            "LIB Reyhard & Joarius: 40s Civilians (Side: CIV)",
            "LOP_LeightsOPFOR Project OPFOR: Civilians (African) (Side: CIV)",
            "LOP_LeightsOPFOR Project OPFOR: Civilians (Eastern European) (Side: CIV)",
            "LOP_LeightsOPFOR Project OPFOR: Civilians (Middle Eastern) (Side: CIV)",
            "OPTRE Article 2 Studios: IDAP (Side: CIV)",
            "OPTRE Bohemia Interactive: Civilians (UEG) (Side: CIV)",
            "RDS_CIV_PACK RDS (BIS A2 Port): Russians (Side: CIV)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Civilians (Side: CIV)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Civilians (Side: CIV)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan Civilians (Side: CIV)",
            "UNSUNG Bohemia Interactive: Vietnamese (UNSUNG) (Side: CIV)",
            "Гражданские (Такистан) (Side: CIV)",
            "Vietnamese (Side: CIV)"
        };
        default = 28;
    };
    class btc_p_civ_veh { // Civil vehicle type:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_CTYPEVEH"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28};
        texts[]={
            "EricJ: Afghan Civilians (Side: CIV)",
            "Bohemia Interactive: Civils (Side: CIV)",
            "Bohemia Interactive: Autre (Side: CIV)",
            "CFP Drew: Civilians (Afghanistan) (Side: CIV)",
            "CFP Drew: Civilians (African Christian) (Side: CIV)",
            "CFP Drew: Civilians (African Islamic) (Side: CIV)",
            "CFP Drew: Civilians (Asian) (Side: CIV)",
            "CFP Drew: Civilians (Chernarus Winter) (Side: CIV)",
            "CFP Drew: Civilians (Malden) (Side: CIV)",
            "CFP Drew: Civilians (Middle Eastern) (Side: CIV)",
            "CUP_Units Community Upgrade Project: Civilians (Russian) (Side: CIV)",
            "CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Chernarus) (Side: CIV)",
            "CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Sahrani) (Side: CIV)",
            "CUP_Vehicles $CUP_AUTHOR_STRING: Civilians (Takistan) (Side: CIV)",
            "gm Global Mobilization: East Germany (Side: CIV)",
            "gm Global Mobilization: West Germany (Side: CIV)",
            "LIB Reyhard & Joarius: 40s Civilians (Side: CIV)",
            "LOP_LeightsOPFOR Project OPFOR: Civilians (African) (Side: CIV)",
            "LOP_LeightsOPFOR Project OPFOR: Civilians (Eastern European) (Side: CIV)",
            "LOP_LeightsOPFOR Project OPFOR: Civilians (Middle Eastern) (Side: CIV)",
            "OPTRE Article 2 Studios: IDAP (Side: CIV)",
            "OPTRE Bohemia Interactive: Civilians (UEG) (Side: CIV)",
            "RDS_CIV_PACK RDS (BIS A2 Port): Russians (Side: CIV)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB African Desert Civilians (Side: CIV)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Chernarus Civilians (Side: CIV)",
            "UK3CB_Factions www.3commandobrigade.com: 3CB Takistan Civilians (Side: CIV)",
            "UNSUNG Bohemia Interactive: Vietnamese (UNSUNG) (Side: CIV)",
            "Гражданские (Такистан) (Side: CIV)",
            "Vietnamese (Side: CIV)"
        };
        default = 28;
    };
    class btc_p_spawn_title { // << Spawn options >>
        title = $STR_BTC_HAM_PARAM_SPAWN_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_is_free_prob { // Probability for a city to be free:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ISFREE_PROB"]);
        values[]={0,10,20,30,40,45,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","45%","50%","60%","70%","80%","90%","100%"};
        default = 70;
    };
    class btc_p_mil_group_ratio { // Enemy density:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ENEMY_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 50;
    };
    class btc_p_civ_group_ratio { // Civilian density:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_CIVILIAN_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 60;
    };
    class btc_p_wp_house_probability { // Density of military in house:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_MIL_INHOUSE_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 50;
    };
    class btc_p_veh_armed_ho { // Add armed vehicles in Hideout:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPAWN_ARMEDHIDEOUT"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_veh_armed_spawn_more { // Add armed vehicles in Side mission/Cache:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPAWN_ARMEDOTHER"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_patrol_max { // Maximum number of military patrol:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_PATROL_MAX"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"1","2","3","4","5","6","7","8","9","10"};
        default = 7;
    };
    class btc_p_civ_max_veh { // Maximum number of civilian patrol:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_CIV_MAX_VEH"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"1","2","3","4","5","6","7","8","9","10"};
        default = 10;
    };
    class btc_p_IED_title { // << IED options >>
        title = $STR_BTC_HAM_PARAM_IED_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_ied { // IEDs ratio:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_RATIO"]);
        values[]={0, 1, 2, 3};
        texts[]={$STR_DISABLED,$STR_A3_TIME_TRIALS_MISCTT_ROF_25,$STR_3DEN_ATTRIBUTES_SPEEDMODE_NORMAL,$STR_A3_TIME_TRIALS_MISCTT_ROF_21}; //texts[]={"Off","Low","Normal","High"};
        default = 1;
    };
    class btc_p_ied_spot { // IEDs spotting difficulty:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_SPOT"]);
        values[]={0, 1, 2};
        texts[]={$STR_BTC_HAM_PARAM_IED_SPOT_VERYEASY,$STR_BTC_HAM_PARAM_IED_SPOT_EASY,$STR_3DEN_ATTRIBUTES_SPEEDMODE_NORMAL}; //texts[]={"Very easy","Easy","Normal"};
        default = 1;
    };
    class btc_p_ied_placement { // IEDs type of placement:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_PLACEMENT"]);
        values[]={2, -1, 3};
        texts[]={$STR_BTC_HAM_PARAM_IED_PLACEMENT_ROADSIDE,$STR_BTC_HAM_PARAM_IED_PLACEMENT_MIDDLE,$STR_3DEN_ATTRIBUTES_OBJECTTEXTURE_RANDOM_TEXT}; //texts[]={"Roadside", "Middle", "Random"};
        default = 3;
    };
    class btc_p_ied_drone { // Drone bomber:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_DRONE"]);
        values[]={0, 1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_hideout_cache_title { // << Hideout/Cache options >>
        title = $STR_BTC_HAM_PARAM_HIDE_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_hideout_n { // Hideout numbers:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_HIDE_NUMBERS"]);
        values[]={99,1,2,3,4,5};
        texts[]={$STR_3DEN_ATTRIBUTES_OBJECTTEXTURE_RANDOM_TEXT,"1","2","3","4","5"}; //texts[]={"Random","1","2","3","4","5"};
        default = 3;
    };
    class btc_p_cache_info_def { // Info cache distance:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_DISTANCE"]);
        values[]={500,1000,1500,2000,2500,3000,3500,4000,5000};
        texts[]={"500 m","1000 m","1500 m","2000 m","2500 m","3000 m","3500 m","4000 m","5000 m"};
        default = 1000;
    };
    class btc_p_cache_info_ratio { //Cache info ratio:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_RATIO"]);
        values[]={50,100};
        texts[]={"50 m","100 m"};
        default = 100;
    };
    class btc_p_info_chance { // Intel from dead bodies chance:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_DEADINFO"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"100 %","90 %","80 %","70 %","60 %","50 %","40 %","30 %","20 %","10 %","0 %"};
        default = 50;
    };
    class btc_p_medical_title { // << Medical options >>
        title = $STR_BTC_HAM_MEDI_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_redeploy { // Allow re-deploy?
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_MEDI_REDEPLOY"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_skill_title { // << A3 Skill options >>
        title = $STR_BTC_HAM_PARAM_SKILL_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_set_skill { // Set skill?
        title = __EVAL(format ["      %1?", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_set_skill_general { // Set skill, general
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_3DEN_SCENARIO_TEXTSINGULAR"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_aimingAccuracy { // Set skill, aimingAccuracy
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_AIMACC"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_aimingShake { // Set skill, aimingShake
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_AIMSKILL"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_aimingSpeed { // Set skill, aimingSpeed
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_AIMSPEED"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_endurance { // Set skill, endurance
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_A3_VR_STAMINA"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_spotDistance { // Set skill, spotDistance
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_SPOTDIST"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_spotTime { // Set skill, spotTime
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_SPOTTIME"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_courage { // Set skill, courage
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_COURAGE"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_reloadSpeed { // Set skill, reloadSpeed
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_RELOAD"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_commanding { // Set skill, commanding
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_A3_CFGHINTS0"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_gameplay_title { // << Gameplay options >>
        title = $STR_BTC_HAM_PARAM_GAMEPLAY_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_sea { // Extend battlefield to sea:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SEA"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_chem { // Chemical warfare
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_CHEM"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_spect { // Spectrum devices
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SPECT"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_side_mission_cycle { // Side mission cycle:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SIDEM"]);
        values[] = {0,1,2,3,4};
        texts[] = {$STR_DISABLED,1,2,3,4};
        default = 3;
    };
    class btc_p_arsenal_title { // << Arsenal options >>
        title = $STR_BTC_HAM_PARAM_ARSENAL_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_arsenal_Type { // Type of the arsenal:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE"]);
        values[]={0,1,2,3,4,5};
        texts[]={$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_BIS,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_BA,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_BA_PLUS,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_ACE,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_ACE_PLUS,"SPEC Arsenal"}; //texts[]={"BIS - Vanilla","BIS - Vanilla and ACE 3","BIS - Vanilla and ACE 3 (scroll wheel action)","ACE 3","ACE 3 (scroll wheel action)"};
        default = 5;
    };
    class btc_p_arsenal_Restrict { // Restricted arsenal (See /define_mod.sqf):
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_ARSENAL_ARSENALRESTR"]);
        values[]={0,1,2,3,4};
        texts[] = {$STR_DISABLED,$STR_3DEN_ATTRIBUTES_SPEEDMODE_FULL,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALRESTR_REMOVEONLY,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALRESTR_FILTER,"SPEC Arsenal"}; //texts[]={"Off","Full","Remove only (works only with ACE3-Arsenal)","Filter on player role (works only with ACE3-Arsenal)"};
        default = 4;
    };
    class btc_p_autoloadout { // loadout:
        title = __EVAL(format ["      %1:", localize "STR_ACE_Interaction_Equipment"]);
        values[]={0,1,2};
        texts[]={$STR_DISABLED,$STR_BTC_HAM_PARAM_ARSENAL_AUTOLOADOUT, $STR_BTC_HAM_PARAM_ARSENAL_RMVWEAPONS};
        default = 0;
    };
    class btc_p_garage { // Activate garage for admin:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_ARSENAL_GARAGEADMIN"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_main_title { // << Other options >>
        title = $STR_BTC_HAM_PARAM_OTHER_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_rep { // Reputation at start:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_REPSTART"]);
        values[]={0, 200, 500, 750};
        texts[]={$STR_ACE_ViewDistance_object_verylow,$STR_A3_TIME_TRIALS_MISCTT_ROF_25,$STR_3DEN_ATTRIBUTES_SPEEDMODE_NORMAL,$STR_A3_TIME_TRIALS_MISCTT_ROF_21}; //texts[]={"Very Low","Low","Normal","High"};
        default = 200;
    };
    class btc_p_city_radius { // Spawn city radius offset:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_SPAWNRAD"]);
        values[]={0,1,2,3,4,5,6,7,8};
        texts[]={"0 m","100 m","200 m",$STR_BTC_HAM_PARAM_OTHER_SPAWNRAD_DEF,"400 m","500 m (Takistan)","600 m","700 m","800 m"}; // texts[]={"0 m","100 m","200 m","300 m","400 m","500 m (Takistan)","600 m","700 m","800 m"};
        default = 8;
    };
    class btc_p_trigger { // Disable city activation when a plane or helicopter (>190Km/h) is flying above:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_DISABLESPAWN"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_auto_headless { // Autodetect Headless client:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_AUTOHEADLESS"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_debug { // Debug:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_DEBUG"]);
        values[]={0,1,2};
        texts[]={$STR_DISABLED,$STR_ENABLED, $STR_BTC_HAM_PARAM_OTHER_DEBUG_LOGONLY}; // texts[]={"Off","On","Log only"};
        default = 2;
    };
};

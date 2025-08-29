class CfgPatches
{
    class Superbullet_rhsusaf
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Weapons_F","Superbullet","rhsusf_weapons","rhsusf_c_weapons"};
        magazines[] = {"30Rnd_556x45_Super_PMAG", "30Rnd_556x45_Super_Puller"};
    };
};

class CfgMagazines
{   
    //PMAG
    class rhs_mag_30Rnd_556x45_M855A1_PMAG;

    class 30Rnd_556x45_Super_PMAG : rhs_mag_30Rnd_556x45_M855A1_PMAG
    {
        author = "Henderson";
        displayName = "5.56mm 30Rnd Super PMAG";
        ammo = "B_556x45_Super";
        descriptionShort = "Super Armor-Piercing Rounds PMAG";
    };
    
    //Puller
    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull;
    
    class 30Rnd_556x45_Super_Puller : rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull
    {
        author = "Henderson";
        displayName = "5.56mm 30Rnd Super Puller";
        ammo = "B_556x45_Super";
        descriptionShort = "Super Armor-Piercing Rounds Puller";
    };
};

class CfgMagazineWells
{
    class STANAG_556x45
    {
        Superbullet_RHS_Mags[] = {"30Rnd_556x45_Super_PMAG", "30Rnd_556x45_Super_Puller"};
    };
};
class CfgPatches
{
    class CL_Core
    {
        author = "Queen";
        requiredAddons[]=
        {
            "fallout_uniform",
        };
    };
    weapons[]=
    {};
    units[]=
    {
       "CL_Radio_Pack_Legion", 
    };
};

class CfgWeapons
{};

class CfgVehicles
{
    class Rucksack_prc77_small_Rucksack_Bag_CL;

    class CL_Radio_Pack_Legion: Rucksack_prc77_small_Rucksack_Bag_CL
    {
        author = "Queen";
        scope = 2;
        displayName = "[Legion] AN/PRC77 Small Backpack";
        isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
        tf_range=75000;
        tf_encryptionCode="tf_east_radio_code";        
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_dialog = "mr3000_radio_dialog";
		tf_hasLRradio=1;
		tf_subtype="digital_lr";
    };
};

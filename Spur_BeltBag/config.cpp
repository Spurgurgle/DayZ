class CfgPatches
{
	class Spur_BeltBag
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"  
		};
	};
};
class CfgMods
{
	class Spur_BeltBag
	{
		dir="Spur_BeltBag";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="Spur_BeltBag";
		credits=""; 
		author="";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			//"Game",
			"World"//,
			//"Mission"
		};
		class defs
		{
/*			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Spur_BeltBag/scripts/3_game"
				};
			};
*/
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Spur_BeltBag/scripts/4_world"
				};
			};
/*			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Spur_BeltBag/scripts/5_mission"
				};
			};
*/
		};
	};
};
class CfgVehicles
{
	class Container_Base;
	class Spur_BeltBag: Container_Base
	{
		displayName="Spurgle's Belt Bag";
		descriptionShort="A small bag for your belt";
		model="\Spur_BeltBag\Spur_BeltBag.p3d";
		rotationFlags=17;
		weight=140;
		itemSize[]={3,3};
		itemsCargoSize[]={3,3};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		canBeDigged=1;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"Camo"
		};
		inventorySlot[]=
		{
			"Belt_Left"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								"Spur_BeltBag\data\BeltBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_BeltBag\data\BeltBag.rvmat"
							}
						},
						
						{
							0.50,
							
							{
								"Spur_BeltBag\data\BeltBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_BeltBag\data\BeltBag_damage.rvmat"
							}
						},
						
						{
							0.00,
							
							{
								"Spur_BeltBag\data\BeltBag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class Spur_BeltBag_Black: Spur_BeltBag
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\Spur_BeltBag\data\BeltBag_Black_co.paa"
		};
	};
	class Spur_BeltBag_Blue: Spur_BeltBag
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\Spur_BeltBag\data\BeltBag_Blue_co.paa"
		};
	};
	class Spur_BeltBag_Brown: Spur_BeltBag
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\Spur_BeltBag\data\BeltBag_Brown_co.paa"
		};
	};
	class Spur_BeltBag_Green: Spur_BeltBag
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\Spur_BeltBag\data\BeltBag_Green_co.paa"
		};
	};
	class Spur_BeltBag_Red: Spur_BeltBag
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\Spur_BeltBag\data\BeltBag_Red_co.paa"
		};
	};	
};
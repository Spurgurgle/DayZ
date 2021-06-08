class CfgPatches
{
	class Spur_RustyMetalBox
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Cultivation",
			"DZ_Gear_Drinks"
		};
	};
};
class CfgMods
{
	class Spur_RustyMetalBox
	{
		dir="Spur_RustyMetalBox";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="Spur_RustyMetalBox";
		credits=""; 
		author="";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			//"Game",
			"World",
			//"Mission"
		};
		class defs
		{
			class imageSets
            {
                files[]=
                {
                    "Spur_RustyMetalBox/gui/imagesets/Spur_RMB_Slots.imageset"
                };
            };
/*			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Spur_RustyMetalBox/scripts/3_game"
				};
			};
*/
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Spur_RustyMetalBox/scripts/4_world"
				};
			};
/*			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Spur_RustyMetalBox/scripts/5_mission"
				};
			};
*/
		};
	};
};
class CfgVehicles
{
	class Container_Base;
	class Spur_RustyMetalBox_ColorBase: Container_Base
	{
		scope=0;
		displayName="Rusty Metal Box";
		descriptionShort="A sample mod by Spurgle";
		model="\Spur_RustyMetalBox\RustyMetalBox.p3d";
		hologramMaterial="RustyMetalBox";
		hologramMaterialPath="Spur_RustyMetalBox\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={10,7};
		carveNavmesh=1;
		canBeDigged=1;		
		physLayer="item_large";
		rotationFlags=0;
		attachments[]=
		{
			"Knife",
			"SeedsPack",
			"SeedsPack01",
			"SeedsPack02",
			"SeedsPack03",
			"waterbottle",
			"waterbottle01"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=600;
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								"Spur_RustyMetalBox\data\RustyMetalBox.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_RustyMetalBox\data\RustyMetalBox.rvmat"
							}
						},
						
						{
							0.51,
							
							{
								"Spur_RustyMetalBox\data\RustyMetalBox_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_RustyMetalBox\data\RustyMetalBox_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"Spur_RustyMetalBox\data\RustyMetalBox_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,7};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class Lid
			{
				source="user";
				initPhase=0;
				animPeriod=1.5;
			};
			
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="barrel_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="barrel_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Spur_RustyMetalBox_Black: Spur_RustyMetalBox_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\Spur_RustyMetalBox\data\RustyMetalBox_Black_co.paa"
		};
	};
	class Spur_RustyMetalBox_Blue: Spur_RustyMetalBox_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\Spur_RustyMetalBox\data\RustyMetalBox_Blue_co.paa"
		};
	};
	class Spur_RustyMetalBox_Red: Spur_RustyMetalBox_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\Spur_RustyMetalBox\data\RustyMetalBox_Red_co.paa"
		};
	};
	class Spur_RustyMetalBox_Green: Spur_RustyMetalBox_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\Spur_RustyMetalBox\data\RustyMetalBox_Green_co.paa"
		};
	};
	class Spur_RustyMetalBox_Yellow: Spur_RustyMetalBox_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\Spur_RustyMetalBox\data\RustyMetalBox_Yellow_co.paa"
		};
	};
	class Inventory_Base;
	class TomatoSeedsPack: Inventory_Base
	{
		inventorySlot[]=
		{
			"SeedsPack",
			"SeedsPack01",
			"SeedsPack02",
			"SeedsPack03"
		};		
	};
	class PepperSeedsPack: Inventory_Base
	{
		inventorySlot[]=
		{
			"SeedsPack",
			"SeedsPack01",
			"SeedsPack02",
			"SeedsPack03"
		};
	};
	class PumpkinSeedsPack: Inventory_Base
	{
		inventorySlot[]=
		{
			"SeedsPack",
			"SeedsPack01",
			"SeedsPack02",
			"SeedsPack03"
		};
	};
	class ZucchiniSeedsPack: Inventory_Base
	{
		inventorySlot[]=
		{
			"SeedsPack",
			"SeedsPack01",
			"SeedsPack02",
			"SeedsPack03"
		};
	};
	class Bottle_Base;
	class WaterBottle: Bottle_Base
	{
		inventorySlot[]=
		{
			"waterbottle",
			"waterbottle01"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySeedsPack_slot: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"SeedsPack"			
		};
		model="\Spur_RustyMetalBox\proxy\SeedsPack_slot.p3d";
	};
	class ProxySeedsPack_slot01: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"SeedsPack01"			
		};
		model="\Spur_RustyMetalBox\proxy\SeedsPack_slot01.p3d";
	};
	class ProxySeedsPack_slot02: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"SeedsPack02"			
		};
		model="\Spur_RustyMetalBox\proxy\SeedsPack_slot02.p3d";
	};
	class ProxySeedsPack_slot03: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"SeedsPack03"			
		};
		model="\Spur_RustyMetalBox\proxy\SeedsPack_slot03.p3d";
	};
	class ProxyRMB_slots: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"waterbottle",
			"waterbottle01"			
		};
		model="\Spur_RustyMetalBox\proxy\RMB_slots.p3d";
	};
	
};
class CfgSlots
{
	class Slot_SeedsPack
	{
		name="SeedsPack";
		displayName="Seed Pack";
		ghostIcon="set:Spur_RMB_Slots image:SeedsPack";
	};
	class Slot_SeedsPack01
	{
		name="SeedsPack01";
		displayName="Seed Pack";
		ghostIcon="set:Spur_RMB_Slots image:SeedsPack";
	};
	class Slot_SeedsPack02
	{
		name="SeedsPack02";
		displayName="Seed Pack";
		ghostIcon="set:Spur_RMB_Slots image:SeedsPack";
	};
	class Slot_SeedsPack03
	{
		name="SeedsPack03";
		displayName="Seed Pack";
		ghostIcon="set:Spur_RMB_Slots image:SeedsPack";
	};
	class Slot_waterbottle
	{
		name="waterbottle";
		displayName="water bottle";
		selection="waterbottle01";
		ghostIcon="set:Spur_RMB_Slots image:WaterBottle";
	};
	class Slot_waterbottle01
	{
		name="waterbottle01";
		displayName="water bottle";
		selection="waterbottle02";
		ghostIcon="set:Spur_RMB_Slots image:WaterBottle";
	};
};

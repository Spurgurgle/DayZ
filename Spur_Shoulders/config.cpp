class CfgPatches
{
	class Spur_Shoulders
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class Spur_Shoulders
	{
		dir="Spur_Shoulders";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Spur_Shoulders";
		credits="Spurgle  Cleetus";
		author="Spurgle";
		authorID="76561198120653239";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Spur_Shoulders/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Spur_Shoulders/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Spur_Shoulders/scripts/5_mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Spur_Shoulders: Inventory_Base
	{
		scope=2;
		displayName="Testing";
		descriptionShort="A Demo for Player shoulder weapon slots";
		model="Spur_Shoulders\Spur_Shoulders.p3d";
		itemBehaviour=0;
		physLayer="item_large";
		weight=10000;
		itemSize[]={7,6};
		absorbency=0;
		rotationFlags=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp
				{
					soundSet="hatchbackdoors_driver_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="hatchbackdoors_driver_drop_SoundSet";
					id=898;
				};
			};
		};
		// The below is needed for weapon slots.
		attachments[]=
		{
			"Melee",
			"Shoulder"
		};	
		class GUIInventoryAttachmentsProps
		{
			class Attachments
			{
				name="Attachments";
				description="";
				icon="cat_common_cargo";
				attachmentSlots[]=
				{
					"Melee",
					"Shoulder"
				};
			};
		};
		simpleHiddenSelections[]=
        {
            "slot_melee_rifle",
            "slot_melee_melee",
			"slot_shoulder_rifle",
			"slot_shoulder_melee"
        };
	};
};




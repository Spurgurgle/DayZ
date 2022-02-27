class CfgPatches
{
	class Spur_ClotheZ
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgMods
{
	class Spur_ClotheZ
	{
		dir="Spur_ClotheZ";
		picture="";
		action="https://discord.gg/KuJZDvP";
		hideName=1;
		hidePicture=1;
		name="Spur_ClotheZ";
		credits="Spurgle";
		author="Spurgle";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Spur_ClotheZ/scripts/4_world"
				};
			};
		};
	};
};
class cfgVehicles
{
	class Clothing;
	class Spur_LeatherJacket_ColorBase: Clothing
	{
		displayName="Spurgle's Leather Jacket";
		descriptionShort="Spurgle's Leather Jacket";
		model="Spur_ClotheZ\Spur_LeatherJacket_g.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		rotationFlags=64;
		weight=2000;
		itemSize[]={4,4};
		itemsCargoSize[]={6,5};
		quickBarBonus=1;
		varWetMax=0.39;
		heatIsolation=0.79;
		repairableWithKits[]={3};
		repairCosts[]={25};
		soundAttType="LeatherJacket";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Spur_ClotheZ\data\Spur_LeatherJacket.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"Spur_ClotheZ\data\Spur_LeatherJacket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Spur_ClotheZ\data\Spur_LeatherJacket_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"Spur_ClotheZ\data\Spur_LeatherJacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Spur_ClotheZ\data\Spur_LeatherJacket_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.69;
					};
					class Blood
					{
						damage=0.69;
					};
					class Shock
					{
						damage=0.85;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.71;
					};
					class Blood
					{
						damage=0.71;
					};
					class Shock
					{
						damage=0.85;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Spur_ClotheZ\Spur_LeatherJacket_m.p3d";
			female="Spur_ClotheZ\Spur_LeatherJacket_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Spur_LeatherJacket_Black: Spur_LeatherJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.85;
		hiddenSelectionsTextures[]=
		{
			"Spur_ClotheZ\data\Spur_LeatherJacket_black_co.paa",
			"Spur_ClotheZ\data\Spur_LeatherJacket_black_co.paa",
			"Spur_ClotheZ\data\Spur_LeatherJacket_black_co.paa"
		};
	};
};
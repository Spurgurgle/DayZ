class CfgPatches
{
	class BeginnerBasics
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Containers"  
		};
	};
};
class CfgMods
{
	class BeginnerBasics
	{
		dir="BeginnerBasics";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="BeginnerBasics";
		credits=""; 
		author="";
		authorID="0";  
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
					"BeginnerBasics/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"BeginnerBasics/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"BeginnerBasics/scripts/5_mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Container_Base;
	class FirstAidKit: Container_Base
	{
		scope=2;
		itemSize[]={4,4};
		itemsCargoSize[]={5,5};
		inventorySlot[]=
		{
			"Belt_Left"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\containers\data\firstaidkit_co.paa"
		};
	};
	class FirstAidKit_Black: FirstAidKit
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\BeginnerBasics\data\firstaidkit_black_co.paa"
		};
	};
	class Bear_ColorBase;
	class Bear_Black: Bear_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\BeginnerBasics\data\teddybear_black_co.paa"
		};
	};
};
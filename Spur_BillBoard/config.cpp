class CfgPatches
{
	class Spur_BillBoard
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			
		};
	};
};
class CfgMods
{
	class Spur_BillBoard
	{
		dir = "Spur_BillBoard";
		name = "Spur_BillBoard";
		credits = "Spurgle";
		author = "Spurgle";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = 
		{
			//"World"
		};
		class defs
		{
			//class worldScriptModule
			//{
			//	value="";
			//	files[]=
			//	{
			//		"Spur_BillBoard/scripts/4_world"
			//	};
			//};
		};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class Spur_BillBoard_Base :HouseNoDestruct
	{
		scope = 0;
		model = "Spur_BillBoard\Spur_BillBoard.p3d";
		hiddenSelections[]=
		{
			"Sinage"
		};
	};
	class Spur_BillBoard_1: Spur_BillBoard_Base
	{
		scope = 1;
		hiddenSelectionsTextures[]=
		{
			"Spur_BillBoard\data\Spur_BillBoard_Banner1.paa"
		};
	};
	class Spur_BillBoard_2: Spur_BillBoard_Base
	{
		scope = 1;
		hiddenSelectionsTextures[]=
		{
			"Spur_BillBoard\data\Spur_BillBoard_Banner2.paa"
		};
	};
};
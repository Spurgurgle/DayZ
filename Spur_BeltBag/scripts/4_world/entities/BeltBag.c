class Spur_BeltBag extends Container_Base
{
	override bool IsContainer()
	{
		return true;
	}
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo(parent) ) {return false;}	
		//better use something like super.GetName()
		if ( !(parent.IsKindOf("Spur_BeltBag")) )
		{
			return true;
		}
		
		return false;
	}
};

class Spur_BeltBag_Black : Spur_BeltBag
{
};

class Spur_BeltBag_Blue : Spur_BeltBag
{
};

class Spur_BeltBag_Brown : Spur_BeltBag
{
};

class Spur_BeltBag_Green : Spur_BeltBag
{
};

class Spur_BeltBag_Red : Spur_BeltBag
{
};
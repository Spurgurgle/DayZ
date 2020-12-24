class Source_CarWheel extends CarWheel {
	override void EEKilled(Object killer)
	{
		string newWheel = "";
		switch( GetType() )
		{
			case "Source_CarWheel":
				newWheel = "Source_CarWheel_Destroyed";
			break;
		}
		if ( newWheel != "" )
		{
			ReplaceWheelLambda lambda = new ReplaceWheelLambda ( this, newWheel, NULL);
			lambda.SetTransferParams(true, true, true);
			GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
		}
	}

	override int GetMeleeTargetType()
	{
		return EMeleeTargetType.NONALIGNABLE;
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionDetach);
		AddAction(ActionAttachOnSelection);
	}
};

class Source_CarWheel_Destroyed extends CarWheel {};
class SourceCar_DriverDoor extends CarDoor {};
class SourceCar_CodriverDoor extends CarDoor {};
class SourceCar_Cargo1 extends CarDoor {};
class SourceCar_Cargo2 extends CarDoor {};
class SourceCar_Hood extends CarDoor {};
class SourceCar_Trunk extends CarDoor {};


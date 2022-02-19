class Spur_LeatherJacket_ColorBase : Clothing 
{
		
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWringClothes);
	}
	
};
class Spur_LeatherJacket_Black : Spur_LeatherJacket_ColorBase {};
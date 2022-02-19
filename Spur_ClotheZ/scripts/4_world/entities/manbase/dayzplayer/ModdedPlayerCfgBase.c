modded class ModItemRegisterCallbacks
{
		
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("Spur_LeatherJacket_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, 						"dz/anims/anm/player/ik/camping/fabric.anm");
	};	
};


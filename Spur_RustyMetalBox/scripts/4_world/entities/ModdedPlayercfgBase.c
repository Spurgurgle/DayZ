modded class ModItemRegisterCallbacks
{
	override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterHeavy(pType, pBehavior);
		pType.AddItemInHandsProfileIK("Spur_RustyMetalBox_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,			 		"dz/anims/anm/player/ik/heavy/wooden_crate.anm");

	};	
};



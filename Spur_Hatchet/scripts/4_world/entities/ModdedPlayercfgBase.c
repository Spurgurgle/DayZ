modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("Spur_Hatchet", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,				"dz/anims/anm/player/ik/gear/Hatchet.anm"); 
	};	
};
modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("Spur_BeltBag", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior , 				"dz/anims/anm/player/ik/gear/first_aid_kit.anm");
	};

};


//pType.AddItemInHandsProfileIK("FirstAidKit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, 						"dz/anims/anm/player/ik/gear/first_aid_kit.anm");	
		
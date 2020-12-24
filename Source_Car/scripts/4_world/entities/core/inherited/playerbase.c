modded class ModItemRegisterCallbacks
{
    override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
		super.RegisterHeavy(pType, pBehavior);
		pType.AddItemInHandsProfileIK("Source_CarWheel", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_wheel.anm");
		pType.AddItemInHandsProfileIK("Source_CarWheel_Destroyed", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_wheel.anm");
		pType.AddItemInHandsProfileIK("SourceCar_DriverDoor", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_wheel.anm");
		pType.AddItemInHandsProfileIK("SourceCar_CodriverDoor", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_wheel.anm");
		pType.AddItemInHandsProfileIK("SourceCar_Cargo1", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_wheel.anm");
		pType.AddItemInHandsProfileIK("SourceCar_Cargo2", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_wheel.anm");
		pType.AddItemInHandsProfileIK("SourceCar_Hood", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_wheel.anm");
		pType.AddItemInHandsProfileIK("SourceCar_Trunk", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_wheel.anm");
																															//change these ^^^ to find a decent postion in hands for your parts^^^
	};
};

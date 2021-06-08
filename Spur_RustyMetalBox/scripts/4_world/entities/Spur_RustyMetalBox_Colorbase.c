class Spur_RustyMetalBox_ColorBase: DeployableContainer_Base
{
	private bool m_IsLocked = false;
	private ref Timer m_RMBOpener;
	
	protected ref OpenableBehaviour m_Openable;
	
	void Spur_RustyMetalBox_ColorBase()
	{
		m_RMBOpener = new Timer();

		m_Openable = new OpenableBehaviour(false);
		
		m_HalfExtents = Vector(0.15,0.25,0.4);
		
		RegisterNetSyncVariableBool("m_Openable.m_IsOpened");
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
		RegisterNetSyncVariableBool("m_IsPlaceSound");
	}
	
	override void EEInit()
	{
		super.EEInit();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
	}
	
	override int GetDamageSystemVersionChange()
	{
		return 110;
	}
	
	override void OnStoreSave( ParamsWriteContext ctx )
	{   
		super.OnStoreSave( ctx );
		
		ctx.Write( m_Openable.IsOpened() );
	}
	
	override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		
		bool opened;
		if ( version >= 110 && !ctx.Read( opened ) )
		{
			return false;
		}
		
		if ( opened )
		{
			Open();
		}
		else
		{
			Close();
		}
		
		return true;
	}
	
	bool IsLocked()
	{
		return m_IsLocked;
	}

	override void Open()
	{
		m_Openable.Open();
		GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		SoundSynchRemote();

		UpdateVisualState();
	}

	override void Close()
	{
		m_Openable.Close();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
		SoundSynchRemote();

		UpdateVisualState();
	}

	override bool IsOpen()
	{
		return m_Openable.IsOpened();
	}

	protected void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("Lid",1);
		}
		else
		{
			SetAnimationPhase("Lid",0);
		}
	}

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
				
		if ( IsPlaceSound() )
		{
			PlayPlaceSound();
		}
		else
		{
			if ( IsOpen() && IsSoundSynchRemote() && !IsBeingPlaced() )
			{
				SoundRMBOpenPlay();
			}
			
			if ( !IsOpen() && IsSoundSynchRemote() && !IsBeingPlaced() )
			{
				SoundRMBClosePlay();
			}
		}
		
		UpdateVisualState();
	}
	
	void SoundRMBOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "barrel_open_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}

	void Lock(float actiontime)
	{
		m_IsLocked = true;
		m_RMBOpener.Run(actiontime, this, "Unlock", NULL,false);
	}
	
	void Unlock()
	{
		m_IsLocked = false;
		Open();
	}
	
	void SoundRMBClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "barrel_close_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if ( !super.CanPutInCargo( parent ))
			return false;

		if ( GetNumberOfItems() == 0 && !IsOpen() )
			return true;

		return false;
	}
	
	override bool CanPutIntoHands( EntityAI parent )
	{
		if ( !super.CanPutIntoHands( parent ))
			return false;

		if ( GetNumberOfItems() == 0 && !IsOpen() )
			return true;

		return false;
	}
	
	override bool CanReceiveItemIntoCargo( EntityAI item )
	{
		if ( IsOpen() )
			return super.CanReceiveItemIntoCargo( item );
		
		return false;
	}
	
	override bool CanReleaseCargo( EntityAI attachment )
	{
		return IsOpen();
	}
	
	//================================================================
	// ADVANCED PLACEMENT
	//================================================================
	
	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{
		super.OnPlacementComplete( player, position, orientation );
			
		SetIsPlaceSound( true );
	}
	
	override string GetPlaceSoundset()
	{
		return "placeBarrel_SoundSet";
	}
	
	override void SetActions()
	{
		//AddAction(ActionAttachOnSelection);
		super.SetActions();
		AddAction(ActionOpenRMB);
		AddAction(ActionCloseRMB);
	}
};

class Spur_RustyMetalBox_Black: Spur_RustyMetalBox_ColorBase {};
class Spur_RustyMetalBox_Blue: Spur_RustyMetalBox_ColorBase {};
class Spur_RustyMetalBox_Red: Spur_RustyMetalBox_ColorBase {};
class Spur_RustyMetalBox_Green: Spur_RustyMetalBox_ColorBase {};
class Spur_RustyMetalBox_Yellow: Spur_RustyMetalBox_ColorBase {};
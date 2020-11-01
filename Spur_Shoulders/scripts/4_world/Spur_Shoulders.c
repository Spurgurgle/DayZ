class Spur_Shoulders extends ItemBase 
{
	//the SimpleHiddenSelection Script thanks to Cleetus for helping with this part
	override void EEItemAttached(EntityAI item, string slot_name)
    {
        super.EEItemAttached(item, slot_name);
        if (slot_name == "Melee") UpdateWeaponProxyVisibility(item.IsWeapon());
		
		if (slot_name == "Shoulder") UpdateRifleProxyVisibility(item.IsMeleeWeapon());
    }

    void UpdateWeaponProxyVisibility(bool boo)  //Melee slot
    {
        SetSimpleHiddenSelectionState(0, boo);
        SetSimpleHiddenSelectionState(1, !boo);
    }
	void UpdateRifleProxyVisibility(bool boo)   //Shoulder slot
    {
		SetSimpleHiddenSelectionState(2, !boo);
        SetSimpleHiddenSelectionState(3, boo);
    }
	//^^^^ the important stuff^^^
	
	override bool CanPutIntoHands(EntityAI parent)
	{
        if (HasAttachments())
            return false;

        return super.CanPutIntoHands(parent);
	}
	override bool CanPutInCargo(EntityAI parent)
	{
        if (HasAttachments())
            return false;

        return super.CanPutInCargo(parent);
	}
	bool HasAttachments()
    {
        if (HasMelee() || HasShoulder())
            return true;

        return false;
    }
	bool HasMelee()
    {
        EntityAI m_Melee = FindAttachmentBySlotName("Melee");

        if (m_Melee)
            return true;
        
        return false;
    }

    bool HasShoulder()
    {
        EntityAI m_Shoulder = FindAttachmentBySlotName("Shoulder");

        if (m_Shoulder)
            return true;
        
        return false;
    }
};
//I forgot to explain these in the video use them to give the items the action to attach whilst looking at the item your trying to attach them to.
// to give rifles the option to attach when looking at the item. 
modded class Weapon_Base extends Weapon //for rifles
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
// to give melee weapons the option to attach when looking at the item.
modded class ItemBase extends InventoryItem  //for melee (and all other itembase items. if they have a slot....)
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
//^^^^ 
modded class ModItemRegisterCallbacks
{
    override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterHeavy(pType, pBehavior);
        pType.AddItemInHandsProfileIK("Spur_Shoulders", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_wheel.anm");
    };
};
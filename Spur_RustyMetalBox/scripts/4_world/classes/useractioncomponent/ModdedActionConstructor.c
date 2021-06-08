modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions)
		actions.Insert(ActionOpenRMB);
		actions.Insert(ActionCloseRMB);
	};
};
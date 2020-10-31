modded class DayZPlayerCamera3rdPersonVehicle extends DayZPlayerCameraBase
{
    void DayZPlayerCamera3rdPersonVehicle (DayZPlayer pPlayer, HumanInputController pInput)
    {
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "Source_Car_Green")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance         = 6.5; 
		m_CameraOffsetMS    = "0.0 1.5 0.0";
		}
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "Source_Car_Red")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance         = 6.5; 
		m_CameraOffsetMS    = "0.0 1.5 0.0";
		}
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "Source_Car_Blue")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance         = 6.5; 
		m_CameraOffsetMS    = "0.0 1.5 0.0";
		}
    }
}
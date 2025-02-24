modded class MissionServer {

    // MARK: - Override

    override void OnInit() {
        super.OnInit();
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLaterByName(this, "RF_BasicMap_SE_Init", 10 * 1000, false);
    }

    // MARK: - Private

    private void RF_BasicMap_SE_Init() {
        RF_BasicMap_SE_Global.InitializeUnits();
    }
}
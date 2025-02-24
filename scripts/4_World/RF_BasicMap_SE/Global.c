class RF_BasicMap_SE_Global: Managed {

    // MARK: - Static Properties

    static ref RFDiscordService discord;

    static ref RF_BasicMap_SE_RPCInstance rpc;

    // MARK: - Internal Static

    // MARK: - Static

    static void InitializeUnits() {
        discord = new RFDiscordService();
        rpc = new RF_BasicMap_SE_RPCInstance();
    }
}
class RF_BasicMap_SE_RPCInstance: RF_RPCInstance {

    // MARK: - Override Properties

    override int GetRPCType() { return RF_BasicMap_Constant.RPC_TYPE; }

    override string GetModName() { return RF_BasicMap_Constant.MOD_NAME; }

    // MARK: - Override

    override void Handle(PlayerIdentity sender, string key, ParamsReadContext ctx) {
        super.Handle(sender, key, ctx);
        switch (key) {
            case "didPressKey": {
                handleDidPressKey(sender, ctx);
                break;
            }
        }
    }

    // MARK: - Handlers

    private void handleDidPressKey(PlayerIdentity sender, ParamsReadContext ctx) {
        int object;
        ctx.Read(object);
        if (!object) return;
        
        auto message = string.Format("Did Receive %1", object);

        RF_BasicMap_Log().Info(message);

        Send("didReceiveKeyString", message, sender);
        Send("didReceiveKeyInt", object, sender);
    }
}
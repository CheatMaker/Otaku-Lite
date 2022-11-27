//
// Created by DiamondCoder1000 on 11/23/22.
//

#include "Sprint.h"
#include "net/minecraft/client/settings/KeyBinding"

Sprint::Sprint() : Cheat("Sprint", "Like ToggleSprint") {}

void Sprint::run(Minecraft *mc) {
    //This does NOT work 
    mc->KeyBinding.setKeyBindState(mc.gameSettings.keyBindSprint.getKeyCode(), true);
}

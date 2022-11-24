#include "net/minecraft/entity/player/PlayerCapabilities.h"
Speed::Speed(Phantom *phantom) : Cheat("Speed", "Makes you walk faster.") {
    this->phantom = phantom;

    float float_t69 = 1;
    
}

void Speed::run(Minecraft *mc) {
    PlayerCapabilities.setPlayerWalkingSpeed(float_t69);
}

void Speed::renderSettings() {
    ImGui::SliderFloat("Speed", &float_t69, 0, 6, "%.2f");   
}

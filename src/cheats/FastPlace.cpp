//
// Created by somepineaple on 4/29/22.
//

#include "FastPlace.h"

FastPlace::FastPlace() : Cheat("Fast Place", "Places blocks faster & stuff") {
    float delay;
}

void FastPlace::run(Minecraft *mc) {
    mc->setRightClickDelayTimer(this->delay);
}

void Speed::renderSettings() {
    ImGui::SliderFloat("Speed", &delay, 0, 4, "%.2f");   
}

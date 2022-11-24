#include "Timer.h"

Timer::Timer() : Cheat("Timer",  "Increase the ticks per second") {
	this->SliderInt("ticks per second", &this->timer, this->timer, 0, 500);
}


void Timer::run(C_GameMode* gm) {
	*g_Data.getClientInstance()->minecraft->timer = static_cast<float>(this->timer);
}

void Timer::onDisable() {
	*g_Data.getClientInstance()->minecraft->timer = 20.f;
}

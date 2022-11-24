#ifndef PHANTOM_SPEED_H
#define PHANTOM_Speed_H


#include "Cheat.h"

class PlayerCapabilities;
class Speed : public Cheat {
public:
    explicit Speed(Phantom *phantom);

    void run(Minecraft *mc) override;
    void renderSettings() override;
private:
    Phantom *phantom;
};


#endif //PHANTOM_SPEED_H

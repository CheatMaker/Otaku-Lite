//
// Created by DiamondCoder1000 on 11/23/22
//

#ifndef PHANTOM_SPRINT_H
#define PHANTOM_SPRINT_H

#include "Cheat.h"

class EntityPlayer;
class AimAssist : public Cheat {
public:
    explicit Sprint(Phantom *phantom);

    void run(Minecraft *mc) override;
};


#endif //PHANTOM_SPRINT_H

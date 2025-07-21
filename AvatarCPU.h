#ifndef AVATARCPU_H
#define AVATARCPU_H

#include "Avatar.h"

class AvatarCPU : public Avatar {
public:
    AvatarCPU();

    // Sobrescribe mover para que el avatar se mueva aleatoriamente
    void mover(char direccion = ' ') override;
};

#endif

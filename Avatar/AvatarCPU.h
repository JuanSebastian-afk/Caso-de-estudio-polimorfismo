#ifndef AVATARCPU_H
#define AVATARCPU_H

#include "Avatar.h"

class AvatarCPU : public Avatar {
public:
    AvatarCPU();

    void mover(char direccion = ' ') override;
};

#endif

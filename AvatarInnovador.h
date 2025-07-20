#ifndef AVATARINNOVADOR_H
#define AVATARINNOVADOR_H

#include "Avatar.h"

class AvatarInnovador : public Avatar {
private:
    int paso;  // Control del patrón de movimiento
public:
    AvatarInnovador();

    // Sobrescribe el método mover para implementar el movimiento creativo
    void mover(char direccion = ' ') override;
};

#endif

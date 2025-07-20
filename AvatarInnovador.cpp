#include "AvatarInnovador.h"
#include <iostream>

AvatarInnovador::AvatarInnovador() : paso(0) {}

// Movimiento en patrón tipo Z.
void AvatarInnovador::mover(char) {
    switch (paso % 4) {
        case 0:
            Avatar::mover('D'); break;
        case 1:
            Avatar::mover('S'); break;
        case 2:
            Avatar::mover('A'); break;
        case 3:
            Avatar::mover('S'); break;
    }
    paso++;  // Avanza al siguiente paso del patrón
}

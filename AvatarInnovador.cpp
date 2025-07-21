#include "AvatarInnovador.h"
#include <iostream>

AvatarInnovador::AvatarInnovador() : paso(0) {}

// Movimiento en patrón tipo Z.
void AvatarInnovador::mover(char) {
    switch (paso % 4) {
        case 0:
            Avatar::mover('D'); break;  //Derecha
        case 1:
            Avatar::mover('S'); break;  //Abajo
        case 2:
            Avatar::mover('A'); break;  //Izquierda
        case 3:
            Avatar::mover('S'); break;  //Abajo
    }
    paso++;  // Avanza al siguiente paso del patrón
}

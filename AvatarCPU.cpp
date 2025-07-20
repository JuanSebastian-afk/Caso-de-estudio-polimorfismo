#include <cstdlib>
#include <ctime>
#include "Avatar.h"

class AvatarCPU : public Avatar {
public:
    AvatarCPU() {
        std::srand(time(nullptr));  // Inicializa la semilla del random
    }

    void mover(char = ' ') override {  // Ignora el parámetro dirección
        int direccion = std::rand() % 4;
        switch (direccion) {
            case 0: Personaje::mover('W'); break;
            case 1: Personaje::mover('S'); break;
            case 2: Personaje::mover('A'); break;
            case 3: Personaje::mover('D'); break;
        }
    }
};

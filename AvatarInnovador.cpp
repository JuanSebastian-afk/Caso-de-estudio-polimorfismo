class AvatarInnovador : public Avatar {
private:
    int paso = 0;
public:
    void mover(char = ' ') override {
        switch (paso % 4) {
            case 0: Personaje::mover('D'); break;  // Derecha
            case 1: Personaje::mover('S'); break;  // Abajo
            case 2: Personaje::mover('A'); break;  // Izquierda
            case 3: Personaje::mover('S'); break;  // Abajo
        }
        paso++;
    }
};

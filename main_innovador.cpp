#include "Tablero.h"
#include "Juego.h"
#include "LogicaDeMovimiento.h"
#include "VistaConsola.h"
#include "Avatar.h"
#include "AvatarCPU.h"
#include "AvatarInnovador.h"

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(nullptr));  // Inicializa generador aleatorio

    // Crea el tablero y cargar datos
    Tablero tablero;
    tablero.cargarDesdeArchivo("dataTablero.txt");

    // Crear los personajes
    IPersonaje* avatar = new Avatar();                   // Controlado por usuario
    IPersonaje* cpu = new AvatarCPU();                   // Movimiento aleatorio
    IPersonaje* innovador = new AvatarInnovador();       // Movimiento tipo "Z"

    // Establece posiciones iniciales
    avatar->setPosicionFila(2); avatar->setPosicionColumna(2);
    cpu->setPosicionFila(10); cpu->setPosicionColumna(5);
    innovador->setPosicionFila(5); innovador->setPosicionColumna(10);

    // Vector de personajes
    vector<IPersonaje*> jugadores = { avatar, cpu, innovador };

    // Lógica del juego
    LogicaDeMovimiento logica;
    Juego juego(&tablero, jugadores, &logica, true);
    VistaConsola vista(&tablero, jugadores);

    // Ciclo principal del juego
    while (juego.getEstado()) {
        vista.mostrarJuego();
        vista.mostrarMensaje("Digite su movimiento: ");
        char entrada = vista.getEntradaConsola();
        logica.mover(jugadores, entrada);  
        juego.mover();  
    }

    // Liberar memoria
    for (auto pj : jugadores)
        delete pj;

    return 0;
}

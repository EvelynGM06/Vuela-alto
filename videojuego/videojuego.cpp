#include "personaje.cpp"
#include "enemigo.cpp"
#include "arma.cpp"
#include "mochila.cpp"
#include "objeto.cpp"
#include "propiedades.cpp"

int main() {
    // Crear personaje
    Objeto posicionPersonaje(1, 2);
    Propiedades caracteristicasPersonaje("Jugador", 100, 5, 10);
    Mochila mochilaPersonaje;
    Personaje personaje(posicionPersonaje, caracteristicasPersonaje);

    // Crear enemigo
    Objeto posicionEnemigo(3, 4);
    Propiedades caracteristicasEnemigo("Enemigo", 50, 3, 5);
    Enemigo enemigo(posicionEnemigo, caracteristicasEnemigo);

    // Crear arma
    Objeto posicionArma(5, 6);
    Propiedades caracteristicasArma("Espada", 20, 1, 3);
    int factorPotenciador = 2;
    Arma arma(posicionArma, caracteristicasArma);
    arma.setFactorPotenciador(factorPotenciador);

    // Agregar arma a la mochila del personaje
    mochilaPersonaje.agregarObjeto(new Arma(arma));

    // Actualizar propiedades del personaje y enemigo
    personaje.actualizarPropiedades();
    enemigo.actualizarPropiedades();

    // Imprimir estado del juego
    std::cout << "Personaje:" << std::endl;
    std::cout << "Posicion: (" << personaje.getPosicion().getCoordenadaX() << ", " << personaje.getPosicion().getCoordenadaY() << ")" << std::endl;
    std::cout << "Vidas: " << personaje.getCaracteristicas().getNumVidas() << std::endl;
    std::cout << "Capacidad ofensiva: " << personaje.getCaracteristicas().getCapacidadOfensiva() << std::endl;

    std::cout << "Enemigo:" << std::endl;
    std::cout << "Posicion: (" << enemigo.getPosicion().getCoordenadaX() << ", " << enemigo.getPosicion().getCoordenadaY() << ")" << std::endl;
    std::cout << "Vidas: " << enemigo.getCaracteristicas().getNumVidas() << std::endl;
    std::cout << "Capacidad ofensiva: " << enemigo.getCaracteristicas().getCapacidadOfensiva() << std::endl;

    return 0;
}

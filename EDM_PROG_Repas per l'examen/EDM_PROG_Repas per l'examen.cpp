#include <iostream>  // Inclusió de la llibreria d'entrada/sortida
#include <climits>  // Inclusió de la llibreria per a valors límit

using namespace std;  // Espai de noms per a utilitzar les entitats de la llibreria standard

int main() {  // Funció principal del programa
    int files, columnes;  // Declaració de les variables per emmagatzemar el nombre de files i columnes

    // Sol·licitar a l'usuari la quantitat de files i columnes
    cout << "Introdueix el nombre de files: entre 1 a 10   ";
    cin >> files;

    cout << "Introdueix el nombre de columnes: entre 1 a 10 ";
    cin >> columnes;

    // Crear la matriu per emmagatzemar les puntuacions
    int matriu[10][10];

    // Llegir les puntuacions de l'usuari i trobar els valors mínim i màxim
    int minim = INT_MAX;
    int maxim = INT_MIN;

    for (int i = 0; i < files; ++i) {
        for (int j = 0; j < columnes; ++j) {
            cout << "Introdueix la puntuacio per la fila " << i + 1 << " i la columna " << j + 1 << ": ";
            cin >> matriu[i][j];


            // Actualitzar els valors mínim i màxim
            minim = min(minim, matriu[i][j]);
            maxim = max(maxim, matriu[i][j]);
        }
    }

    // Mostrar els resultats
    cout << "El valor mes petit es: " << minim << endl;
    cout << "El valor mes gran es: " << maxim << endl;

    return 0;  // Indicació d'èxit del programa
}


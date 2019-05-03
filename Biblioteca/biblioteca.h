//
// Created by user on 5/3/2019.
//

#ifndef UNTITLED2_BIBLIOTECA_H
#define UNTITLED2_BIBLIOTECA_H
#include <iostream>
#include "volumen.h"
#include <vector>

#include <iostream>
#include <vector>
#include "Volumen.h"

using namespace std;

class Biblioteca {

    int maxLibros;
    int maxRevistas;
    vector<Volumen*> v;

public:
    Biblioteca():maxLibros{0},maxRevistas{0},v{}{};
    void mostrarBiblioteca();
    void incluir(string titulo, int lor );
    int volumentotal();

};


#endif //UNTITLED2_BIBLIOTECA_H

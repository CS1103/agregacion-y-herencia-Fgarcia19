//
// Created by user on 5/3/2019.
//

#ifndef UNTITLED2_LIBRO_H
#define UNTITLED2_LIBRO_H

#include "Volumen.h"

class Libro: public Volumen {
private:
    int numLibros;
public:
    Libro(string tit,int vol,int numLibros);
    void mostrar() override;
};



#endif //UNTITLED2_LIBRO_H

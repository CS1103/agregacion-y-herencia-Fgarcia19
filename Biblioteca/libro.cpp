//
// Created by user on 5/3/2019.
//
#include "Libro.h"
Libro::Libro(string tit,int vol,int numLibros):Volumen(tit,vol),numLibros{numLibros}{}

void Libro::mostrar()
{
    cout<<"Volumen "<<numVol+1<<": Libro "<<numLibros+1<<" título: "<<nombre<<endl;
}
//
// Created by user on 5/3/2019.
//
#include "Revista.h"
Revista::Revista(string tit, int vol, int numRevistas):Volumen(tit,vol),numRevistas{numRevistas}{}

void Revista::mostrar()
{
    cout<<"Volumen "<<numVol+1<<": Revista "<<numRevistas+1<<" título: "<<nombre<<endl;
}
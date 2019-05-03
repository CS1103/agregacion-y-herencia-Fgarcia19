//
// Created by user on 5/3/2019.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "biblioteca.h"

SCENARIO("Volumen"){
    GIVEN("BIBLIOTECA"){
        WHEN("Agrego 3 libros y tres revistas"){
            Biblioteca bib;
            bib.incluir("A",0);
            bib.incluir("B",1);
            bib.incluir("C",0);
            bib.incluir("D",1);
            bib.incluir("E",0);
            auto Total=bib.volumentotal();
            THEN("Total es 5"){
                REQUIRE(Total==5);
            }
        }
    }
}

#include <iostream>
#include "IAuto.h"
#include "Skoda.h"
#include "Mercedes.h"
#include "Autohaendler.h"

int main() {
    Autohaendler heandler;
    Skoda skoda;
    Mercedes mercedes;
    IAuto* car;


    //Methode 1:
    skoda.getKennzeichen();
    skoda.farbe();

    printf("------\n");
    //Methode 2:
    car = &skoda;
    car->farbe();
    car->getKennzeichen();

    printf("------\n");
    //Methode 3:
    heandler.setDevice(&mercedes);
    heandler.verlgeiche(&skoda);

    return 0;
}

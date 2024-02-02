//
// Created by flori on 02.02.2024.
//

#include "Skoda.h"
#include <iostream>

void Skoda::farbe() {
    std::cout << "Der Skoda hat die Farbe Blau!" << std::endl;
}

std::string Skoda::getKennzeichen() {
    std::cout << "Der Skoda hat das Kennzeichen: " << this->Kennzeichen << std::endl;
    return this->Kennzeichen;
}

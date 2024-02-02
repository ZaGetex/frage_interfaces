//
// Created by flori on 02.02.2024.
//

#include "Mercedes.h"
#include <iostream>

void Mercedes::farbe() {
    std::cout << "Der Mercedes hat die Farbe Schwarz!" << std::endl;
}

std::string Mercedes::getKennzeichen() {
    std::cout << "Der Mercedes hat das Kennzeichen: " << this->Kennzeichen << std::endl;
    return this->Kennzeichen;
}

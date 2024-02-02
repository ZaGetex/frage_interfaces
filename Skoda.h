//
// Created by flori on 02.02.2024.
//

#ifndef FRAGE_INTERFACES_SKODA_H
#define FRAGE_INTERFACES_SKODA_H
#include "IAuto.h"
#include <string>

class Skoda: public IAuto {
private:
    int PS = 500;
    std::string Kennzeichen = "ABCD12";

public:
    void farbe();
    std::string getKennzeichen();
};


#endif //FRAGE_INTERFACES_SKODA_H

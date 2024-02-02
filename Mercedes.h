//
// Created by flori on 02.02.2024.
//

#ifndef FRAGE_INTERFACES_MERCEDES_H
#define FRAGE_INTERFACES_MERCEDES_H
#include "IAuto.h"
#include <string>

class Mercedes: public IAuto {
private:
    int gelaufene_km;
    std::string Kennzeichen = "CDEF13";

public:
    void farbe();
    std::string getKennzeichen();

};


#endif //FRAGE_INTERFACES_MERCEDES_H

//
// Created by flori on 02.02.2024.
//

#ifndef FRAGE_INTERFACES_IAUTO_H
#define FRAGE_INTERFACES_IAUTO_H
#include <string>
//INTERFACE KLASSE

class IAuto {
public:
    virtual ~IAuto() {};

    virtual void farbe() = 0;
    virtual std::string getKennzeichen() = 0;
};


#endif //FRAGE_INTERFACES_IAUTO_H

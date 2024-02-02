//
// Created by flori on 02.02.2024.
//

#ifndef FRAGE_INTERFACES_AUTOHAENDLER_H
#define FRAGE_INTERFACES_AUTOHAENDLER_H
#include "IAuto.h"

class Autohaendler {
private:
    IAuto* device;
public:
    Autohaendler() = default;
    virtual ~Autohaendler() = default;

    void setDevice(IAuto* device);
    void verlgeiche(IAuto* device2);
};


#endif //FRAGE_INTERFACES_AUTOHAENDLER_H

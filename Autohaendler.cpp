//
// Created by flori on 02.02.2024.
//

#include "Autohaendler.h"

void Autohaendler::setDevice(IAuto* device) {
    this->device = device;
}

void Autohaendler::verlgeiche(IAuto *device2) {
    this->device->farbe();
    device2->farbe();
}

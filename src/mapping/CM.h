//
// Created by somepineaple on 1/25/22.
//

#ifndef PHANTOM_CM_H
#define PHANTOM_CM_H

#include <map>
#include <string>
#include "Mem.h"

struct CM {
    const char* name;
    std::map<std::string, Mem> fields;
    std::map<std::string, Mem> methods;
    explicit CM(const char* clsName) : name(clsName) {}
};

#endif //PHANTOM_CM_H

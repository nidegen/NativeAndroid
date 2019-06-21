//
// Created by Nicolas Degen on 2019-06-20.
//

#include "na-engine.h"


int NAEngine::compute(int value) {
    int a = value * foo_.value_or(0);
    foo_ = value;
    return a;
}
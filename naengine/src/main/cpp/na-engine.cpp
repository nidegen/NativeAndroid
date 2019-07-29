//
// Created by Nicolas Degen on 2019-06-20.
//

#include "na-engine.h"

#include <string>
#include <fstream>
#include <streambuf>

int NAEngine::compute(int value) {
    int a = value * foo_.value_or(0);
    foo_ = value;
    return a;
}

std::string NAEngine::readFile(const std::string& path) {
    std::ifstream t(path);
    std::string str((std::istreambuf_iterator<char>(t)),
                    std::istreambuf_iterator<char>());
    return str;
}

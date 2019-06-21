//
// Created by Nicolas Degen on 2019-06-20.
//

#ifndef NATIVEANDROID_NAENGINE_H
#define NATIVEANDROID_NAENGINE_H

#include <optional>

class NAEngine {
public:
    int compute(int value);
private:
    std::optional<int> foo_;
};


#endif //NATIVEANDROID_NAENGINE_H

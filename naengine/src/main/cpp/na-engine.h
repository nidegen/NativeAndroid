//
// Created by Nicolas Degen on 2019-06-20.
//

#ifndef NATIVEANDROID_NAENGINE_H
#define NATIVEANDROID_NAENGINE_H

#include <string>
#include <optional>

class NAEngine {
public:
    int compute(int value);
    std::string readFile(const std::string& path);
        private:
    std::optional<int> foo_;
};


#endif //NATIVEANDROID_NAENGINE_H

#pragma once

#include <iostream>
#include <string>

class Greet {
    private:
        std::string msg;
    public:
        explicit Greet(const std::string& _msg) : msg(_msg) {}
        void Hello(void);
};
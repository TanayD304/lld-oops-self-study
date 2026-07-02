#pragma once
#include <bits/stdc++.h>

using namespace std;

class Car {
    private:
        std::string brand;
        int speed;

    public:
        Car();

        ~Car();

        void accelerate();

        void brake();

        void display();
};
#pragma once
#include <bits/stdc++.h>
#include "Car.h"

using namespace std;

Car::Car()
{
    cout << "Cons" << endl;
}

Car::~Car()
{
    cout << "Des" << endl;
}

Car::accelerate()
{
    cout << "accelerate" << endl;
}

Car::brake()
{
    cout << "brake" << endl;
}

Car::display()
{
    cout << "display" << endl;
}
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
    virtual ~Vehicle() = default;
    virtual void drive() = 0;
};

class Car : public Vehicle
{
public:
    void drive() override
    {
        cout << "Car is driving!" << endl;
    }
};
class Bike : public Vehicle
{
public:
    void drive() override
    {
        cout << "Bike is driving!" << endl;
    }
};
class Truck : public Vehicle
{
public:
    void drive() override
    {
        cout << "Truck is driving!" << endl;
    }
};
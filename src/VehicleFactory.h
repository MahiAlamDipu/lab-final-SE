#pragma once
#include "./Vehicle.h"


class VehicleFactory {
public:
    virtual ~VehicleFactory() = default;
    virtual Vehicle* createVehicle() = 0;  
};


class CarFactory : public VehicleFactory {
public:
    Vehicle* createVehicle() override {
        return new Car(); 
    }
};

class BikeFactory : public VehicleFactory {
    public:
        Vehicle* createVehicle() override {
            return new Bike();  
        }
};
class TruckFactory : public VehicleFactory {
    public:
        Vehicle* createVehicle() override {
            return new Truck(); 
        }
};
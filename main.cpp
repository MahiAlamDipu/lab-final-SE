#include "VehicleFactory.h"

int main() {
    cout << "Factory Method :\n";
    

   
    VehicleFactory* carFactory = new CarFactory();
    Vehicle* car = carFactory->createVehicle();
    car->drive();

    
    VehicleFactory* bikeFactory = new BikeFactory();
    Vehicle* bike = bikeFactory->createVehicle();
    bike->drive();


    VehicleFactory* truckFactory = new TruckFactory();
    Vehicle* truck = truckFactory->createVehicle();
    truck->drive();
    

   

    return 0;
}

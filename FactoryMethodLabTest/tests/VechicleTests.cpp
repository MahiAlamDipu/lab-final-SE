#include <gtest/gtest.h>
#include "VehicleFactory.h"
#include <sstream>

using namespace std;



class VehicleTest : public ::testing::Test {
    protected:
        stringstream buffer;
        streambuf* oldCout;
    
        void SetUp() override {
            oldCout = cout.rdbuf(buffer.rdbuf());  
        }
    
        void TearDown() override {
            cout.rdbuf(oldCout);  
        }
    };
    
    
    TEST_F(VehicleTest, CarDriveTest) {
        VehicleFactory* carFactory = new CarFactory();
        Vehicle* car = carFactory->createVehicle();
        
        car->drive();
        
        string output = buffer.str();
        EXPECT_NE(output.find("Car is driving!"), string::npos);
    
        delete car;
        delete carFactory;
    }
    
    
    TEST_F(VehicleTest, BikeDriveTest) {
        VehicleFactory* bikeFactory = new BikeFactory();
        Vehicle* bike = bikeFactory->createVehicle();
        
        bike->drive();
        
        string output = buffer.str();
        EXPECT_NE(output.find("Riding a Bike!"), string::npos);
    
        delete bike;
        delete bikeFactory;
    }



    TEST_F(VehicleTest, TruckDriveTest) {
        VehicleFactory* truckFactory = new TruckFactory();
        Vehicle* truck = truckFactory->createVehicle();
        
        truck->drive();
        
        string output = buffer.str();
        EXPECT_NE(output.find("Driving a Truck!"), string::npos);
    
        delete truck;
        delete truckFactory;
    }
    
    


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

#include "Vehicle.h"
#include <iostream>

int main() {
    std::cout << "============================ VEHICLE MANAGEMENT SYSTEM =========================\n\n";

    // Creating a specific vehicle
    Vehicle car1(1, "Toyota", "Corolla", 50000, 2018, 15000.0, Color::Silver, FuelType::Petrol, true);

    std::cout << "Initial Vehicle Details:\n";
    car1.display();

    // Modifying vehicle details
    std::cout << "\nUpdating vehicle information...\n";
    car1.setPrice(14000.0);
    car1.setMileage(55000);

    std::cout << "\nUpdated Vehicle Details:\n";
    car1.display();

    // Creating and displaying a default vehicle
    std::cout << "\nCreating a default vehicle...\n";
    Vehicle defaultCar;

    std::cout << "\nDefault Vehicle Details:\n";
    defaultCar.display();

    std::cout << "\n================================================================================\n";
    return 0;
}

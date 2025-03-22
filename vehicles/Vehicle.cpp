#include "Vehicle.h"
#include <iomanip>

Vehicle::Vehicle(int id, const std::string& brand, const std::string& model, long long mileage, int year, double price,
    Color color, FuelType fuelType, bool isUsed) : id(id), brand(brand), model(model), mileage(mileage),
    yearOfProduction(year), price(price), color(color), fuelType(fuelType), isUsed(isUsed) {}

Vehicle::Vehicle() : id(0), mileage(0), yearOfProduction(0), price(0.0),
color(Color::Black), fuelType(FuelType::Other), isUsed(false) {}

unsigned long Vehicle::getId() const { return this->id; }
std::string Vehicle::getBrand() const { return this->brand; }
std::string Vehicle::getModel() const { return this->model; }
long long Vehicle::getMileage() const { return this->mileage; }
int Vehicle::getYear() const { return this->yearOfProduction; }
double Vehicle::getPrice() const { return this->price; }
Color Vehicle::getColor() const { return this->color; }
FuelType Vehicle::getFuelType() const { return this->fuelType; }
bool Vehicle::getIsUsed() const { return this->isUsed; }

void Vehicle::setPrice(double newPrice) { this->price = newPrice; }
void Vehicle::setMileage(long long newMileage) { this->mileage = newMileage; }
void Vehicle::setUsed(bool used) { this->isUsed = used; }
void Vehicle::setColor(Color newColor) { this->color = newColor; }
void Vehicle::setFuelType(FuelType newFuelType) { this->fuelType = newFuelType; }

void Vehicle::display() const {
    std::cout << "===============================================================================\n"
        << "                               VEHICLE INFORMATION                              \n"
        << "===============================================================================\n"
        << std::left
        << std::setw(15) << " ID:" << id << "\n"
        << std::setw(15) << " Brand:" << brand << "\n"
        << std::setw(15) << " Model:" << model << "\n"
        << std::setw(15) << " Mileage:" << mileage << " km\n"
        << std::setw(15) << " Year:" << yearOfProduction << "\n"
        << std::setw(15) << " Price:" << price << "\n"
        << std::setw(15) << " Color Code:" << static_cast<int>(color) << "\n"
        << std::setw(15) << " Fuel Type:" << static_cast<int>(fuelType) << "\n"
        << std::setw(15) << " Used:" << (isUsed ? "Yes" : "No") << "\n"
        << "===============================================================================\n";
}


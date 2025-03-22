#pragma once
#include <iostream>
#include <string>

enum class FuelType { Petrol, Diesel, Electric, Hybrid, Hydrogen, LPG, CNG, Other };
enum class Color {
    Black, White, Grey, Silver, Red, Blue, Green, Yellow, Orange, Brown, Purple, Pink, Gold,
    DarkRed, Burgundy, LightRed,
    DarkBlue, NavyBlue, SkyBlue,
    DarkGreen, OliveGreen, LimeGreen,
    DarkGrey, LightGrey,
    DarkBrown, LightBrown,
    PearlWhite, Champagne,
};

class Vehicle
{
private:
    unsigned long id;
    std::string brand;
    std::string model;
    long long mileage;
    int yearOfProduction;
    double price;
    Color color;
    FuelType fuelType;
    bool isUsed;

public:
    Vehicle(int id, const std::string& brand, const std::string& model, long long mileage, int year, double price,
        Color color, FuelType fuelType, bool isUsed);
    
    Vehicle();

    // Getters
    unsigned long getId() const;
    std::string getBrand() const;
    std::string getModel() const;
    long long getMileage() const;
    int getYear() const;
    double getPrice() const;
    Color getColor() const;
    FuelType getFuelType() const;
    bool getIsUsed() const;

    // Setters
    void setPrice(double newPrice);
    void setMileage(long long newMileage);
    void setUsed(bool used);
    void setColor(Color newColor);
    void setFuelType(FuelType newFuelType);

    // Display function
    void display() const;
};

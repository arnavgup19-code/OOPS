#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
  string make;
  string model;
  int year;

public:
  Vehicle(string mk, string md, int yr)
  {
    make = mk;
    model = md;
    year = yr;
  }

  void displayVehicle()
  {
    cout << "Make: " << make << "\n";
    cout << "Model: " << model << "\n";
    cout << "Year: " << year << "\n";
  }
};

class Truck : public Vehicle
{
protected:
  float load_capacity;

public:
  Truck(string mk, string md, int yr, float lc)
      : Vehicle(mk, md, yr)
  {
    load_capacity = lc;
  }

  void displayTruck()
  {
    displayVehicle();
    cout << "Load Capacity: " << load_capacity << " tons" << "\n";
  }
};

class RefrigeratedTruck : public Truck
{
private:
  float temperature_control;

public:
  RefrigeratedTruck(string mk, string md, int yr, float lc, float temp)
      : Truck(mk, md, yr, lc)
  {
    temperature_control = temp;
  }

  void displayRefrigeratedTruck()
  {
    displayTruck();
    cout << "Temperature: " << temperature_control << "\n";
  }
};

int main()
{
  RefrigeratedTruck rt("Tata", "Ultra", 2022, 10.5, -5.0);  rt.displayRefrigeratedTruck();

  return 0;
}

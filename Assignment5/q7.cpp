#include <iostream>
using namespace std;

class Speedometer
{
protected:
  int speed;

public:
  Speedometer(int s = 0)
  {
    speed = s;
  }

  void setSpeed(int s)
  {
    speed = s;
  }

  int getSpeed()
  {
    return speed;
  }
};

class FuelGauge
{
protected:
  float fuelLevel;

public:
  FuelGauge(float f = 0.0)
  {
    fuelLevel = f;
  }

  void setFuel(float f)
  {
    fuelLevel = f;
  }

  float getFuel()
  {
    return fuelLevel;
  }
};

class Thermometer
{
protected:
  float temperature;

public:
  Thermometer(float t = 0.0)
  {
    temperature = t;
  }

  void setTemperature(float t)
  {
    temperature = t;
  }

  float getTemperature()
  {
    return temperature;
  }
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer
{
public:
  CarDashboard(int s, float f, float t)
      : Speedometer(s), FuelGauge(f), Thermometer(t) {}

  void displayDashboard()
  {
    cout << "---- Car Dashboard ----" << endl;
    cout << "Speed: " << speed << " km/h" << endl;
    cout << "Fuel Level: " << fuelLevel << " liters" << endl;
    cout << "Temperature: " << temperature << " °C" << endl;
  }
};

int main()
{
  CarDashboard car(80, 35.5, 90.0);

  car.displayDashboard();

  return 0;
}
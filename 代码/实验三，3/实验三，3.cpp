#include <cmath>
#include<iostream>
double celsius_to_fah(double cel) {
    return (cel * 9.0 / 5.0) + 32;
}
double fahrenheit_to_cels(double fah) {
    return (fah - 32) * 5.0 / 9.0;
}


int main() {
    const int NUM_TEMPERATURES = 10; 
    double celsiusTemperatures[NUM_TEMPERATURES] = { 40.0, 39.0, 38.0, 37.0, 36.0, 35.0, 34.0, 33.0, 32.0, 31.0 };
    double fahrenheitTemperatures[NUM_TEMPERATURES] = { 120.0, 110.0, 100.0, 90.0, 80.0, 70.0, 60.0, 50.0, 40.0, 30.0 };

    std::cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius" << std::endl;


    for (int i = 0; i < NUM_TEMPERATURES; ++i) {
        double celsius = celsiusTemperatures[i];
        double fah = fahrenheitTemperatures[i];
        double fahToCel = fahrenheit_to_cels(fah);
        double celToFah = celsius_to_fah(celsius);


        std::cout << celsius << "\t" << celToFah << "\t|\t";

    }

    return 0;
}
#include <iostream>

const double SPEED_OF_LIGHT = 299'792'458;

int main()
{
    double freq_mhz = 440; // get from command line
    double freq_hz = freq_mhz * 1'000'000;
    
    // speed = wavelength * frequency
    // so wavelength = speed / frequency
    
    double wavelength = SPEED_OF_LIGHT / freq_hz;
    std::cout << "Wavelength: " << wavelength << "m" << "\n";
    std::cout << "Half wave: " << wavelength / 2 << "m" << "\n";
    std::cout << "Quarter wave: " << wavelength / 4 << "m" << std::endl;

    return 0;
}

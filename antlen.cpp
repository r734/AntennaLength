#include <iostream>
#include <string>

const double SPEED_OF_LIGHT = 299'792'458;

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " <MHz>\n";
        return 1;
    }

    std::string freq_mhz_str = argv[1];
    
    double freq_mhz = std::stod(freq_mhz_str);

    double freq_hz = freq_mhz * 1'000'000;
    
    // speed = wavelength * frequency
    // so wavelength = speed / frequency

    double wavelength = SPEED_OF_LIGHT / freq_hz;
    std::cout << "Wavelength: " << wavelength << "m" << "\n";
    std::cout << "Half wave: " << wavelength / 2 << "m" << "\n";
    std::cout << "Quarter wave: " << wavelength / 4 << "m" << std::endl;

    return 0;
}

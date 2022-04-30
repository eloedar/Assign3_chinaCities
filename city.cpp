
#include <string>
#include "city.h"

City::City(const std::__cxx11::basic_string<char> &name, const std::__cxx11::basic_string<char> &province,
           const std::__cxx11::basic_string<char> &nation, const std::__cxx11::basic_string<char> &longitude,
           const std::__cxx11::basic_string<char> &altitude) : name(name), province(province), nation(nation),
                                                               longitude(longitude), altitude(altitude) {}

const std::string &City::getName() const {
    return name;
}

const std::string &City::getProvince() const {
    return province;
}

const std::string &City::getNation() const {
    return nation;
}

const std::string &City::getLongitude() const {
    return longitude;
}

const std::string &City::getAltitude() const {
    return altitude;
}

std::ostream &operator<<(std::ostream &os, const City &city) {
    os <<  city.name << "," << city.province << "," << city.nation << ","
       << city.longitude << "," << city.altitude << std::endl;
    return os;
}




#include <string>
#include "city.h"

City::City(const std::__cxx11::basic_string<char> &name, const std::__cxx11::basic_string<char> &province,
           const std::__cxx11::basic_string<char> &nation, const std::__cxx11::basic_string<char> &longitude,
           const std::__cxx11::basic_string<char> &altitude) : name(name), province(province), nation(nation),
                                                               longitude(longitude), altitude(altitude) {}

std::ostream &operator<<(std::ostream &os, const City &city) {
    os << "name: " << city.name << " province: " << city.province << " nation: " << city.nation << " longitude: "
       << city.longitude << " altitude: " << city.altitude;
    return os;
}

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



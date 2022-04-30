#ifndef ASSIGN3_CHINACITIES_CITY_H
#define ASSIGN3_CHINACITIES_CITY_H
#include <iostream>

class City{
private:
    std::string name;
    std::string province;
    std::string nation;
    std::string longitude;
    std::string altitude;

public:
    City(const std::string &name, const std::string &province, const std::string &nation, const std::string &longitude,
         const std::string &altitude);

    friend std::ostream &operator<<(std::ostream &os, const City &city);

    const std::string &getName() const;

    const std::string &getProvince() const;

    const std::string &getNation() const;

    const std::string &getLongitude() const;

    const std::string &getAltitude() const;
};

#endif //ASSIGN3_CHINACITIES_CITY_H

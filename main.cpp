#include <iostream>
#include <istream>
#include <streambuf>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "city.h"

int main()
{
    std::ifstream csv_data;
    csv_data.open("../world_cities.csv", std::ios::in);
    std::string line;

    if (!csv_data.is_open())
    {
        std::cout << "Error: opening file fail" << std::endl;
        std::exit(1);
    }

    std::istringstream sin;
    std::vector<std::string> words;
    std::vector<City> cities;
    std::string word;

    while (std::getline(csv_data, line))
    {
        sin.clear();
        sin.str(line);
        words.clear();
        while (std::getline(sin, word, ','))
        {
            words.push_back(word);
        }
        if (words[2]=="China") cities.emplace_back(words[0],words[1],words[2],words[3],words[4]);
    }
    csv_data.close();

    std::ofstream outFile;
    outFile.open("china_cities.csv", std::ios::out | std::ios::trunc);
    for (auto & city : cities) {
        outFile << city;
    }
    outFile.close();

    return 0;
}

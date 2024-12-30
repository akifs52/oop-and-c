#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void searchCityPopulation(ifstream& inputFile, const string& searchName) {
    string line;
    while (getline(inputFile, line)) {
        
        size_t spacePos = line.find(' ');
        if (spacePos != string npos) {
            string cityName = line.substr(0, spacePos);
            string populationStr = line.substr(spacePos + 1);

          
            if (cityName == searchName) {
                cout << "Population of " << cityName << ": " << populationStr << endl;
                return; 
            }
        }
    }

    // City not found
    std::cout << "UNKNOWN" << std::endl;
}

int main() {
    ifstream inputFile("city_population.txt"); 
    string searchName;
    cout << "Enter a city name to search: ";
    cin >> searchName;

    searchCityPopulation(inputFile, searchName);

    inputFile.close();
    return 0;
}

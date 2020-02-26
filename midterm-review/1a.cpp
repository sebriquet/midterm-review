#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int findMax() {
    string date;
    string city;
    int temperature;
    int temperature1 = -1000;

    ifstream file;
    file.open("temperatures.txt");
    
    while (file >> date >> city >> temperature){
        if (temperature > temperature1) {
            temperature1 = temperature;     
        }
        
        return temperature1;
    }

    file.close();

}

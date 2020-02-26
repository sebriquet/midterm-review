#include <iostream> 
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

float findAvg(string city) {
    ifstream file;
    string date;
    string city1;
    int temperature;
    int counter = 0;
    file.open("temperatures.txt");

    while (file >> date >> city1 >> temperature) {
        if (city1 == city) {
          int temp =+ temperature;  
          counter++;
          float avg_temp = temp / counter;
          cout << avg_temp << endl;
        }
        else {
            return -1;
        }
    }


}


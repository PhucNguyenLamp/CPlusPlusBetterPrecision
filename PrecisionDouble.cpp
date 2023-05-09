///main.h
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    double number = 3.0063900; //number to be rounded
    int precision = 4; // precision
    number = round(number*pow(10,precision))/pow(10,precision);
    int temp;
    number*=pow(10,precision);
    temp = number;
    number = temp/pow(10,precision);
    cout << number;
    return 0;
}

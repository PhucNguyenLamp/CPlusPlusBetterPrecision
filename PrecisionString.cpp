///main.h
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    double number = 3.00019; //so can dien
        int precision = 4; //precision, default 4
    number = round(number*pow(10,precision))/pow(10,precision);
    string numberInString = to_string(number);
    int len = numberInString.length();
    bool checkDecimalPoint = false;
    int count=0;
    int futhestNumber=0;
    int decimalPointPlace;

    for (int i=0; i< len; i++){
        if (checkDecimalPoint == true){
            count++;
            if (numberInString[i]!='0'){
                futhestNumber = i;
            }
        }

        if (numberInString[i] == '.'){
            checkDecimalPoint = true;
            decimalPointPlace = i;
        }
        if (count == precision) break;
    }
    //xuli
    string somoi;
    if (futhestNumber==0){
        for (int i=0; i< decimalPointPlace; i++){
            somoi += numberInString[i];
        }
    } else {
        for (int i=0; i<= futhestNumber; i++){
            somoi += numberInString[i];
        }
    }
    cout << somoi;
    return 0;
}

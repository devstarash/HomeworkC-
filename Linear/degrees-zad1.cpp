#include <iostream>
#include <cmath>
using namespace std;


int main(void) {
    setlocale(LC_ALL, "RU");
    int degrees, minutes, second;
    cout << "Задайте угол (градусы, минуты, секунды): "<< endl;
    cin >> degrees>> minutes>> second;
    minutes = abs(minutes);
    int help = (degrees >= 0) ? 1 : -1;
    second = abs(second);
    degrees = abs(degrees);
    double result = help * (((degrees + (minutes / 60.0) + (second / 3600.0)) * M_PI) / 180.0);
    cout <<"Значение в радианах: "<< result<< endl;
    
    return 0;
}

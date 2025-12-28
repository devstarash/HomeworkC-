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
    int rev = (result >=0) ? 1 : -1;
    result = ((rev * result) * 180 ) / M_PI;
    int degreesf = (int) result;
    double minutesf = (result - degreesf) * 60;
    int minutesFinal = (int) minutesf;
    double secondf = round ((minutesf - minutesFinal) * 60);
    int secondFinal = (int) secondf;
    cout <<"Градусов: "<< degreesf * rev << " " <<"Минут: " << minutesFinal << " " << "Секунд: " << secondFinal<< endl;
    
    
    
    return 0;
    
}

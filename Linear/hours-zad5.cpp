#include <iostream>
using namespace std;
#include <cmath>

int main(void) {
    setlocale(LC_ALL, "RU");
    int hour, minute, second;
    cout << "Введите время (часы, минуты, секунды): " << endl;
    cin >> hour>>minute>>second;
    int minuteFinal = minute + round(second / 60.0);
    int hourFinal = hour + round(minuteFinal / 60.0);
    cout << "Округлённое время:" << endl;
    cout << "  Часы:  " << hour << endl;
    cout << "  Минуты: " << minuteFinal << endl;
    cout << "или округлено до часов: " << hourFinal << endl;
    
    
    
    return 0;
}

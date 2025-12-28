#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (void){
    setlocale(LC_ALL, "RU");
    int function;
    float a,  b;
    cout << "Выберите функцию (1. y = x^4; 2. y = tg(x); 3. y = e^x): " << endl;
    cin >> function;
    cout <<"Введите отрезок, на котором необходимо проверить функцию.(-5 5)" <<endl;
    cin >> a >> b;
    for (double x = a; x  <= b; x += 0.1){
        if (function == 1){
            if (fabs (pow(x,4) - pow(-x,4)) > 1e-6){
                cout <<"Функция нечетная" << endl;
                return 0;
            }
            
        }
        if (function ==2){
            if (fabs(tan(x) - tan(-x)) > 1e-6){
                cout <<"Функция нечетная" << endl;
                return 0;
                
            }
        }
        if (function == 3){
            if (fabs(exp(x) - exp(-x)) > 1e-6){
                cout <<"Функция нечетная" << endl;
                return 0;
            }
        }
    }
    cout <<"Функция четная"<<endl;
    return 0;
    
    
    
}

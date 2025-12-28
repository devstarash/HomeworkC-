#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
int main (void){
    int function;
    double periodOfTangent = M_PI;
    double periodOfsin =2 * M_PI;
    double step = 0.1;
    cout <<"Выберите функцию (1. y = (sin(x))^2; 2. y =tg(x); 3. y = 1/x * sin(x) (T = 2PI)" << endl;
    cin >> function;
    for (double x = 0; x <= 5 * periodOfsin; x+=step){
        if (function ==1){
            if ((fabs(sin(x) - sin (x + periodOfsin)))>1e-6){
                cout << "Функция не периодична" <<endl;
                return 0;
                
            }
        }
        if (function ==2){
            if ((fabs(tan(x) - tan (x + periodOfTangent)))>1e-6){
                cout << "Функция не периодична" <<endl;
                return 0;
            }
        }
        if (function ==3){
            if (x == 0){
                continue;
            }
            if ((fabs((1 / x) * sin(x) - (1 / (x + periodOfsin)) * sin(x + periodOfsin)))>1e-6){
                cout << "Функция не периодична" <<endl;
                return 0;
            }
        }
        
        
        
    }
    cout <<"Функция периодична"<<endl;
}

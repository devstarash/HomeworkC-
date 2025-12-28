#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
    setlocale(LC_ALL, "RU");
    double k, p, s;
    cout << "Введите (Капитал (k), процент (p) , Стоимость магазина (s)): " << endl;
    cin >> k >> p >> s;
    double timeMounth;
    timeMounth = ceil (log(s / k) / log (1 + (p / 100)));
    int resultYear =  (timeMounth / 12 );
    int resultMounth =  (timeMounth - (resultYear * 12));
    cout << "Необходимo: " << resultYear <<" года и " << resultMounth << " месяца." << endl;
    
    
    
    
    
    
    
}

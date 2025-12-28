#include <iomanip>
#include <iostream>

using namespace std;
int main (void){
    setlocale(LC_ALL, "RU");
    int m,k;
    m = 1;
    
    cout <<"Введите максимальное расстояние в км (k >= 1)." <<endl;
    cin >> k;
    float mili, miliconst, km;
    miliconst = 1.609344;
    
    
    if (k < 1){
        cout <<"Ошибка, расстояние должно быть больше '1'."<< endl;
        }
    cout << "мили       км"<<endl;
    for (int i = 1; i <=k; i+=1){
        mili = i / miliconst;
        km = m * miliconst;
        if (i >= km){
            cout << fixed << setprecision(4) << m << "          " << km << endl;
            m++;
            
        }
        
       
        cout << fixed << setprecision(4) << mili << "     " << i << endl;
    }
    
    return 0;
}


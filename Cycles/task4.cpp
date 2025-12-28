#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
    setlocale(LC_ALL,"RU");
    cout << "Введите( сумму кредита, процентную ставку, ежегодную прибыль). \nПример: 300000 15 200000" << endl;
    float k, p, r;
    cin >> k >> p >> r;
    if (k == 0){
        cout << "Вы не брали кредит. Выплачивать 0 лет." << endl;
        return 0;
    } else if ( r ==0 ){
        cout << "Увы, Вы не сможете выплатить кредит." << endl;
        return 0;
    }
    int year =0;
    while ( k > 0){
        year+=1;
        k = k + k * ( p * 0.01 );
        k-= r;
        if (k <= 0) {
            break;
        }
        if (year >= 80){
            cout <<"Вам не хватит сознательного возраста, чтобы выплатить кредитю" << endl;
            return 0;
            
        }
    }
    cout <<"Вам понадобится: " << year <<" год/лет" << endl;
    return 0;
            
    
}

#include <iostream>
using namespace std;
int main(void) {
    setlocale(LC_ALL,"RU");
    int steam;
    cout<<"Введите количество пар носков, которые желаете приорести"<<endl;
    cin >> steam;
    int quantity[] ={12,144};
    int boxes = steam / quantity[1];
    steam %= quantity[1];
    int bunch = steam / quantity[0];
    steam %= quantity[0];
    cout <<"Вам нужно купить: " << boxes <<" коробок, " << bunch <<" связок, " <<steam<<" пар."<<endl;
    
    
    
        
    
    return 0;
}

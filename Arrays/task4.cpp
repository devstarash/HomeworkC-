#include <iostream>
using namespace std;

int main(void) {
    setlocale(LC_ALL,"RU");
    int n;
    cout<<"Введите n"<<endl;
    cin >> n;
    int sequence [n];
    cout<<"Введите элементы последовательности(поочередно)"<<endl;
    for (int i = 0; i < n; i++){
        cin >>sequence[i];
        
    }
    int maxnul=0;
    int nul = 0;
    for (int i = 0; i < n; i++){
        
        if (sequence[i]==0){
            nul+=1;
            if (nul > maxnul)
                maxnul = nul;
        }
        else
            nul = 0;
        
        
        
    }
    cout<<"Максимальное количество нулей в последовательности = "<<maxnul<<endl;
 
    return 0;
}

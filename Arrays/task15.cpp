#include <iostream>
using namespace std;
int main(void) {
    setlocale(LC_ALL,"RU");
    int array [] ={12,12,21,213,123,1,1,1,1,1,1,1,32,13,123,3,213,1,1,1,1,1,3123,3,123,121221,22,22,22,22,22,22,22,22,22,1,1,22};
    int length = sizeof(array)/sizeof(array[0]);
    int countmax = 0;
    int maxim = 0;
    for (int i = 0; i < length; i++){
        int count1=0;
        for (int j = 0; j < length; j++){
            if (array[i] == array[j]){
                count1+=1;
            }
        
            
        }
        if (count1 > countmax){
            countmax = count1;
            maxim = array[i];
        }
        
    }
    cout<<"Чаще всего встречается: "<<maxim <<". Количество вхождений: "<<countmax<<endl;
    return maxim;
}

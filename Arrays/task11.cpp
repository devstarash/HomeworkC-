#include <iostream>
using namespace std;

int main(void) {
    setlocale(LC_ALL,"RU");
    int array [] ={12,23,22,34,0,321,12,0,421,23,0,0,0,432,23,0,43,0,0,0,0,21,12,123,13,123,243,0,0,4234,234,2234,12,0,0};
    int length = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i <= length-1; i++){
        if (array[i] == 0){
            for (int j = length-1; j >= i; j--){
                if (array[j] !=0 ){
                    int k = array[j];
                    array[j] = array[i];
                    array[i] = k;
                }
            }
            
        }
    }
    for (int i = 0; i < length; i++){
        cout<<array[i]<<" ";
    }
}

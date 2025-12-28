#include <iostream>
#include <cstdlib> 
#include <ctime> 
void summDesk(int* desk, int deskSum[]){
    int Mask[3] = {0b10101010, 0b11001100, 0b11110000};
    int index = 5;
    for(int m = 0; m < 3; m++){
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if ((Mask[m]>>j) & 1){
                    deskSum[index] ^= desk[i*8 + j];
                }
            }
        }
        index--;
    }
    for(int m = 0; m < 3; m++){
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if ((Mask[m]>>i) & 1){
                    deskSum[index] ^= desk[i*8 + j];
                }
            }
        }
        index--;
    }
}
using namespace std;
int main(void){
    setlocale(LC_ALL,"RU");
    srand(time(0));
    int desk[8][8];
    int deskSum[6] = {0};
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            desk[i][j] =  rand() % 2;
        }
    }
    int *ptr = &desk[0][0];
    summDesk(ptr,deskSum);
    int replace;
    do{
        cout<<"Укажите на любую клетку шахматной доски (Введите число от 1 до 64): "<<endl;
        cin >> replace;
    } while((replace < 1) || (replace > 64));
    int kntrSum = 0;
    for(int i = 0, j = 5; i < 6; i++){
        kntrSum += deskSum[i] * (1 << j);
        j--;
    }
    cout<<"Контрольная сумма: "<< kntrSum<<endl;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout<<desk[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int help = kntrSum ^ (replace - 1);
    int row = help / 8;
    int coll = help % 8;
    desk[row][coll] ^= 1;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout<<desk[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int deskSum2[6]= {0};
    ptr = &desk[0][0];
    summDesk(ptr, deskSum2);
    kntrSum = 0;
    for(int i = 0, j = 5; i < 6; i++){
        kntrSum += deskSum2[i] * (1 << j);
        j--;
    }
    cout<<"Вы указали на клетку: "<< kntrSum + 1<<endl;
    return 0;
}
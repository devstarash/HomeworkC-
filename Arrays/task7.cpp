#include <iostream>
using namespace std;

int main(void) {
    int m, n;
    cout<<"Введите m и n(через пробел):"<<endl;
    cin >> m >> n;
    int array[m][n];
    srand(time(0));
    for (int i = 0; i < m; i++){
        for (int j =0; j < n; j++){
            array[i][j] = rand() % (1001);
        }
    }
    int max[n];
    int min[m];
    for (int i = 0; i < m; i++){
        min[i] = 10000000;
        for (int j =0; j < n; j++){
            if (array[i][j]<min[i]){
                min[i]=array[i][j];
            }
        }
    }
    for (int j = 0; j < n; j++){
        max[j] = -10000000;
        for (int i = 0; i < m; i++){
            if (array[i][j]>max[j]){
                max[j]=array[i][j];}
        }
    }
    bool Flag = false;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (array[i][j] == min[i] && array[i][j] == max[j]) {
                    cout << "Седловая точка: " << array[i][j] << " на позиции (" << i << ", " << j << ")" << endl;
                    Flag = true;
                }
            }
        }

        if (!Flag) {
            cout << "0" << endl;
        }
    for (int i =0; i < m; i++){
        for (int j =0; j < n; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
        
    }
}
    

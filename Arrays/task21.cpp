#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;
int main(){
    srand(time(NULL));
    int n;
    cout <<"Enter n (number of elements in the array = 2 * n + 1): "<<endl; cin >> n;
    int* array = new int[2 * n + 1];
    for (int i = 0; i < 2 * n + 1; i++){
        array[i] = -100 + rand() % (100 + 100 + 1);
    }
    sort(array, array + 2 * n + 1);
    for (int i = 0; i < 2 * n + 1; i++){
       cout << array[i]<<" ";
    }
    cout<<endl<<"Median = "<<array[n]<<endl;
    delete[] array;
    return 0;
}

#include <iostream>
#include <ctime>
using namespace std;
int main(void) {
    setlocale(LC_ALL,"RU");
    int seed = time(NULL);
    srand(seed);
    int n = 10;
    int min = -50;
    int max = 50;
    int *p_arr = new int[n];
    int min_num = *(p_arr)= min + rand() % (max - min + 1);
    for (int i = 1; i < n; i++){
        *(p_arr+i) = min + rand() % (max - min + 1);
        if (*(p_arr+i)< min_num)
            min_num = *(p_arr+i);
        
        cout<< *(p_arr+i)<<endl;
    }
    cout<<"Minimum number: "<<min_num<<endl;
    delete p_arr;

    return 0;
}
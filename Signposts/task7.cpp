#include <iostream>
using namespace std;
int main(void){
    int n;
    cout << "Enter array size" << endl;
    cin >> n;
    int array [n];
    int* pr = array;
    
    for (int i = 0; i < n; i++){
        cout<<"Enter "<<i<<" array element (integers only)."<<endl;
        cin >> *(pr+i);
    }
    int help_array [n];
    int* pr2 = help_array;
    int newIndex = 0;
    
    for (int i = 0; i < n; i++){
        bool isRepeat = false;
        for(int j = 0; j < newIndex; j++){
            if (*(pr+i) == *(pr2+j)){
                isRepeat = true;
                break;
            }
        }
        if (!isRepeat) {
            *(pr2+newIndex) = *(pr+i);
            newIndex+=1;
        }
        
    }
    cout<<"Array of non-repeating elements{ "<<endl;
    for (int i = 0; i < newIndex; i++){
        cout <<*(pr2+i)<<" ";
    }
    cout<<"}"<<endl;

}
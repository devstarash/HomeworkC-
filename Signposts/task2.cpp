#include <iostream>
using namespace std;
int main(void){
    setlocale(LC_ALL,"RU");
    char* str = new char[81];
    cout<<"Enter your string (end with '~'): "<<endl;
    cin.getline(str, 81, '~');
    char* str1 = new char[81];
    int newIndex = 0;
    for (int i = 0; i < 81; i++){
        if (*(str+i) == '\0')
            break;
        if (*(str+i)!= ' ' || (i > 0  && *(str+i-1) !=' ')){
            *(str1+newIndex) =*(str+i);
            newIndex+=1;
        }
        
    }
    if (*(str1+newIndex-1) ==' '){
        *(str1+newIndex-1) = '\0';
        
    }else
         *(str1+newIndex) ='\0';
    cout<<"Source string: "<<endl;
    cout<<str<<endl;
    cout<<"New string: "<<endl;  
    cout << str1 << endl;
    delete [] str1;
    delete [] str;
    return 0;

}

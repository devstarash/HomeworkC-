#include <iostream>
using namespace std;
#include <string.h>
int main(void){
    setlocale(LC_ALL,"RU");
    char* str = new char [81];
    cout<<"Enter your string (end with '~'): "<<endl;
    cin.getline(str,81,'~');
    int length = strlen(str);
    char str1[41];
    char* str11 = str1;
    int newIndex1 = 0;
    int len;
    bool flag = false;
    char pr;
    for (int i = 0; i < length; i++){
        if (*(str+i) == '[' || *(str+i) == '('|| *(str+i) == '{'){
            *(str11+newIndex1) = *(str+i);
            *(str11+newIndex1+1) = '\0';
            newIndex1 += 1;
            
        }
        if (*(str+i) == ']' || *(str+i) == ')'|| *(str+i) == '}'){
            if (*(str+i) == ']'){
                pr = '[';
            }
            else if (*(str+i) == '}'){
                pr = '{';
            }
            else if (*(str+i) == ')'){
                pr = '(';
            }
            len = strlen(str1);
            if (*(str11+(len-1)) == pr){
                flag = true;
                *(str11+(len-1)) = '\0';
                newIndex1 -= 1;

            }
            else{
                cout<<"False"<<endl;
                return 0;
            }

        }
    }
    cout<<"True"<<endl;
    return 0;
        
}
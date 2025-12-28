#include <iostream>
using namespace std;
#include <string.h>
int main(void){
    setlocale(LC_ALL,"RU");
    char string[81];
    char* str = string;  
    cout<<"Enter your string (end with '~'): "<<endl;
    cin.getline(string,81,'~');
    int isTrue = 0;
    bool Flag = false;
    int length = strlen(string);
    for (int i = 0 ; i < length; i++){
        if (*(str+i) == '('){
            isTrue += 1;
        }
        else if (*(str+i) == ')'){
            isTrue -= 1;
        }
    }
    if (isTrue == 0){
        Flag = true;
    }
    if (!Flag){
        cout<<"Your parenthesis sequence is incorrect."<<endl;
    }
    if (Flag){
        int count = 0;
        for (int i = length - 1; i >=0; i--){
            if (count == 0){
                if (*(str+i) == '('){
                    count ++;
                }
            }
            else if (count == 1){
                if (*(str+i) == '('){
                    count ++;
                    *(str+i) = '[';

                }
            }
            else if (count > 1){
                if (*(str+i) == '('){
                    count ++;
                    *(str+i) = '{';
                }
            }

        }
        count = 0;
        for (int i = 0; i < length; i++){
            if (count == 0){
                if (*(str+i) == ')'){
                    count ++;
                }
            }
            else if (count == 1){
                if (*(str+i) == ')'){
                    count ++;
                    *(str+i) = ']';

                }
            }
            else if (count > 1){
                if (*(str+i) == ')'){
                    count ++;
                    *(str+i) = '}';
                }
            }

        }
    }
    if (Flag){
        cout<<string<<endl;
    }
    return 0;
}
    
    
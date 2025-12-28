#include <iostream>
using namespace std;
int main(void){
    char *str =new char[81];
    cout<<"Enter your string (end with '~'): "<<endl;
    cin.getline(str,81,'~');
    int count = 0;
    char num = ' ';
    int count1;
    int len = strlen(str);
    for (char i = '0'; i <= '9';i++){
        count1 = 0;
        for (int j = 0; j < len; j++){
            if (*(str+j) ==  i ){
                count1 += 1;
            }
        }
        if(count1 > count){
            count = count1;
            num = i;
        }
    }
    cout<<"The number "<<num<<" is repeated " << count<< " times."<<endl;
    delete [] str;
    return 0;

}
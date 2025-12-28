#include <iostream>
using namespace std;

int main(void) {
    setlocale(LC_ALL,"RU");
    int natural[9000];
   
    for (int i = 0; i < 9000; i++) {
          natural[i] = 1000 + i;
      }

    for (int i =0; i <9000;i++){
        bool Flag =true;
        int count [10] ={0};
        int num = natural[i];
        while (num > 0){
            int per = num % 10;
            if (count[per] > 0){
                Flag = false;
                break;
            }
            else
                count[per] = 1;
            num = num / 10;
            
        }
        if (Flag)
            cout<<natural[i]<<endl;
        
        }
  return 0;
}


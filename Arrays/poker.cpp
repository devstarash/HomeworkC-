#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int main(){
    srand(time(NULL));
    int poker[5];
    int count[5];
    for (int i = 0; i < 5; i++){
        poker[i] = 2 + rand() % 9;
       
    }
    sort(poker, poker + 5);
    for (int i = 0; i < 5; i++){
        cout<<poker[i]<<" ";
       
    }
    cout<<endl;
    if (poker[0] == poker[4]){
        cout<<"1"<<endl;
        return 1;
    }
    else if( (poker[0] == poker[3]) || (poker[1] == poker[4]) ){
        cout<<"2"<<endl;
        return 2;
    }
    else if ( ( (poker[0] == poker[2]) && (poker [3] == poker [4]) ) || ( (poker[0] == poker[1]) && (poker [2] == poker [4]) )){
        cout<< "3" << endl;
        return 3;
    }
    else if ( (poker[0] == poker[2]) || (poker[1] == poker[3]) || (poker[2] == poker[4]) ){
        cout<<"4"<<endl;
        return 4;
    }
    else if( (poker[0] == poker[1] && poker[2] == poker[3]) || (poker[0] == poker[1] && poker[3] == poker[4]) || (poker[1] == poker[2] && poker[3] == poker[4])){
        cout<<"5"<<endl;
        return 5;
    }
    else if((poker[0] == poker[1]) || (poker[1] ==poker[2]) || (poker[2] ==poker[3]) || (poker[3] == poker[4])){
        cout<<"6"<<endl;
        return 6;
    }
    else{
        cout<<"7"<<endl;
        return 7;
    }

    




}
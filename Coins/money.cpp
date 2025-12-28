#include <iostream>
using namespace std;
int main(void){
    char weight;
    setlocale(LC_ALL, "RU");
    cout <<"Выберите фальшивую монету (1-12)"<<endl;
    cout<<"Тяжелее или легче она, чем остальные"<<endl;
    cout << "1 2 3 4 "<< "      "<<"5 6 7 8"<<endl;
    cout <<"Укажите значение на весах символом (L - влево, E - равен, R - вправо): "<<endl;
    cin >> weight;
    if (weight == 'E'){
        cout <<"1 2 "<< "      "<<"9 10"<<endl;
        cout <<"Укажите значение на весах символом (L - влево, E - равен, R - вправо): "<<endl;
        cin >> weight;
        if (weight =='E'){
            cout <<"1"<< "      "<<"11"<<endl;
            cout <<"Укажите значение на весах символом (L - влево, E - равен, R - вправо): "<<endl;
            cin >> weight;
            if (weight =='E'){
                cout <<"Фальшивая монета номер: 12"<< endl;
            }
            else if(weight=='L' or weight =='R'){
                cout <<"Фальшивая монета номер: 11"<< endl;}
            
            
            
        }
        else if(weight=='L' or weight == 'R'){
            cout <<"1"<< "      "<<"9"<<endl;
            cout <<"Укажите значение на весах символом (L - влево, E - равен, R - вправо): "<<endl;
            cin >> weight;
            if (weight == 'E')
                cout <<"Фальшивая монета номер: 10"<<endl;
            else if (weight =='L' or weight =='R'){
                cout <<"Фальшивая монета номер: 9"<<endl;}
        }
        
        
    }
    else if(weight == 'R' or weight == 'L'){
        cout <<"1 2 3 4  "<< "      "<<"9 10 11 12"<<endl;
        cout <<"Укажите значение на весах символом (L - влево, E - равен, R - вправо): "<<endl;
        cin >> weight;
        if (weight =='E'){
            cout <<"1 2"<< "      "<<"5 6"<<endl;
            cout <<"Укажите значение на весах символом (L - влево, E - равен, R - вправо): "<<endl;
            cin >> weight;
            if (weight =='E'){
                cout <<"1"<< "      "<<"7"<<endl;
                cout <<"Укажите значение на весах символом (L - влево, E - равен, R - вправо): "<<endl;
                cin >> weight;
                if (weight == 'E')
                    cout <<"Фальшивая монета номер: 8"<<endl;
                else if(weight=='L' or weight =='R'){
                    cout <<"Фальшивая монета номер: 7"<<endl;}
                
            }
            else if(weight=='L' or weight =='R'){
                cout <<"1"<< "      "<<"5"<<endl;
                cout <<"Укажите значение на весах символом (L - влево, E - равен, R - вправо): "<<endl;
                cin >> weight;
                if (weight == 'E')
                    cout <<"Фальшивая монета номер: 6"<<endl;
                else if(weight=='L' or weight =='R'){
                    cout <<"Фальшивая монета номер: 5"<<endl;}
                
            }
            
        }
        else if(weight=='L' or weight =='R') {
            cout <<"5 6"<< "      "<<"1 2"<<endl;
            cout <<"Укажите значение на весах символом (L - влево, E - равен, R - вправо): "<<endl;
            cin >> weight;
            if (weight =='E'){
                cout <<"1"<< "      "<<"3"<<endl;
                cout <<"Укажите значение на весах символом (L - влево, E - равен, R - вправо): "<<endl;
                cin >> weight;
                if (weight == 'E')
                    cout <<"Фальшивая монета номер: 4"<<endl;
                else if(weight=='L' or weight =='R'){
                    cout <<"Фальшивая монета номер: 3"<<endl;}
                
            }
            else if(weight=='L' or weight =='R'){
                cout <<"5"<< "      "<<"1"<<endl;
                cout <<"Укажите значение на весах символом (L - влево, E - равен, R - вправо): "<<endl;
                cin >> weight;
                if (weight == 'E')
                    cout <<"Фальшивая монета номер: 2"<<endl;
                else if(weight=='L' or weight =='R'){
                    cout <<"Фальшивая монета номер: 1"<<endl;}
                
            }
            
        }
    }
    return 0;
}


#include<iostream>

using namespace std;

int main()
{
    int a, b, time;
    cin >> a >> b;

    if( a > b){
        time = ( 24 - a ) + b;
        cout <<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
    }
    else if( a == b ){
        time = 24;
        cout << "O JOGO DUROU "<<time<<" HORA(S)" << endl;
    }
    else if( b > a ){
        time = b - a;
        cout <<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
    }


}
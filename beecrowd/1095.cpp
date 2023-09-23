#include<iostream>

using namespace std;

int main()
{
    for( int i = 1, j = 60; j >= 0; j-=5, i+=3){
        if( j < 0){
            break;
        }
        cout << "I="<<i <<" J="<< j<<endl;
    }


}
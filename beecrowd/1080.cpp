#include<iostream>

using namespace std;

int main()
{
    int n, pos = 0, high = 0;

    for( int i = 1; i <= 100; i++){
        cin >> n;
        if( n > high){
            high = n;
            pos = i;
        }
    }
    cout << high << endl;
    cout<< pos << endl;

}
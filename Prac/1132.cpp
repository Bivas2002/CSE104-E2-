#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, i;
    cin >> x >> y;

    int sum = 1;

    if( x > y){
        for( i = y; i <= x; i++){
            if( i  % 13 != 0){
                sum+=i;
            }
        }

    }

    else{
        for( i = x; i <= y; i++){
            if( i  % 13 != 0){
                sum+=i;
            }
        }

    }
        cout << sum << endl;

}
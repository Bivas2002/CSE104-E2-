#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y, sum = 0, sum1 = 0, high = 0, low = 0;
    cin >> n;

    for( int i = 1; i <= n; i++){
            cin >> x >> y;

            if( x > y){
                high = x;
                low = y;

                for( int j = low; j < high; j++){
                    if( j  % 2 != 0){
                    sum+=j;

                }
                    cout << sum << endl;
                }
            }

            else{
                high = y;
                low = x;

                for( int k = low; k < high; k++){
                    if( k % 2 != 0){
                        sum1+= k;
                    }
                    cout << sum1<< endl;
                }
            }
    }


}
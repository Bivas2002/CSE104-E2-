#include<iostream>

using namespace std;

int main()
{
    int m, n, i;

    while( true ){
        

        cin >> m >> n;

        if( m <= 0 ||  n <= 0){
            break;
        }

        int sum = 0;

        if( n > m){
            for( i = m; i <= n; i++){
                cout << i << " ";
                sum+= i;
            }
        }
        if( m > n){
            for( i = n; i <= m; i++){
                cout << i << " ";
                sum+= i;
            }
        }
            cout << "Sum=" << sum <<endl;
    }

}
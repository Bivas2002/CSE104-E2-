#include<iostream>

using namespace std;

int main()
{
    int n, i, count = 0;
    cin >> n;

    for( i = n; ; i++){
        if( i % 2 != 0){
            count++;
            cout << i << endl;
            if( count == 6)
            {
                break;
            }
        }
        
    }


}
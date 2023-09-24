#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for( int i = 1; i <= n; i++){
        int x, y;
        cin >> x >> y;

        if(y == 0 ){
            cout << "divisao impossivel" <<endl;
        }
        else{
        printf("%.1f\n", (float)x/(float)y);
        }
    }



}
#include<iostream>

using namespace std;

int main()
{
    float num;
    int count = 0;

    for( int i = 1; i <= 6; i++){
        cin >> num;
        if( num > 0){
            count++;
        }
    }
    cout << count << " valores positivos" << endl;

}
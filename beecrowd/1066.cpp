#include<iostream>

using namespace std;

int main()
{
    int num;
    int count = 0, j = 0, k = 0, n = 0;

    for( int i = 1; i <= 5; i++){
        cin >> num;
        if( num % 2 == 0 ){
            count++;
        }
        if( num % 2 != 0 ){
            j++;
        }
        if( num > 0){
            k++;
        }
        if( num < 0 ){
            n++;
        }
    }
    cout << count <<" valor(es) par(es)" << endl;
    cout << j <<" valor(es) impar(es)" << endl;
    cout << k <<" valor(es) positivo(s)" << endl;
    cout << n <<" valor(es) negativo(s)" << endl;

}
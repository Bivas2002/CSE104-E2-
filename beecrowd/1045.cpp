#include<iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    if(a >= ( b + c ) || b >= ( a + c ) || c >= ( a + b )){
        cout << "NAO FORMA TRIANGULO\n" << endl;
    }
    else if( (a * a == b * b + c * c) || ( b * b == a * a + c * c) || (c * c == b * b + a * a)){
        cout << " TRIANGULO RETANGULO\n" << endl;
    }

    else if( ( a * a >  b * b + c * c) || ( b * b > a * a + c * c) || (c * c > b * b + a * a)){
        cout << "TRIANGULO OBTUSANGULO\n" << endl;
    }

    else if(( a * a <  b * b + c * c) || ( b * b < a * a + c * c) || (c * c < b * b + a * a))
    {
        cout << "TRIANGULO ACUTANGULO\n" << endl;
    }

    if( a == b == c){
        cout<< "TRIANGULO EQUILATERO\n" << endl;
    }    

    if((a == b && c!= a && b) || ( b == c && a!= b && c ) || ( a == c && b!= a && c)){
        cout << "TRIANGULO ISOSCELES\n" << endl;
    }


}
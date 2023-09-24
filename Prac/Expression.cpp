#include<iostream>

using namespace std;

int main()
{
    int a,b,c,res1,res2,res3,res4,res5,res6;
    cin >> a >> b >> c;
    res1=a+b+c;
    res2=a*b*c;
    res3=a+b*c;
    res4=a*b+c;
    res5=(a+b)*c;
    res6=a*(b+c);
    if(res1>=res2 && res1>=res3 && res1>=res4 && res1>=res5 && res1>=res6)
    {
        cout << res1;
    }
    else if(res2>=res1 && res2>=res3 && res2>=res4 && res2>=res5 && res2>=res6)
    {
        cout << res2;
    } 

    else if(res3>=res1 && res3>=res2 && res3>=res4 && res3>=res5 && res3>=res6)
    {
        cout << res3;
    }

    else if(res4>=res1 && res4>=res2 && res4>=res3 && res4>=res5 && res4>=res6)
    {
        cout << res4;
    }

    else if(res5>=res1 && res5>=res2 && res5>=res3 && res5>=res4 && res5>=res6)
    {
        cout << res5;
    }
    
    else if(res6>=res1 && res6>=res2 && res6>=res3 && res6>=res4 && res6>=res5)
    {
        cout << res6;
    }

    return 0;
}
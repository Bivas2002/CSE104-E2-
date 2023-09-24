#include<iostream>

//Write a C++ program to find the second smallest elements in a given array of integers.

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for( i = 0;  i < n; i++){
        cin >> arr[i];
    }

    int first = arr[0], second = arr[0];

    for( i = 0; i < n; i++){
        if( arr[i] < first){

            second = first;
            first = arr[i];
        }

        else if( arr[i] < second){
            second = arr[i];
        }

    }
    cout << first <<" "<< second;

}
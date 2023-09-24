#include<iostream>
// Write a C++ program to find the second largest element in an array of integers.
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for( i = 0;  i < n; i++){
        cin >> arr[i];
    }

    int first = 0, second = 0, third = 0;

    for( i = 0; i < n; i++){
        if( arr[i] > first){
            third = second;
            second = first;
            first = arr[i];
        }

        else if( arr[i] > second){
            third = second;
            second = arr[i];
        }

        else if( arr[i] > third){
            third = arr[i];
        }
    }
    cout << first << " " <<second;

}
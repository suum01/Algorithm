#include <iostream>
#include <algorithm>

using namespace std;

int main(){     //O(n)
    ios::sync_with_stdio(0);
    cin.tie(0);


    int sum, avg, min;
    int arr[5];

    for (int i=0; i<5; i++){
        cin >> arr[i];
    }  
    for (int i=0; i<5; i++){
        sum += arr[i];
    }
    sort(arr, arr+5);
    avg = sum/5;
    cout << avg << "\n" << arr[2];
}
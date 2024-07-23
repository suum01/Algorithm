#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n=0;

    cin >> n;

    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++)   cout << " ";
        for (int k=0;k<2*(n-i)-1;k++)   cout << "*";
        cout << "\n";
    }
}

// O(n^2)       
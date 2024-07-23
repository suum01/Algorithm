#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    for (int i=1;i<=n;i++){
        for (int j=0;j<i;j++) cout << "*";
        for (int k=0;k<2*(n-i);k++)   cout << " ";
        for (int m=0;m<i;m++) cout << "*";
        cout << "\n";
    }
    for (int i=0;i<n-1;i++){
        for (int j=n;j>i+1;j--)   cout << "*";
        for (int k=0;k<2*(i+1);k++) cout << " ";
        for (int m=n;m>i+1;m--) cout << "*";
        cout << "\n";
    }
}

// O(n^2)
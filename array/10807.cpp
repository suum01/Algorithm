#include <iostream>
using namespace std;

int n, f, cnt;
int s[101]={};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0;i<n;i++){
        cin >> s[i];
    }
    cin >> f;

    for (int i=0;i<n;i++){
        if (s[i]==f) cnt++;
    }
    cout << cnt;
}

// O(n)
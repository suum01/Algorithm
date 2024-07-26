#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,t[10000], Y=0, M=0;
    cin >> n;
    
    for (int i=0;i<n;i++){
        cin >> t[i];
    }

    for (int i=0;i<n;i++)   Y+=(t[i]/30+1)*10;    
    for (int i=0;i<n;i++){ 
        M+=(t[i]/60+1)*15; 
    }
    if (Y>M)    cout << "M " << M;
    else if (M>Y)   cout << "Y " << Y;
    else    cout << "Y M " << Y;

    return 0;
}

// O(n)
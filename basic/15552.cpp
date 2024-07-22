#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, A, B, s[T];

    cin >> T;

    for (int i=0;i<T;i++){
        cin >> A >> B;
        cout << A+B << "\n";
    } 

    return 0;
}

//O(n)
#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum=0;
    int n;
    int min = 100;

    for (int i=0;i<7;i++){
        cin >> n;
        
        if (n%2==1) {
            sum += n;
            if(n<min) min = n;
        }


    }
    if (sum !=0)
        cout << sum << "\n" << min << "\n";

    else    cout << -1;
    // -1로 출력안하고 "-1"로 출력했더니 틀림.
}
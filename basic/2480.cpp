#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && a == c)    cout << 10000+a*1000<<"\n";
    else if (a==b||a==c)    cout<<1000+a*100<<"\n";
    else if (b==c)   cout<<1000+b*100<<"\n";
    else{
        int m = max({a, b, c});
        cout << m*100<<"\n";
    }
}
    
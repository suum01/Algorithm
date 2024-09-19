# include <iostream>
# include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int j=1;
    string ans;
    cin >> n;
    stack<int> s;

    while(n--){
        int t;
        cin >> t;
        while(j<=t){
            s.push(j++);
            ans += "+\n";
        }
        if (s.top() != t){
            cout << "NO" << '\n';
            return 0;
        }
        s.pop();
        ans += "-\n";
    }
    cout << ans;
}
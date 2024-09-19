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

// O(n)
// +, -를 cout으로 출력하려고 함. <- 계산과 동시에 출력이 이뤄지는거라 컴퓨터가 수행하기 어려움.
// 해결방법 : ans라는 string에 저장한 뒤 string을 출력함.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, sum=0;
    cin >> k;

    stack<int> s;
    while(k--){
        int c;
        cin >> c;
        if (c!=0){
            s.push(c);
            sum += c;
        }
        else{
            if (s.empty())  cout << -1 << '\n';
            sum -= s.top();
            s.pop();
        }
    }
    cout << sum << '\n';
}


// O(n)

// 오답 풀이
// int sum을 초기화하지 않았다. 변수를 선언하고 초기화를 해주지 않는다면 해당 메모리에는 쓰레기값이 들어가있다. 반드시 초기화를 해줘야 한다.
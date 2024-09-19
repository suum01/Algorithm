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

// ���� Ǯ��
// int sum�� �ʱ�ȭ���� �ʾҴ�. ������ �����ϰ� �ʱ�ȭ�� ������ �ʴ´ٸ� �ش� �޸𸮿��� �����Ⱚ�� ���ִ�. �ݵ�� �ʱ�ȭ�� ����� �Ѵ�.
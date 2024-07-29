#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;

    cin >> s1 >> s2;
    int a[2][26]={0};
    for (auto c:s1) a[0][c-'a']++;
    for (auto c:s2) a[1][c-'a']++;
    
    int cnt=0;
    for(int i=0;i<26;i++)   cnt += abs(a[0][i]-a[1][i]);
    
    cout << cnt;
}
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, times;
    int s[10]={0};
    cin >> a >> b >> c;
    
    times = a*b*c;
    
    while(times>0){
        s[times%10]++;
        times/=10;
    }
    
    for (int i=0;i<10;i++)  cout << s[i] << "\n";    
}

// O(n)

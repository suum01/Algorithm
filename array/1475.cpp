#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int number, m=0;
    int s[10]={0};

    cin >> number;

    while (number>0){
        s[number%10]++;
        number/=10;
    }

    int ex = (s[6]+s[9]+1)/2;

    for (int i=0;i<10;i++)  {
        if (i==6||i==9) continue;
        m = max(m,s[i]);
    }
    m = max(m, ex);
    cout << m;    
}

// O(n)

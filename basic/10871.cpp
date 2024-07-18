#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n;
int b;
double x;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>x;
        while(n>0){
        cin >> b;
        if (b < x)  cout<<b<<' ';
        n--;
    }
}
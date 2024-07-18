#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d, sum;
    int i = 0;
    string s[3];

    while(i<3){
            
        cin >> a >> b >> c >> d;

        sum = a+b+c+d;

        if (sum == 3)   s[i] = "A";
        else if (sum == 2)  s[i] = "B";
        else if (sum == 1)  s[i] = "C";
        else if (sum == 0)  s[i] = "D";
        else if (sum == 4)  s[i] = "E";
        i++;
    }

    for (int j = 0; j<3; j++)
        cout << s[j] << "\n";
}
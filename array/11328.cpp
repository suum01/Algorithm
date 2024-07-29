#include <iostream>
#include <string>
using namespace std;



int main(){
    int n;    

    cin >> n;
    while(n--){
        string str1, str2;
        cin >> str1 >> str2;

        int bet[26]={};
        for (auto c:str1) bet[c-'a']++;
        for (auto c:str2) bet[c-'a']--;     

        bool ispossible = true;

        for (int i:bet){
            if (i!=0) ispossible = false;
        }

        if (ispossible) cout << "Possible\n";
        else    cout << "Impossible\n";
    }

}
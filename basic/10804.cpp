#include <iostream>
#include <algorithm>

using namespace std;

int card[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
int a, b;

void reverse(int a, int b){
    for (int i=0;i<(b-a+1)/2;i++){
            swap(card[a+i], card[b-i]);
        }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i=0;i<10;i++){
        cin >> a >> b;
        reverse(a-1, b-1);
    }

    for (int i=0;i<20;i++){
        cout << card[i] << " ";
    }
}
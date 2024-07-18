#include <iostream>

using namespace std;

int main(){
    int grade;

    cin >> grade;

    if (90 <= grade)
        cout << "A";
    else if (80 <= grade)
        cout << "B";
    else if (70 <= grade)
        cout << "C";
    else if (60 <= grade)
        cout << "D";
    else    cout << "F";
}
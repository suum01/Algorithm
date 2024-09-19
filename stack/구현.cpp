#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x){
    pos++;
    dat[pos-1] = x;
    
    // 더 간결히 고치면
    // dat[pos++] = x;
}

void pop(){
    dat[pos-1] = 0;
    pos--;

    // 간결히 고치기
    // pos--;
    // 이유 : 해당 값을 바꿔주지 않아도 나중에 push하면 덮여써짐.
}

int top(){
    return dat[pos-1];
}

void test(){
  push(5); push(4); push(3);
  cout << top() << '\n'; // 3
  pop(); pop();
  cout << top() << '\n'; // 5
  push(10); push(12);
  cout << top() << '\n'; // 12
  pop();
  cout << top() << '\n'; // 10
}

int main(void) {
	test();
}

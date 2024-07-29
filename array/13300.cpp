#include <iostream>
using namespace std;

int n, k, s, y, cnt;    // 학생수, 수용인원, 성별, 학년, 방개수
int f[7], m[7]; //여자, 남자

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for (int i=0;i<n;i++){
        cin >> s >> y;
        if (s==0)   f[y]+=1;
        else    m[y]+=1;
    }

    for (int i=1;i<=6;i++){ // 1~6학년까지
        cnt+=(f[i]/k)+(m[i]/k); // 꽉차는 방 개수 구하기
        if (f[i]%k !=0) cnt+=1; // 꽉 차지 않는 방 개수 구하기
        if (m[i]%k !=0) cnt+=1;
    }
    cout << cnt;
}

// O(n)
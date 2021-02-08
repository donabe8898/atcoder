#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>
#include<cstdlib>
#include<cctype>
#include<string>
using namespace std;

int main() {
    int H,W;
    int count[10]={0,0,0,0,0,0,0,0,0,0},ans=0;
    cin>>H>>W;
    vector<vector<string>> s;
    for (int i = 0; i < W; i++) {
        for (int j = 0; j < H; j++) {
            cin>>s[i][j];
            if (s[i][j] == "#") {
                count[i]++;
            }
        }
    }
    for (int j = 0; j < W; j++) {
        for (int i = 0; i < H; i++) {
            if (count[i] != count[j]) {
                ans++;
            }
        }
    }

    cout<<ans + 4<<endl;
    
    return 0;
}
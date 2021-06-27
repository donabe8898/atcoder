#include <bits/stdc++.h>
using ll = long long int;
#define RES 2000000;
using namespace std;
int main (){
	cin.tie(0);
   ios_base::sync_with_stdio(false);

   int x = 2;
   int *a;    //ポインタを定義
   a = &x;    //aにはxのアドレスを書き込む
   *a = 3;    //aに書き込んだアドレス元を書き換え
   cout<<x<<endl;

   int y;
   y = *a;    //aの指すアドレスの値を代入
   cout<<y<<endl;
	return 0;
}

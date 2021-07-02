#include <bits/stdc++.h>
using ll = long long int;
#define RES 2000000;
using namespace std;
int main (){
	cin.tie(0);
   ios_base::sync_with_stdio(false);
	/*
	int x=2;
	int a;
	a = x;
	a = 3;
	cout<<x<<endl;
	*/

   int xx = 2;
   int *aa;    //ポインタを定義
   aa = &xx;    //aにはxのアドレスを書き込む
   *aa = 3;    //aに書き込んだアドレス元を書き換え
   cout<<xx<<endl;

   int y;
   y = *aa;    //aの指すアドレスの値を代入
   cout<<y<<endl;
	return 0;
}

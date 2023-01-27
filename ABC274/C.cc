#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    a.push_back(d);
  }
  vector<int> heap(2 * n + 2, 0);
  for (int i = 1; i <= n; i++) {
    heap[i * 2] = heap[a[i - 1]] + 1;
    heap[i * 2 + 1] = heap[a[i - 1]] + 1;
  }
  for (int i = 1; i < 2 * n + 2; i++) {
    cout << heap[i] << endl;
  }
  return 0;
}
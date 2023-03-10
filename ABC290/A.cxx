#include <iostream>
#include <vector>
using namespace std;
int main() {
  int M, N;
  cin >> N >> M;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  vector<int> B(M);
  for (int i = 0; i < M; i++) {
    cin >> B[i];
  }
  int sum = 0;
  for (auto b : B) {
    sum += A[b - 1];
  }
  cout << sum << endl;
  return 0;
}
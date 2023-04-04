#include <iostream>

using namespace std;

#define ll long long
#define vector_ll vecor<long long>
#define MOD 1000000007


ll solve(ll N) {
  ll count = 0;
  for (ll L = 1; L * (L + 1) < 2 * N; L++) {
    long double a = (1.0 * N - (L * (L + 1)) / 2) / (L + 1);
    if (a - (ll)a == 0.0)
      count++;
  }
  return count;
}

int main() {
  int T;
  cin >> T;
  for (ll p = 0; p < T; p++) {
    ll n, ans = 0;
    cin >> n;
    cout << "Case #" << p + 1 << ": " << solve(n) + 1 << '\n';
  }
}

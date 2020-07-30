#include<bits/stdc++.h>

using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
#define IG cin.ignore(numeric_limits < streamsize > ::max(), '\n');
#define ll long long int
#define N 1378
#define maxn 1000003
#define FP ff.open("output.txt")
#define FR ff.open("output.txt")
#define valid(a, b) if (a >= 1 && a < row - 1 && b >= 1 && b < col - 1)
  fstream ff;

ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r;
string s1, s2, s;

string ss(ll a, ll b) {
  string s1 = "";
  ll sum = b;
  for (int i = 0; i < a; i++) {
    if (sum >= 9) {
      s1 += "9";
      sum -= 9;
    } else {
      s1.pb(48 + sum);
      sum = 0;
    }
  }
  return s1;
}

int main() {
  cin >> a >> b;
  if (a == 1 && b == 0) cout << "0 0\n";
  else if (b == 0 || 9 * a < b) cout << "-1 -1" << endl;
  else {
    string s1 = "";
    b--;
    ll sum = b;
    for (int i = 0; i < a - 1; i++) {
      if (sum >= 9) {
        s1 += "9";
        sum -= 9;
      } else {
        s1.pb(48 + sum);
        sum = 0;
      }
    }
    s1.pb(48 + 1 + sum);
    reverse(s1.begin(), s1.end());
    cout << s1 << " " << ss(a, b + 1) << endl;
  }
  return 0;
}

#include<bits/stdc++.h>

using namespace std;
#define mod 1000000007
#define PI 3.14159265359
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
#define IG cin.ignore(numeric_limits < streamsize > ::max(), '\n');
#define ll long long int
#define ull unsigned long long int
#define N 1378
#define maxn 1000001
#define FP ff.open("output.txt")
#define FR ff.open("input.txt")
#define valid(a, b) if (a >= 1 && a < row - 1 && b >= 1 && b < col - 1)
   fstream ff;
ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, tcase = 0, l, r;
string s, s1, s2;

ll ans;

int main() {
   cin >> t;
   while (t--) {
      int A[4], B[4];
      for (int i = 0; i < 4; i++) {
         cin >> A[i];
         B[i] = A[i];
      }
      sort(A, A + 4);
      if ((A[2] == max(B[0], B[1]) && A[3] == max(B[3], B[2])) ||
         (A[2] == max(B[3], B[2]) && A[3] == max(B[0], B[1]))) cout << "Yes\n";
      else cout << "No\n";

   }
   return 0;
}13

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

int main() {
    cin >> t;
    while (t--) {
        ll min_a = mod, min_b = mod;
        cin >> n;
        vector < ll > A(n), B(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            min_a = min(A[i], min_a);
        }
        for (int i = 0; i < n; i++) {
            cin >> B[i];
            min_b = min(B[i], min_b);
        }
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            a = abs(min_a - A[i]);
            b = abs(min_b - B[i]);
            sum += max(a, b);
        }
        cout << sum << endl;
    }
    return 0;
}

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
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int res = 0;
        for (int x = 100; x >= 2; x--) {
            int c = 0;
            vector < int > v1(v.begin(), v.end());
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (v1[i] + v1[j] == x) {
                        c++;
                        v1[i] = v1[j] = mod;
                    }

                }
            }
            res = max(res, c);
        }
        cout << res << endl;
    }
    return 0;
}

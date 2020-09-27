#include<bits/stdc++.h>

using namespace std;

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
#define N 1378
#define maxn 1000003
#define FP ff.open("output.txt")
#define FR ff.open("input.txt")
#define valid(a, b) if (a >= 1 && a < row - 1 && b >= 1 && b < col - 1)
    fstream ff;

ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r;

string s1, s2, s;

bool status[maxn];

int main() {
    cin >> n;
    map < string, int > M;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a >> s;
        sort(s.begin(), s.end());
        if (M[s]) {
            M[s] = min(M[s], a);
        } else M[s] = a;
    }
    int ans = INT32_MAX;
    if (M["ABC"]) ans = min(ans, M["ABC"]);
    if (M["A"] && M["B"] && M["C"]) ans = min(ans, M["A"] + M["B"] + M["C"]);
    if (M["A"] && M["BC"]) ans = min(ans, M["A"] + M["BC"]);
    if (M["B"] && M["AC"]) ans = min(ans, M["B"] + M["AC"]);
    if (M["C"] && M["AB"]) ans = min(ans, M["C"] + M["AB"]);
    if (M["AB"] && M["AC"]) ans = min(ans, M["AB"] + M["AC"]);
    if (M["AC"] && M["BC"]) ans = min(ans, M["AC"] + M["BC"]);
    if (M["AB"] && M["BC"]) ans = min(ans, M["AB"] + M["BC"]);
    cout << ((ans == INT32_MAX) ? -1 : ans) << endl;
    return 0;
}

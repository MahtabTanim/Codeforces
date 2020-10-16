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

int main() {
    cin >> n >> k;
    map < int, int > M;
    vector < int > v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        M[v[i]]++;
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] + k >= v[i + 1] && v[i + 1] > v[i]) M[v[i]] = 0;
    }

    int c = 0;
    for (auto & i: M) {
        c += i.second;
    }
    cout << c << endl;
    return 0;
}

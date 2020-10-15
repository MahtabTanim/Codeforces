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

bool sub(string s1, string s2) {
    if (s1.size() > s2.size()) swap(s1, s2);
    for (int i = 0; i <= s2.size() - s1.size(); i++) {
        string x = s2.substr(i, s1.size());
        if (x == s1) return true;
    }
    return false;
}

int main() {

    cin >> n;
    vector < pair < int, string > > v(n);
    for (int i = 0; i < n; i++) {
        cin >> s;
        v[i] = {
            s.size(),
            s
        };
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n - 1; i++) {
        if (sub(v[i].second, v[i + 1].second) == false) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    for (auto & i: v) cout << i.second << endl;
    return 0;
}

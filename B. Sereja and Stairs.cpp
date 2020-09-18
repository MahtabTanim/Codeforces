#include<bits/stdc++.h>

using namespace std;

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
#define FR ff.open("input.txt")
#define valid(a, b) if (a >= 1 && a < row - 1 && b >= 1 && b < col - 1)
    fstream ff;

ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r;

string s1, s2, s;

int Count(map < int, int > & m) {
    int c = 0;
    for (auto & i: m) {
        if (i.second > 2) i.second = 2;
        c += i.second;
    }
    return c;
}

int main() {
    cin >> n;
    vector < int > v;
    map < int, int > m;
    int Max = -1;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
        m[v[i]]++;
        Max = max(v[i], Max);
    }
    int c = Count(m);
    if (m[Max] >= 2) c--, m[Max]--;
    cout << c << endl;
    v.clear();
    for (auto & i: m) {
        cout << i.first << " ";
        i.second--;
        if (i.second) v.push_back(i.first);
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";

    return 0;
}

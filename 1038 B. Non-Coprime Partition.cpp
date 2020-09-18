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

int Pr(ll n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return i;
    }
    return -1;
}

int main() {
    cin >> n;
    m = (n * (n + 1)) / 2;
    int x = Pr(m);
    if (x == -1) {
        cout << "No" << endl;
    } else {
        cout << "Yes\n";
        cout << 1 << " " << x << endl;
        cout << n - 1 << " ";
        for (int i = 1; i <= n; i++) {
            if (i != x) cout << i << " ";
        }
    }
    return 0;
}

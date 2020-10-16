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

struct Tuple {
    int sum;
    int seq;
    int ele;
};

bool Compare(Tuple t1, Tuple t2) {
    if (t1.sum < t2.sum) return true;
    return false;
}

int main() {
    cin >> n;
    vector < Tuple > V;
    int c = 0;
    for (int j = 1; j <= n; j++) {
        cin >> a;
        int sum = 0;
        vector < int > v(a);
        for (int i = 0; i < a; i++) {
            cin >> v[i];
            sum += v[i];
        }
        for (int i = 1; i <= a; i++) {
            V.pb({ sum - v[i - 1], j, i });
        }
    }
    sort(V.begin(), V.end(), Compare);
    for (int i = 0; i < V.size() - 1; i++) {
        if (V[i].sum == V[i + 1].sum && V[i].seq != V[i + 1].seq) {
            cout << "YES\n";
            cout << V[i].seq << " " << V[i].ele << endl;
            cout << V[i + 1].seq << " " << V[i + 1].ele << endl;
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}

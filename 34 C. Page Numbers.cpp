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

void Print(pair < int, int > p) {
    if (p.first == p.second) cout << p.first;
    else cout << p.first << "-" << p.second;
}

int main() {
    cin >> s;
    int M[5001] = {
        0
    };
    for (int i = 0; i < s.size();) {
        if (s[i] == ',') i++;
        else {
            int num = 0;
            while (s[i] != ',' && i < s.size()) {
                num = num * 10 + s[i++] - 48;
            }
            M[num] = 1;
        }
    }
    int start = 1, end = 1, i = 0;
    while (M[i] == 0) i++;

    start = end = i;

    vector < pair < int, int >> res;

    while (end < 5000) {
        while (M[end + 1] && end < 5000) {
            end++;
            if (M[start] == 0) start = end;
        }
        if (M[start] || M[end]) {
            res.pb({
                start,
                end
            });
        }
        start = end = end + 1;
    }

    Print(res[0]);
    for (int i = 1; i < res.size(); i++) {
        cout << ",";
        Print(res[i]);
    }
    return 0;
}

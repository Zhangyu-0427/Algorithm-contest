#include <bits/stdc++.h>

#define x first
#define y second

// Want to attack openallzzz? Just think about it.

using namespace std;

typedef long long LL;
typedef pair<LL, LL> PLL;
typedef pair<int, int> PII;

const int N = 1e5 + 10;

string pi = "31415926535897932384626433832795028841971";

int main() {
    cin.tie(0); cout.tie(0);
    std::ios::sync_with_stdio(false);

    // start coding!

    int T;
    cin >> T;
    while(T --) {
        string s;
        cin >> s;
        int res = 0;
        for(int i = 0; i < s.size(); i ++) {
            if(s[i] != pi[i]) break;
            else res = i + 1;
        }

        cout << res << "\n";
    }
    return 0;
}
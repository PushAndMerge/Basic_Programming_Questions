#include <iostream>
#include <string>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        long long sum = 0, multiplier = 1, count = 0;
        for (char c : s) {
            if (c == 'T') {
                sum += multiplier;
                multiplier = 1;
            } else {
                count++;
                multiplier *= 2;
            }
        }

        cout << sum << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}

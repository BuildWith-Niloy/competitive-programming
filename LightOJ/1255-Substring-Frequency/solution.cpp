#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++) {
        string text, pattern;
        cin >> text >> pattern;

        int n = text.size();
        int m = pattern.size();


        int lps[m];
        lps[0] = 0;
        int j = 0;

        for (int i = 1; i < m; i++) {
            while (j > 0 && pattern[i] != pattern[j]) {
                j = lps[j - 1];
            }
            if (pattern[i] == pattern[j]) {
                j++;
            }
            lps[i] = j;
        }


        int count = 0;
        j = 0;

        for (int i = 0; i < n; i++) {
            while (j > 0 && text[i] != pattern[j]) {
                j = lps[j - 1];
            }
            if (text[i] == pattern[j]) {
                j++;
            }
            if (j == m) {
                count++;
                j = lps[m - 1];
            }
        }

        cout << "Case " << tc << ": " << count << "\n";
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int up = 0, lo = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            up++;
        } else if (islower(s[i])) {
            lo++;
        }
    }

    if (up < lo) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    } else if (up > lo) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s;

    return 0;
}

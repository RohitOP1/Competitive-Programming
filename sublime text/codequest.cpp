#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int count = 0;
        string s1 = "codeforces";
        string s2;
        cin  >> s2;

        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}

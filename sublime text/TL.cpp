void solve() {
    LL L, r, m;
    cin >> L >> r >> m;

    int satisfaction = (m / L) + (m / r);

    if (m % L != 0) {
        // Add code here if needed
    }

    satisfaction++;

    cout << satisfaction << endl;
}

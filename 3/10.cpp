#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double v=0;
    cin >> n;
    while (n>=1 and v<=0.5) {
        v = v + 1.0/n;
        n=n-1;
    }
    cout << (n+1) << endl;
}

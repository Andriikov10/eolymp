#include <bits/stdc++.h>
using namespace std;

int main() {
    double x1, y1, r1, x2, y2, r2, res = -999;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double dist2 = pow(x1-x2, 2) + pow(y1-y2, 2);
    
    if(dist2 == 0 and r1 == r2)
        res = -1;
    else if(dist2 > pow(r1+r2, 2))
        res = 0;
    else if(pow(r1-r2, 2) > dist2)
        res = 0;
    else if (pow(r1+r2, 2) == dist2)
        res = 1;
    else if(pow(r2-r1, 2) == dist2)
        res = 1;
    else res = 2;
    cout << res << endl; 
}

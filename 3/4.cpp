#include <bits/stdc++.h>
using namespace std;

int main() {
    double x1,y1,r1,x2,y2,r2,res=-999;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double dist=pow(
        pow(abs(x1-x2),2) + pow(abs(y1-y2),2),
        0.5
    );
    if(x1==x2 and y1==y2 and r1==r2)
        res =-1;
    else if(dist>r1+r2)
        res = 0;
    else if(abs(r1-r2) > dist)
        res = 0;
    else if (abs(r1+r2)==dist)
        res = 1;
    else if(abs(r2-r1)==dist)
        res = 1;
    else res=2;
    cout << res << endl; 
}

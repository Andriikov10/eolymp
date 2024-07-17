#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int res=0;
    if(n<10) res=1;
    else if (n<100) res=2;
    else if (n<1000) res=3;
    else if (n<10000) res=4;
    else if (n<100000) res=5;
    else if (n<1000000) res=6;
    else if (n<10000000) res=7;
    else if (n<100000000) res=8;
    else if (n<1000000000) res=9;
    else if (n<10000000000) res=10;
    cout<<res<<endl;
}

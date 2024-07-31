#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int prostoe(int num)
{
    if (num==0 || num==1) return 0;
    for (int i=2; i<num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int revers(int num)
{
    string res="";
    string s = to_string(num);
    for(int i=s.length()-1; i>=0; i--) {
        res = res + s[i];
    }
    return stoi(res);
}

int main()
{
    int a,b,res=0;
    cin>>a>>b;
    for (int i=a; i<=b; i++) {
        if (
            prostoe(i) && 
            prostoe(revers(i))
        ) {
            res++;
        }
    }
    cout<<res<<endl;
}

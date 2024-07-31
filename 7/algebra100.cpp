//algebra
#include <bits/stdc++.h>
using namespace std;


string denormalizeRoman(string roman) {
    roman=regex_replace(roman,regex("IV"),"IIII");
    roman=regex_replace(roman,regex("IX"),"VIIII");
    roman=regex_replace(roman,regex("XL"),"XXXX");
    roman=regex_replace(roman,regex("XC"),"LXXXX");
    roman=regex_replace(roman,regex("CD"),"CCCC");
    roman=regex_replace(roman,regex("CM"),"DCCCC");

    return roman;    
}

int toNum(string rome){
    string romeD = "MDCLXVI";
    int  arabD[] = {1000, 500, 100, 50, 10, 5, 1};
    string denormal=denormalizeRoman(rome);
    int res=0;
    for(int i=0; i<denormal.length(); i++) {
        res += arabD[romeD.find(denormal[i])];
    }
    return res;
}

string toRome(int num) {
    string romeD2[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int arabD2[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string res="";
    for(int i =0; i<=12; i++) {
        while(num-arabD2[i] >= 0)
        {
            res += romeD2[i];
            num = num - arabD2[i];
        }        
    }
    return res;
}

int main()
{
    string s,r1,r2;
    cin>>s;
    r1=s.substr(0, s.find("+"));
    r2=s.substr(s.find("+")+1,s.length());
    cout<<toRome(toNum(r1)+toNum(r2))<<endl;
}

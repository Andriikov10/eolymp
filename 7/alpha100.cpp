//alfa
#include <iostream>
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

string sortRomanString(string roman) {
    int i=0, j=0;
    char t;
    roman=regex_replace(roman,regex("I"),"A");
    roman=regex_replace(roman,regex("V"),"B");
    roman=regex_replace(roman,regex("X"),"E");
    roman=regex_replace(roman,regex("L"),"F");
    roman=regex_replace(roman,regex("C"),"G");
    roman=regex_replace(roman,regex("D"),"H");
    roman=regex_replace(roman,regex("M"),"J");
    
    for (i=0;i<roman.length()-1;i++) {
        for (j=i;j<roman.length();j++) {
            if (roman[i]<roman[j]) {
                t=roman[i];
                roman[i]=roman[j];
                roman[j]=t;
            }
        }
    }
    roman=regex_replace(roman,regex("A"),"I");
    roman=regex_replace(roman,regex("B"),"V");
    roman=regex_replace(roman,regex("E"),"X");
    roman=regex_replace(roman,regex("F"),"L");
    roman=regex_replace(roman,regex("G"),"C");
    roman=regex_replace(roman,regex("H"),"D");
    roman=regex_replace(roman,regex("J"),"M");
    return roman;
}

string normalizeRoman(string roman) {
    roman=regex_replace(roman,regex("IIIII"),"V");
    roman=regex_replace(roman,regex("VV"),"X");
    roman=regex_replace(roman,regex("XXXXX"),"L");
    roman=regex_replace(roman,regex("LL"),"C");
    roman=regex_replace(roman,regex("CCCCC"),"D");
    roman=regex_replace(roman,regex("DD"),"M");
    roman=regex_replace(roman,regex("IIII"),"IV");
    roman=regex_replace(roman,regex("VIIII"),"IX");
    roman=regex_replace(roman,regex("XXXX"),"XL");
    roman=regex_replace(roman,regex("LXXXX"),"XC");
    roman=regex_replace(roman,regex("CCCC"),"CD");
    roman=regex_replace(roman,regex("DCCCC"),"CM");
    roman=regex_replace(roman,regex("VIV"),"IX");
    roman=regex_replace(roman,regex("LXL"),"XC");
    roman=regex_replace(roman,regex("DCD"),"CM");
    return roman;
}

int main()
{
    string s;
    cin>>s;
    s = regex_replace(s,regex("\\+")," ");
    s = denormalizeRoman(s);
    s = sortRomanString(s);
    s = normalizeRoman(s);
    cout<<s<<endl;
}

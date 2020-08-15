#include<bits/stdc++.h>
#include <iostream>
#include <string>
//#include <vector>
//#include <math.h>

#define LOG(x)          cout << (x) << endl;
//#define ARR_LOG(x)      for(auto c : x) {LOG(c)};
//#define ALL(x)      (x).begin(), (x).end()

using namespace std;

void letters_num(string inpStr, int *lowerCase_num, int *upperCase_num)
{
    for (auto ch : inpStr)
    {
        if (islower(ch))
            (*lowerCase_num)++;
        else
            (*upperCase_num)++;
    }
}

int main ()
{
    string inpStr = "";
    cin >> inpStr;
    
    int lowerCase_num = 0, upperCase_num = 0;
    
    
    letters_num(inpStr, &lowerCase_num, &upperCase_num);
    
    if (lowerCase_num >= upperCase_num)
    {
        for (auto &c : inpStr)
            c = tolower(c);
        
    }
    else
    {
        for (auto &c : inpStr)
            c = toupper(c);
    }
    
    LOG(inpStr)
    
    return 0;
}
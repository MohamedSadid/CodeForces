#include<bits/stdc++.h>
#include <iostream>
#include <string>
//#include <vector>
//#include <math.h>

#define LOG(x)          cout << (x) << endl;
//#define ARR_LOG(x)      for(auto c : x) {LOG(c)};
//#define ALL(x)      (x).begin(), (x).end()

using namespace std;


int main ()
{
    
    char pointer{'a'};
    int res = 0;
    
    string inpStr = "";
    cin >> inpStr;
    
    
    
    for (auto ch : inpStr)
    {
        if (ch < pointer)
        {
            if (abs(pointer - ch) > 13)
            {
                res += ((ch - pointer) + 26);    
            }
            else
            {
                res += abs(ch - pointer);
            }
        }
        else
        {
            if (abs(pointer - ch) > 13)
            {
                res += ((pointer - ch) + 26);    
            }
            else
            {
                res += abs(pointer - ch);
            }
            
        }
        pointer = ch;
    }
    
    LOG(res)
    
    return 0;
}
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
    int inpStr_size = 0;
    string inpStr = "";
    int res = 0;
    
    cin >> inpStr_size >> inpStr;
    
    for (auto ch: inpStr)
    {
        if (ch == 'A')
        {
            res++;
        }
        else if (ch == 'D')
        {
            res--;
        }
    }
    
    if (res > 0)
    {
        LOG("Anton")
    }
    else if (res < 0)
    {
        LOG("Danik")
    }
    else
    {
        LOG("Friendship")
    }
    
    return 0;
}
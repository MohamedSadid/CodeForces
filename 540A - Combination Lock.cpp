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
    
    int strLen = 0;
    
    string s1, s2;
    cin >> strLen >> s1 >> s2;
    int res = 0;
    
    for (int i = 0; i < strLen; i++)
    {
        if (abs(s1[i] - s2[i]) > 5)
        {
            res += (((s1[i] < s2[i]) ? (s1[i] - s2[i]) : (s2[i] - s1[i])) + 10);
        }
        else
        {
            res += abs(s1[i] - s2[i]);
        }
        
    }
    
    LOG(res)
    
    
    return 0;
}
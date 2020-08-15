#include<bits/stdc++.h>
#include <iostream>
#include <string>
//#include <vector>
//#include <math.h>
 
#define LOG(x)          cout << (x) << endl;
#define ARR_LOG(x)      for(auto c : x) {LOG(c)};
//#define ALL(x)      (x).begin(), (x).end()
 
using namespace std;
 
 
map<char, int>m;
 
int main ()
{
    int ans = 1 << 30;
    int inpStr_size = 0, latinAlp_num = 0;
    string inpStr = "";
    
    cin >> inpStr_size >> latinAlp_num >> inpStr;
    
    for (auto i = 0; i < inpStr_size; i++)
    {
        m[inpStr[i]]++;
    }
    
    for (auto ch = 'A'; ch < 'A' + latinAlp_num; ch++)
    {
        ans = min(m[ch], ans);
    }
    
    LOG(ans * latinAlp_num)
    return 0;
}
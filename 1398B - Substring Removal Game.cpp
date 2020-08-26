#include<bits/stdc++.h>
#include <iostream>
#include <string>
//#include <vector>
//#include <math.h>

#define LOG(x)          cout << (x) << endl;
#define ARR_LOG(x)      for(auto c : x) {LOG(c)};
//#define ALL(x)      (x).begin(), (x).end()

using namespace std;


int main ()
{
    int tests = 0;
    string inpStr = "";
    
    cin >> tests;
    
    while (tests != 0)
    {
        
        vector<int> num_v;
        cin >> inpStr;
        
        for (int i = 0; i < inpStr.size(); i++)
        {
            int ones_count = 0;
            while (inpStr[i] == '1')
            {
                ones_count++;
                i++;
            }
            
            if (ones_count != 0)
            {
                num_v.push_back(ones_count);
            }
        }
        
        sort(num_v.begin(), num_v.end(), greater<int>());
        int res = 0;
        for (int i = 0; i < num_v.size(); i += 2)
        {
            res += num_v.at(i);
        }
        LOG(res)
        tests--;
    }
    
    return 0;
}
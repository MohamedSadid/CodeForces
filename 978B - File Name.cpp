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
    int str_size = 0;
    string inpStr = "";
    
    cin >> str_size >> inpStr;
    
    int x_num = 0;
    int res = 0;
    
    for (auto i = 0; i < str_size; i++)
    {
        x_num = 0;
        while (inpStr[i] == 'x')
        {
            x_num++;
            i++;
        }
            
        
        if (x_num >= 3)
        {
            res += (x_num - 2);
        }
        
    }
    
    LOG(res)
    
    return 0;
}
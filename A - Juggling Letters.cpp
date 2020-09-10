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
    int tests = 0, str_size = 0;
    int letter_occurance = 0;
    
    string inpStr = "";
    
    cin >> tests;
    
    while (tests != 0)
    {
        cin >> str_size;
        letter_occurance = 0;
        
        int index_arr[26] = {0};
        
        for (auto i = 0; i < str_size; i++)
        {
            cin >> inpStr;
            
            for (auto c : inpStr)
                index_arr[c - 'a']++;
        }
        
        for (auto i = 0; i < 26; i++)
        {
            if (index_arr[i] % str_size != 0)
            {
                LOG("NO")
                break;
            }
                
            if (i == 25)
                LOG("YES")
        }
        
            
        tests--;
    }
    
    return 0;
}
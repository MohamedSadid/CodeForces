#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>
 
//#include <vector>
//#include <math.h>
 
#define LOG(x)          cout << (x) << endl;
#define ARR_LOG(x)      for(auto c : x) {cout << c << " ";};
//#define ALL(x)      (x).begin(), (x).end()
 
using namespace std;
 
#define BONUS_POINTS    2
int main ()
{
    int stamina = 0, dragons = 0, res = 0;
    cin >> stamina >> dragons;
    
    int dragondStrength[dragons][BONUS_POINTS];
    
    for (auto i = 0; i < dragons; i++)
    {
        for (auto j = 0; j < BONUS_POINTS; j++)
        {
            cin >> dragondStrength[i][j];
        }
    }
    
    
    for (auto i = 0; i < dragons; i++)
    {
        
        if (stamina > dragondStrength[i][0])
        {
            stamina += dragondStrength[i][1];
            dragondStrength[i][0] = (1 << 30);
            res++;
            i = -1;
        }
    }
    
    if (res == dragons)
    {
        LOG("YES")
    }
    else
    {
        LOG("NO")
    }
    
    return 0;
}
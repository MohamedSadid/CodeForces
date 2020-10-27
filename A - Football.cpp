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
 
int main ()
{
    string inp;
    int counter = 0;
    
    cin >> inp;
    for (auto i = 0; i < inp.size() - 1; i++)
    {
        if (counter >= 6) break;
        if (inp[i] == inp[i + 1])
        {
            counter++;
        }
        else
        {
            counter = 0;
        }
    }
    
    
    if (counter >= 6)
    {
        LOG("YES")
    }
    else
    {
        LOG("NO")
    }
    
    return 0;
}
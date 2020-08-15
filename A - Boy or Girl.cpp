#include <iostream>
#include <string>
//#include <vector>
 
//#include <math.h>
 
 
using namespace std;
#define LOG(x)      cout << (x) << endl;
 
 
//#define ALL(x)      (x).begin(), (x).end()
 
 
int main ()
{
    string inpStr = "";
    
    cin >> inpStr;
    
    for (auto i = 0; i < inpStr.size(); i++)
    {
        for (auto j = 0; j < inpStr.size(); j++)
        {
            if (inpStr[i] == inpStr[j] && i != j)
            {
                inpStr.erase(inpStr.begin() + i, inpStr.begin() + i + 1);
                i--;
            }
        }
    }
    
    if (inpStr.size() % 2 == 0)
    {
        LOG("CHAT WITH HER!")
    }
    else
    {
        LOG("IGNORE HIM!")
    }
    
    
    return 0;
}
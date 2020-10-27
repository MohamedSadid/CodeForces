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
    string borze_alphabet = "";
    cin >> borze_alphabet;
    string borze_alphabet_map[3] = {".", "-.", "--"};
    
    string locator = "";
    string res = "";
    for (auto i = 0; i < borze_alphabet.size(); i++)
    {
        locator += borze_alphabet.at(i);
        for(auto j = 0; j < 3; j++)
        {
            if (locator == borze_alphabet_map[j])
            {
                res += to_string(j);
                locator = "";
                break;
            }
        }
    }
    LOG(res)
}
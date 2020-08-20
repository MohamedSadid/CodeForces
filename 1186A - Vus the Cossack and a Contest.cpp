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
    
    int people = 0, pens = 0, sketches = 0;
    
    cin >> people >> pens >> sketches;
    
    if (pens >= people && sketches >= people)
    {
        LOG("Yes")
    }
    else
    {
        LOG("No")
    }
    
    
    return 0;
}
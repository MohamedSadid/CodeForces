#include<bits/stdc++.h>
#include <iostream>
#include <string>
//#include <vector>
//#include <math.h>

#define LOG(x)          cout << (x) << endl;
#define ARR_LOG(x)      for(auto c : x) {LOG(c)};
//#define ALL(x)      (x).begin(), (x).end()

using namespace std;

bool beautiful_year(int year)
{
    int arr_digits[10] = {0};
    
    while (year)
    {
        arr_digits[(year % 10)]++;
        year /= 10;
    }
    
    int res = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr_digits[i] == 1)
            res++;
    }
    
    return (res == 4) ? (true) : (false);
}

int main ()
{
    int year = 0;
    
    cin >> year;
    
    while (!beautiful_year(++year));
    
    LOG(year)
    return 0;
}
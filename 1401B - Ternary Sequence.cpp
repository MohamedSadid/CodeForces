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
    int res = 0;
    int tests = 0;
    
    int arr_a[3] = {0};
    int arr_b[3] = {0};
    
    cin >> tests;
    
    while (tests != 0)
    {
        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
            {
                cin >> arr_a[i];    
            }
            else
            {
                cin >> arr_b[i - 3];
            }
        }
        
        /*check for array a*/
        int ans = min(arr_a[2], arr_b[1]);
        arr_a[2] -= ans;
        ans*= 2;
        
        /*check for array b*/
        arr_b[2] = arr_b[2] - arr_a[2] - arr_a[0];
        
        if (arr_b[2] > 0)
        {
            ans -= (2 * arr_b[2]);
        }
        
        
        LOG(ans)
        tests--;
    }
    
    return 0;
}
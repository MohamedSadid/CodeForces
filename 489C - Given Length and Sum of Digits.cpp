#include<bits/stdc++.h>
#include <iostream>
#include <string>
//#include <vector>
//#include <math.h>

#define LOG(x)          cout << (x) << endl;
#define ARR_LOG(x)      for(auto c : x) {LOG(c)};
//#define ALL(x)      (x).begin(), (x).end()

using namespace std;

void get_data(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main ()
{
    int size = 0;
    int sum = 0;
    
    int min_num;
    
    string s1 = "", s2 = "";
    
    cin >> size >> sum;
    
    if (!sum)
    {
        if (size == 1)
        {
            cout << "0 0";
            return 0;
        }
        else
        {
            cout << "-1 -1";
            return 0;
        }
    }
    
    while (size--)
    {
        min_num = min(sum, 9);
        s1 += min_num + '0';
        sum -= min_num;
    }
    
    if (sum > 0)
    {
        cout << "-1 -1";
        return 0;
    }
    
    for (int i = (s1.size() - 1); i >= 0; i--)
    {
        
        s2 += s1[i];
    }
    
    int i = 0;
    for (i; s2[i] == '0'; i++);
    
    s2[i]--;
    s2[0]++;
    
    cout << s2 << " " << s1;
    return 0;
}
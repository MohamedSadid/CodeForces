#include <iostream>
//#include <string>
//#include <vector>
 
//#include <math.h>
 
 
using namespace std;
#define LOG(x)      cout << (x) << endl;
#define ROWS        5
#define COLS        5
 
//#define ALL(x)      (x).begin(), (x).end()
 
 
int main ()
{
    unsigned int inp = 0;
    unsigned int res = 0;
    
    for (auto i = 0; i < ROWS; i++)
    {
        for (auto j = 0; j < COLS; j++)
        {
            cin >> inp;
            if (inp)
            {
                res += (abs(2 - i) + abs(2 - j));
            }
        }
    }
    
    LOG(res);
    
    return 0;
}
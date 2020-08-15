#include "iostream"
#include "math.h"
 
using namespace std;
 
#define LOG(x)      cout << x << endl;
int main ()
{
    unsigned long n = 0;
    unsigned long m = 0;
    unsigned long a = 0;
    cin >> n >> m >> a;
    
    unsigned long long res = 0;
    
    res = ceil((double)n / a);
    res *= ceil((double)m / a);
    
    LOG(res);
        
 
    return 0;
}
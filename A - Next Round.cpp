#include "iostream"
#include "string"
 
using namespace std;
#define LOG(x)      cout << x << endl
 
int main ()
{
    int n, k;
    cin >> n >> k;
 
    int a;
    for (int i = 0; i < k; ++i)
    {
        cin >> a;
        if (a == 0)
        {
            LOG(i);
            return 0;
        }
    }
 
    int b;
    for (int i = k; i < n; ++i)
    {
        cin >> b;
        if (b != a)
        {
            LOG(i);
            return 0;
        }
    }
    
    LOG(n);
    return 0;
}
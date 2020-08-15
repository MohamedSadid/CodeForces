#include "iostream"
 
using namespace std;
 
int main ()
{
    unsigned int weight = 0;
    cin >> weight;
    if (weight % 2 == 0 && weight > 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
        
 
    return 0;
}
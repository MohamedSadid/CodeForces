#include "iostream"
#include "string"
 
 
using namespace std;
#define LOG(x)      cout << x << endl;
 
void str_lower(string& str)
{
    for (auto &ch : str)
    {
        ch = tolower(ch);
    }
}
 
int main ()
{
    string s1, s2;
    cin >> s1 >> s2;
    
    
    str_lower(s1);
    str_lower(s2);
    
    LOG(s1.compare(s2))
    
    return 0;
}
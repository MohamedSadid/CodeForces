#include <iostream>
 
using namespace std;
#define LOG(x)      cout << x << endl;
 
void get_data(int *candy_arr, int *orange_arr, int gifts)
{
    for (int i = 0; i < gifts; i++)
    {
        cin >> candy_arr[i];
    }
    
    for (int i = 0; i < gifts; i++)
    {
        cin >> orange_arr[i];
    }
    
}
 
int min_arr(int *arr, int size)
{
    int min = *arr;
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) < min)
        {
            min = *(arr + i);
        }
    }
    return min;
}
 
int main ()
{
    int tests = 0;
    int gifts = 0;
    long long res = 0;
    int min_candy;
    int min_orange;
    cin >> tests;
    
    
    
    while (tests > 0)
    {
    
        cin >> gifts;
    
        int candy_arr[gifts];
        int orange_arr[gifts];
        
        get_data(candy_arr, orange_arr, gifts);
        
        min_candy = min_arr(candy_arr, gifts);
        min_orange = min_arr(orange_arr, gifts);
        
        
        res = 0;
        for (int i = 0; i < gifts; i++)
        {
            if ((candy_arr[i] - min_candy) >= (orange_arr[i] - min_orange) && candy_arr[i] !=  min_candy)
            {
                res += (candy_arr[i] - min_candy);
                
            }
            else if ((candy_arr[i] - min_candy) <= (orange_arr[i] - min_orange) && orange_arr[i]  != min_orange)
            {
                
                res += (orange_arr[i] - min_orange);
            }
        }
        LOG(res)
        tests--;
    }
    
    return 0;
}
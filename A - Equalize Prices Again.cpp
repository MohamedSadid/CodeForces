#include <iostream>
#include <math.h>
//#include <string>
//#include <vector>
 
using namespace std;
#define LOG(x)      cout << (x) << endl;
#define ALL(x)      (x).begin(), (x).end()
 
void get_data(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
 
int data_sum(int *arr, int size)
{
    int sum = 0;
    
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
 
 
int main ()
{
    int tests = 0;
    int goods = 0;
    
    cin >> tests;
    while (tests != 0)
    {
        cin >> goods;
        int goods_arr[goods];
        get_data(goods_arr, goods);
        
        LOG((data_sum(goods_arr, goods) + goods - 1) / goods)
        
        tests--;
    }
    
    return 0;
}
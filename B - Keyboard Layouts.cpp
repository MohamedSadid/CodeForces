#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>
 
//#include <vector>
//#include <math.h>
 
#define LOG(x)          cout << (x) << endl;
#define ARR_LOG(x)      for(auto c : x) {cout << c << " ";};
//#define ALL(x)      (x).begin(), (x).end()
 
using namespace std;
 
 
int main ()
{
    string dictionary = "", lookup_table = "", dictionary_input = "";
	cin >> dictionary >> lookup_table >> dictionary_input;
	
	string res = "";
	
	for (auto i = 0; i < dictionary_input.size(); i++)
	{
    	if (islower(dictionary_input[i]))
    	{
    	    /*search for the input in the dectionary and return the index*/
    	    res += lookup_table[dictionary.find(dictionary_input[i])];
    	}
    	else if (isupper(dictionary_input[i]))
    	{
    	    /*search for the input in the dectionary and return the index*/
    	    res += toupper(lookup_table[dictionary.find(tolower(dictionary_input[i]))]);
    	}
    	else /*if it's digit*/
    	{
    	    res += dictionary_input[i];
    	}
    	
	}
	
	LOG(res)
	
}
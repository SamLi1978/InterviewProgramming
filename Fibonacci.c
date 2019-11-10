//g++  5.4.0

/*
Fibonacci sequence
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long int length = 10;
    long int t;
    long int a1, a2;
    vector<long int> v = {1, 1};

    a1 = v[0];
    a2 = v[1];
    
    for (long int i=2; i<length; i++)
    {
        t = a1 + a2;
        v.push_back(t);
        a1 = a2;
        a2 = t;
        
    }
    
    for (auto i:v)
        cout << i << " ";
    cout << endl;
    
    
}

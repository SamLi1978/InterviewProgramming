/*
detect an interger is palindrome
*/


#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int a = 1234321;
    int b = 1234554321;
    int c = 12345543214;    
    
    stack<char> s;
    
    string sa = to_string(c);
    
    for (auto i : sa)
        s.push(i);
    
    string ssa;
    
    do
    {
        ssa.push_back(s.top());
        s.pop();
        
    }while (!s.empty());
    
    if (sa == ssa)
        cout << "Palindrome" << endl;
    else
        cout << "not Palindrome" << endl;
  
    
    return 0;
    
}


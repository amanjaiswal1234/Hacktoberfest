#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T; 
    cin >> T;
    
    long n; 
    
    while(T--)
    {
        cin >> n;
        n = log2((long double)n);
        
        if(n == 0) cout << "0\n";
        else if(n == 1) cout << "1\n";
        else
        {
            n %= 4;
            
            if(n == 0) cout << "0\n";
            else if(n == 1) cout << "9\n";
            else if(n == 2) cout << "2\n";
            else if(n == 3) cout << "3\n";
        }
    }
}

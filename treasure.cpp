#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T, rem; 
    cin >> T;
    
    long long int n, l; 
    
    while(T--)
    {
        cin >> n;
        l = log2((long double)n);
        
        if(l == 0) cout << "0\n";
        else if(l == 1) cout << "1\n";
        else
        {
            rem = l % 4;
            
            if(rem == 0) cout << "0\n";
            else if(rem == 1) cout << "9\n";
            else if(rem == 2) cout << "2\n";
            else if(rem == 3) cout << "3\n";
        }
    }
}

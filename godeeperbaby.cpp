#include <bits/stdc++.h>
#define int long long int
#define BOLT ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define db double
#define endl "\n"
using namespace std;
const db PI=acos(-1);
template <typename T>
void swap(T *a,T *b){
	T c=*a;
	*a=*b;
	*b=c;
}
int32_t main(){
	int a=5,b=10;
        cout<<a<<" "<<b<<endl;
	swap<int>(a,b);
	cout<<a<<" "<<b<<endl;
	return 0;
}

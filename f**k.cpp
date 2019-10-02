#include <bits/stdc++.h>
#define int long long int
#define BOLT ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define db double
#define endl "\n"
using namespace std;
const db PI=acos(-1);
vector<int> v[100005];
template <typename T>
void swap(T *a,T *b){
	T c=*a;
	*a=*b;
	*b=c;
}
int partition(int arr[], int l, int h) 
{ 
	int x = arr[h]; 
	int i = (l - 1); 
	for (int j = l; j <= h - 1; j++) { 
		if (arr[j] <= x) { 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[h]); 
	return (i + 1); 
} 
void quickSort(int *arr, int l, int h) 
{ 
	int stack[h - l + 1]; 
	int top = -1; 
	stack[++top] = l; 
	stack[++top] = h;  
	while (top >= 0) { 
		h = stack[top--]; 
		l = stack[top--]; 
		int p = partition(arr, l, h); 
		if (p - 1 > l) { 
			stack[++top] = l; 
			stack[++top] = p - 1; 
		} 
		if (p + 1 < h) { 
			stack[++top] = p + 1; 
			stack[++top] = h; 
		} 
	} 
} 
int32_t main(){
	cout<<"Enter the Number of Elemens\n";
    int n;
    cin>>n;
    cout<<"Enter the Elements"<<endl;
    int arr[n];
    for(auto &it:arr)
        cin>>it;
	cout<<"Initial Array is(Before Sorting)\n";
	for(auto &it:arr)
	    cout<<it<<" ";
	cout<<endl;
	quickSort(arr,0,n-1);
	cout<<"After Bubble Sort Array Becomes\n";
	for(auto &it:arr)
	    cout<<it<<" ";
	cout<<endl;
	return 0;
}

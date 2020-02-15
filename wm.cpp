#include <cmath>
#include <bits/stdc++.h> 
using namespace std;

void weighted_mean(int n, int arr[100000])
{
    int i,j;
    float x;
    x=0;
	j=1;
    for(i=0;i<n;i++)
    {
        x=x+(arr[i] * j);
		j++
    }
	j=(n*(n+1))/2;
    x=x/j;
    cout<<x;
    
}

int main() {
    int n,i;
    int arr[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    weighted_mean(n,arr);
    return 0;
}
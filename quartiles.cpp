#include <cmath>
#include <bits/stdc++.h> 
using namespace std;

void median(int n, int arr[100000])
{
    float x;
    if(n%2==0)
    {
        n=n/2;
        x=arr[n]+arr[n-1];
        x=x/2;
        cout<<x<<"\n";
    }
    else
    {
        n=n/2;
        x=arr[n];
        cout<<x<<"\n";
    }
}

int main() {
    int n,i,x;
    int a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    x=n/2;
    if(n%2==0)
    {
        median(x,a);
        median(n,a);
        median(x,a+x);
    }
    else
    {
        median(x,a);
        median(n,a);
        median(x,a+x+1);
    }
    return 0;
}

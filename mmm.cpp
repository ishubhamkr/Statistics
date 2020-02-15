#include <cmath>
#include <bits/stdc++.h> 
using namespace std;

void mean(int n, int arr[100000])
{
    int i;
    float x;
    x=0;
    for(i=0;i<n;i++)
    {
        x=x+arr[i];
    }
    x=x/n;
    cout<<x;
    
}
void median(int n, int arr[100000])
{
    float x;
    if(n%2==0)
    {
        n=n/2;
        x=arr[n]+arr[n-1];
        x=x/2;
        cout<<x;
    }
    else
    {
        n=n/2;
        x=arr[n];
        cout<<x;
    }
}
void mode(int n,int arr[100000])
{
    int count[arr[n-1]]; 
    for (int i = 0; i < arr[n-1]; i++) 
        count[i] = 0; 
    for (int i = 0; i < n; i++) 
        count[arr[i]]++; 
    int mode = 0; 
    int k = 0; 
    for (int i = 1; i < arr[n-1]; i++) 
    { 
        if (count[i] > k) 
        { 
            k = count[i]; 
            mode = i; 
        } 
    } 
  
    cout << mode; 
} 

int main() {
    int n,i;
    int arr[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    sort(arr, arr+n);
    mean(n,arr);
    cout<<"\n";
    median(n,arr);
    cout<<"\n";
    mode(n,arr);
    return 0;
}
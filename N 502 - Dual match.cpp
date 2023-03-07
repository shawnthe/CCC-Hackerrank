#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int binarysearch(long long int arr[],long long int l,long long int r,long long int x) 
{ 
    while (l <= r) 
    { 
        long long int m = l + (r - l) / 2;
        if (arr[m] == x) 
            return 1; 
        if (arr[m] < x) 
            l = m + 1;
        else
            r = m - 1; 
    } 
    return 0; 
} 
long long int print(long long int arr[],long long int n,long long int sum)
{
    long long int i,l=0,r=n-1,c=0,key;
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        key=sum-arr[i];
        if(binarysearch(arr,l,r,key)==1)
            c++;
    }
    return c;
}
int main() {
    long long int n;
    cin>>n;
    long long int i,arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    long long int key;
    cin>>key;
    cout<<print(arr,n,key);
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<climits>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int res;
    res=a[n-1]*a[n-2]*a[n-3];
    cout<<res;
    
    return 0;
}

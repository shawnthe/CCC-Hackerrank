#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int mice(vector<int> &A, vector<int> &B) {
    int m=-100,i;
    int n = A.size();
    sort(A.begin(),A.end());  sort(B.begin(),B.end());
    for(i=0;i<n;i++)
    {
            if(m<abs(A[i]-B[i]))
                m=abs(A[i]-B[i]);
    }
    
    return m;
    
}

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> mices(n), holes(n);
    for (int i = 0; i < n; i++) scanf("%d", &mices[i]);
    for (int i = 0; i < n; i++) scanf("%d", &holes[i]);
    int minTime = mice(mices, holes);
    printf("%d", minTime);
    return 0;
}

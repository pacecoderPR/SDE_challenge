#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
     long long  curr=0,ans=0,sum=0;
     for(int i=0;i<n;i++){
         if(curr+arr[i]>=0){
             curr+=arr[i];
             ans=max(ans,curr);
         }
         else{
             curr=0;

         }
     }
     return ans;
}
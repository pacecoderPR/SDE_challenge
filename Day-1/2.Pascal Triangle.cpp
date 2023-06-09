#include <bits/stdc++.h>


vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
   vector<vector<long long int>> ans(n);
   ans[0].push_back(1);
   for(int i=1;i<n;i++){
     for(int j=0;j<=i;j++){
        int idx_i=i-1;
        int idx_j_1=j-1;
        int idx_j_2=j;
        long long int sum=0;
        if(idx_j_1>=0)sum+=ans[idx_i][idx_j_1];
        if(idx_j_2<=idx_i)sum+=ans[idx_i][idx_j_2];
        ans[i].push_back(sum);
     }
   }
   return ans;
}

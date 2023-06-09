#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &v, int n)
{
     bool hell=1;
     vector<int> ans,got;
     int val=v[n-1],idx=-1,ind=n;
     for(int i=n-1;i>=1;i--){
         if(v[i]>v[i-1]){
            //  cout<<i<<endl;
            idx=i-1;
            break;
             
         }
     }
    //   cout<<idx<<endl;
        // cout<<idx<<" "<<ind<<" "<<val<<endl;
         if(idx==-1){
         sort(v.begin(),v.end());
          return v;
     }
        for(int i=n-1;i>idx;i--){
            if(v[i]>v[idx]){
                swap(v[i],v[idx]);
                break;
            }
        }
    
    
        for(int i=0;i<=idx;i++){
            ans.push_back(v[i]);
        }
        for(int i=n-1;i>idx;i--) ans.push_back(v[i]);
         
    
   
    return ans;
}
int maximumProfit(vector<int> &v){
    // Write your code here.
    int mini=v[0],ans=0,n=v.size();
        for(int i=1;i<n;i++){
            int val=v[i]-mini;
            ans=max(ans,val);
            mini=min(mini,v[i]);
        }
        return ans;

}
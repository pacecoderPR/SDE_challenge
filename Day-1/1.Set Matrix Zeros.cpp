#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &v)
{
	int n=v.size(),m=v[0].size();
    vector<pair<int,int>> indices;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
            if(!v[i][j])indices.push_back({i,j});
		}
	}
	for(auto &it:indices){
		int idx_i=it.first;
		int idx_j=it.second;
		for(int j=0;j<m;j++ )v[idx_i][j]=0;
		for(int i=0;i<n;i++)v[i][idx_j]=0;
	}

}
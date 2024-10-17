#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<pair<int, int >>> adjlist(n);
    for(int  i =0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adjlist[u-1].push_back({v-1,w});
        adjlist[v-1].push_back({u-1,w});
    }

    cout<<"AdjList"<<endl;
    for(int i = 0;i<n;i++){
        cout<<"vertex"<<i+1<<':';
        for(auto j : adjlist[i]){
            cout<<"("<<j.first+1<<","<<j.second<<")";
        }
        cout<<endl;
    }

}
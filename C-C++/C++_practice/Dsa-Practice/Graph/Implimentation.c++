#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;

    vector<vector<int>> adjlist(n);
    for(int i = 0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    cout<<"adjlist"<<endl;
    for(int i =0;i<m;i++){
        cout<<"vertex"<<i<<':';
        for(auto j : adjlist[i]){
            cout<<" "<<j;
        }
        cout<<endl;
    }
}
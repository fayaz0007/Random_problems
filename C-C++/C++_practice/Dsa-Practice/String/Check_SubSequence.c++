#include <bits/stdc++.h>
using namespace std;

bool CheckSubsequence(string str1,string str2,int n,int m){
    int j =0;
    for(int i = 0;i<n&&j<m;i++){
        if(str1[i]==str2[j]){
            j++;
        }
    }
    return (j==m);
}

int main(){
string str1,str2;
cin>>str1>>str2;
int n = str1.length(),m = str2.length();
if(CheckSubsequence(str1,str2,n,m)){
    cout<<"True"<<endl;

}else{
    cout<<"false"<<endl;
}
}
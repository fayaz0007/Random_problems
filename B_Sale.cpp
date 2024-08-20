#include <bits/stdc++.h>
using namespace std;
vector<int> numbers;
void sorting(int n){
    for(int i =1;i<n;i++){
        int current = numbers[i];
        int j = i-1;
        while(numbers[j]>current && j>=0){
            numbers[j+1]=numbers[j];
            j--;
        }
        numbers[j+1]=current;
    }
}

int main(){
    int m,n;
    cin>>m>>n;
    for(int i =0;i<m;i++){
        int a;
        cin>>a;
        numbers.push_back(a);
    }
    sorting(m);
    int sum = 0;
    for(int i = 0;i<n;i++){
        if(numbers[i]<0){
            sum+=abs(numbers[i]);
        }
    }
    cout<<abs(sum)<<endl;
}
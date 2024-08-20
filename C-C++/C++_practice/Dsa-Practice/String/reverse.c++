#include <bits/stdc++.h>
using namespace std;
void reverse(char str[],int low, int high){
    while(low<high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}
void reverseSentence(char str[], int n){
    int start = 0;
    for(int end = 0;end<n;end++){
        if(str[end]==' '){
            reverse(str,start,end-1);
            start = end+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
}



int main(){
    int Max_INT = 1000;
    char sentence[Max_INT];
    cin.getline(sentence,Max_INT);
    int n = strlen(sentence);
    reverseSentence(sentence,n);
    cout<<sentence<<endl;

}
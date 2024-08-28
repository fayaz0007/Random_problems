// #include <bits/stdc++.h>
// using namespace std;


// void solution(int loop){
//     for(int i = 0;i<loop;i++){
//         int loopLenth;
//         cin>>loopLenth;

//         int arr[loopLenth];
//         char temp[loopLenth];
//         for(int j = 0; j<loopLenth;j++){
//             cin>>arr[j];
//         }

//         for(int k = 0;k<loopLenth;k++){
//             char max = 'a';
//             if(arr[k]==0){
//                 temp[k]==max;
//                 max++;
//             }else{
//                 int same = 0;
//                 for(int m = 0;m<k;m++){
//                     for(int n=0;n<k;n++){
//                         if(arr[m]==arr[n]){
//                             same++;
//                         }
//                         if(same==arr[k]){
//                             cin>>temp[arr[m]];
//                             break;
//                         }
//                     }
//                     if(same<arr[k]){
//                         same = 0;
//                     }else{
//                         break;
//                     }
//                 }
//             }
//         }
//         for(int r = 0;r<loopLenth;r++){
//             cout<<temp[r]<<endl;
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     solution(n);

// }
#include <bits/stdc++.h>
using namespace std;

void solution(int loop){
    for(int i = 0; i < loop; i++){
        int loopLength;
        cin >> loopLength;

        int arr[loopLength];
        char temp[loopLength];
        
        for(int j = 0; j < loopLength; j++){
            cin >> arr[j];
        }

        for(int k = 0; k < loopLength; k++){
            char maxChar = 'a';
            if(arr[k] == 0){
                temp[k] = maxChar;
            } else {
                int same = 0;
                for(int m = 0; m < k; m++){
                    for(int n = 0; n <= m; n++){
                        if(arr[m] == arr[n]){
                            same++;
                        }
                        if(same==arr[k]){
                            break;
                        }
                    }
                    if(same == arr[k]){
                        temp[k] = arr[m];
                        break;
                    }
                    else{
                        same =0;
                    }
                }
                
            }
        }

        for(int r = 0; r < loopLength; r++){
            cout << temp[r] << endl;
        }
    }
}

int main(){
    int n;
    cin >> n;
    solution(n);
    return 0;
}

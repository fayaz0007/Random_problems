#include <bits/stdc++.h>
using namespace std;
vector<int> arr;


void merge(int l, int mid, int R) {
    int m = mid - l + 1;  
    int n = R - mid;     

    vector<int> arr1(m);
    vector<int> arr2(n);

    for (int i = 0; i < m; i++) {
        arr1[i] = arr[l + i];  
    }
    for (int i = 0; i < n; i++) {
        arr2[i] = arr[mid + 1 + i];
    }
    
    arr1[m] = INT_MAX;
    arr2[n] = INT_MAX;

    int i = 0, j = 0;
    for (int k = l; k <= R; k++) {
        if (arr1[i] <= arr2[j]) {
            arr[k] = arr1[i];
            i++;
        } else {
            arr[k] = arr2[j];
            j++;
        }
    }
}

void mergeSort(int l, int R) {
    if (l < R) {
        int mid = (l + R) / 2;
        mergeSort(l, mid);
        mergeSort(mid + 1, R);
        merge(l, mid, R);
    }
}


int main() {
    int n;
    cin >> n;  
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    mergeSort(0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

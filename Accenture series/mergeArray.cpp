#include<bits/stdc++.h>
using namespace std;

void mergeArray(int arr1[], int arr2[], int m, int n){
    for(int i=0; i<n; i++){
        arr1[m+i] = arr2[i];
    }
    sort(arr1, arr1+m+n);
}

int main(){
    int a[] = {1,2,3,6,0,0,0};
    int b[] = {4,5,7};
    mergeArray(a, b, 4, 3);
    for(int i: a){
        cout << i << endl;
    }
    return 0;
}

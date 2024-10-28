#include<bits/stdc++.h>
using namespace std;

pair<int, int> maxInArray(int arr[], int n){
    pair<int, int> max(INT_MIN, INT_MIN);
    for(int i=0; i<n; i++){
        if(arr[i]>max.first){
            max.first = arr[i];
            max.second = i;
        }
    }
    return max;
}

int main(){
    int arr[] = {23, 45, 82, 27, 66, 12, 78, 13, 71, 86};
    pair<int, int> p= maxInArray(arr,10);
    cout << p.first << '\n' << p.second << endl;
    return 0;
}

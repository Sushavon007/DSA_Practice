#include<bits/stdc++.h>
using namespace std;

int checkAndSumOfNum(int m, int n){
    int sum = 0;
    for(int i=m; i<=n; i++){
        if(i%3==0 && i%5==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    cout << checkAndSumOfNum(100, 160);
    return 0;
}

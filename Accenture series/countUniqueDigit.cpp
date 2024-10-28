#include<bits/stdc++.h>
using namespace std;

int countUnique(int num){
    set<int> s;
    int temp=num, rem;
    while(temp>0){
        rem = temp%10;
        s.insert(rem);
        temp /= 10;
    }

    return s.size();
}

int checkAutoBiographical(int num){
    string strNum = to_string(num);
    int len = strNum.size();
    vector<int> v(len, 0);
    for(auto x: strNum){
        int index = x - '0';
        if(index < len) v[index]++;
    }
    for(int x=0; x<len; x++){
        if(v[x] != strNum[x] - '0') return 0;
    }
    return countUnique(num);
}

int main(){
    cout << checkAutoBiographical(1210);
    return 0;
}

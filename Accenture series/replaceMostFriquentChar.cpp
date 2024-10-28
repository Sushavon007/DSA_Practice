#include<bits/stdc++.h>
using namespace std;

string replaceMostFriquentChar(string str, char c){
    map<char, int> m;
    int freq = INT_MIN;
    char mostFriquentChar; 
    for(auto x: str){
        m[x]++;
    }
    for(auto x: m){
        if(x.second>freq){
            freq = x.second;
            mostFriquentChar = x.first;
        }
    }
    replace(str.begin(), str.end(), mostFriquentChar, c);
    return str;
}

int main(){
    cout << replaceMostFriquentChar("bbadbbababb", 't');
    return 0;
}

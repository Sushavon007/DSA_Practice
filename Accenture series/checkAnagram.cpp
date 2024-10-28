// #include<bits/stdc++.h>
// using namespace std;



// int main(){

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

string checkAnagram(string str1, string str2){
    if(str1.size() != str2.size()) return "NO";
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if(str1 == str2) return "YES";
    else return "NO";
}

int main(){
    cout << checkAnagram("listen", "silent");
    return 0;
}
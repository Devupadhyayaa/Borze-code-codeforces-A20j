# Borze-code-codeforces-A20j
making a dynamic vector for borze code
************code***************
#include<bits/stdc++.h>
using namespace std;
int main(){
int s=0;
char ch;
string str;
getline(cin,str);
istringstream my_stream(str);
vector<char>v;
while(my_stream>>ch){
    v.push_back(ch);
}
s=sizeof(v);
for(int i=0;i<s;i++){
    if(v[i]=='-'&&v[i+1]=='.'){
        cout<<"1";
        i++;
        s=s+2;
    }
    else if(v[i]=='-'&&v[i+1]=='-'){
        cout<<"2";
        i++;
        s=s+2;
    }
    else if(v[i]=='.'){
        s=s+2;
        cout<<"0";
    }
}
return 0;
}

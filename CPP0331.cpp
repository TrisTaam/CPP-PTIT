#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t;
string s;

string add(string s1,string s2){
    while(s1.size()<s2.size()) s1="0"+s1;
    while(s1.size()>s2.size()) s2="0"+s2;
    string s="";
    int a,b=0;
    ford(i,s1.size()-1,0){
        a=s1[i]+s2[i]-'0'*2+b;
        s=char(a%10+'0')+s;
        b=a/10;
    }
    if (b) s="1"+s;
    return s;
}

bool res1(string s,int i,int j,int z){
    string s1=s.substr(i,j-i+1);
    string s2=s.substr(j+1,z-j);
    string s3=add(s1,s2);
    if (s3.size()>s.size()-z) return false;
    string s4=s.substr(z+1,s3.size());
    if (s3==s4){
        if (z+s3.size()==s.size()-1) return true;
        return res1(s,j+1,z,z+s3.size());
    }
    return false;
}

bool res2(string s){
    int n=s.size();
    foru(i,0,n-2)
        foru(j,i+1,n-1)
            if (res1(s,0,i,j)) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        cout << (res2(s)?"Yes":"No") << "\n";
    }
}
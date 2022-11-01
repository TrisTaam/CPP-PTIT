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
string s1,s2;

string sub(string s1,string s2){
    while(s1.size()<s2.size()) s1="0"+s1;
    while(s1.size()>s2.size()) s2="0"+s2;
    if (s1<s2) swap(s1,s2);
    string s="";
    int a,b=0;
    ford(i,s1.size()-1,0){
        a=s1[i]-s2[i]-b;
        if (a<0){
            a+=10;
            b=1;
        }
        else b=0;
        s=char(a+'0')+s;
    }
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s1;
        cin >> s2;
        cout << sub(s1,s2) << "\n";
    }
}
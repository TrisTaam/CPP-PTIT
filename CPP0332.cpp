#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

string s;
vector<string> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,s);
    stringstream ss(s);
    while(ss >> s){
        foru(i,0,s.size()-1) s[i]=tolower(s[i]);
        a.push_back(s);
    }
    cout << a.back();
    if (a.size()>1)
        foru(i,0,a.size()-2) cout << a[i][0];
    cout << "@ptit.edu.vn";
}
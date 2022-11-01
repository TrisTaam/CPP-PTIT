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
string s1,s2,s;
set<string> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin,s1);
        getline(cin,s2);
        stringstream ss(s1);
        a.clear();
        while(ss >> s)
            if (s2.find(s)==string::npos) a.insert(s);
        for(string x:a) cout << x << " ";
        cout << "\n";
    }
}
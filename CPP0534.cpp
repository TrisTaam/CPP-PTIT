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
int cnt;

bool palin(string s){
    int n=s.size();
    foru(i,0,n/2)
        if (s[i]!=s[n-i-1]) return false;
    return true;
}

bool cmp(string s1,string s2){
    while(s1.size()<s2.size()) s1="0"+s1;
    while(s1.size()>s2.size()) s2="0"+s2;
    return s1>s2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin >> s)
        if (s.size()>1&&palin(s)) a.push_back(s);
    sort(a.begin(),a.end(),cmp);
    if (a.size()==1) cout << a[0] << " 1";
    else{
        cnt=1;
        foru(i,0,a.size()-2)
            if (a[i]==a[i+1]) cnt++;
            else{
                cout << a[i] << " " << cnt << "\n";
                cnt=1;
            }
        cout << a.back() << " " << cnt;
    }
}
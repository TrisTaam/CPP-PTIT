#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

ifstream f1;
ofstream f2;
string s;
ll a,ans;

void check(string s){
    if (s.size()>10) return;
    ll sum=0;
    int j=0;
    if (s[0]=='-') j=1;
    foru(i,j,s.size()-1){
        if (!isdigit(s[i])) return;
        sum=sum*10+s[i]-'0';
    }
    if (sum>=INT_MAX) return;
    if (j) sum*=-1;
    ans+=sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    f1.open("DATA.in",ios::in);
    ans=0;
    while(f1 >> s) check(s);
    cout << ans;
}
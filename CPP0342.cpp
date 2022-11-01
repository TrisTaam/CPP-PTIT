#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,cnt;
string s,s1;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        cnt=0;
        s1="";
        for(char x:s)
            if (isalpha(x)) s1+=x;
            else cnt+=(x-'0');
        sort(s1.begin(),s1.end());
        cout << s1;
        if (cnt) cout << cnt;
        cout << "\n";
    }
}
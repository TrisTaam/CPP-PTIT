#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,i,pos;
string s;
char maxc;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        n=s.size();
        if (n==1) cout << s;
        else{
            maxc='0';
            i=n-2;
            while(s[i]<=s[i+1]&&i>=0) i--;
            if (i==-1) cout << -1;
            else{
                ford(j,n-1,i+1)
                    if (s[i]>s[j]&&maxc<=s[j]){
                        maxc=s[j];
                        pos=j;
                    }
                swap(s[i],s[pos]);
                cout << s;
            }
        }
        cout << "\n";
    }
}
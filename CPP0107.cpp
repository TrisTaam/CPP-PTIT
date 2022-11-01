#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const string s1="ABBADCCABDCCABD";
const string s2="ACCABCDDBBCDDBB";
int t,n,ans;
char a;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    cout << setprecision(2) << fixed;
    while(t--){
        cin >> n;
        s="";
        foru(i,1,15){
            cin >> a;
            s+=a;
        }
        ans=0;
        if (n==101)
            foru(i,0,14) ans+=(s[i]==s1[i]);
        else
            foru(i,0,14) ans+=(s[i]==s2[i]);
        cout << (float)ans/15*10 << "\n";
    }
}
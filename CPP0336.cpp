#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,a[256],n;
string s1,s2,s3,ans;
bool kt;

bool res(string s){
    int b[256]={0};
    for(char x:s) b[x]++;
    foru(i,'a','z')
        if (b[i]<a[i]) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s1;
        cin >> s2;
        fill(a,0);
        for(char x:s2) a[x]++;
        n=s1.size();
        kt=false;
        foru(i,1,n){
            foru(j,0,n-i){
                s3=s1.substr(j,i);
                if (res(s3)){
                    cout << s3;
                    kt=true;
                    break;
                }
            }
            if (kt) break;
        }
        if (!kt) cout << -1;
        cout << "\n";
    }
}
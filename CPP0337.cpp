#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,b[26],n,cnt1,cnt2,l,ans;
string s;
bool a[26];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        fill(a,false);
        cnt1=0;
        for(char x:s)
            if (!a[x-'a']){
                a[x-'a']=true;
                cnt1++;
            }
        n=s.size();
        fill(b,0);
        cnt2=0;
        l=0;
        ans=INT_MAX;
        foru(i,0,n-1){
            b[s[i]-'a']++;
            cnt2+=(b[s[i]-'a']==1);
            if (cnt1==cnt2){
                while(b[s[l]-'a']>1){
                    b[s[l]-'a']--;
                    l++;
                }
                ans=min(ans,i-l+1);
            }
        }
        cout << ans << "\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,cnt[10],cntOdd,num,maxx,p;
string s,res,tmp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--){
        cin >> s;
        fill(cnt,0);
        foru(i,0,s.size()-1) cnt[s[i]-'0']++;
        cntOdd=0;
        foru(i,0,9)
            if (cnt[i]&1)
                if (cnt[i]>=cntOdd){
                    num=i;
                    cntOdd=cnt[i];
                }
        res="";
        ford(i,9,0)
            if (cnt[i]%2==0) res+=string(cnt[i]/2,i+'0');
        if (res==""||res[0]=='0'){
            maxx=0;
            foru(i,1,9)
                if (cnt[i]>=maxx){
                    maxx=cnt[i];
                    p=i;
                }
            res=string(maxx,p+'0');
        }
        else{
            string tmp=res;
            reverse(tmp.begin(),tmp.end());
            if (!cntOdd) res+=tmp;
            else res+=(string(cntOdd,num+'0')+tmp);
        }
        cout << res << "\n";
    }
}
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
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        if (s.size()==1) cout << s << "1";
        else{
            cnt=1;
            foru(i,0,s.size()-2)
                if (s[i]==s[i+1]) cnt++;
                else{
                    cout << s[i] << cnt;
                    cnt=1;
                }
            cout << s.back() << cnt;
        }
        cout << "\n";
    }
}
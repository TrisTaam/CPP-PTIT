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
string s1,s2;

string multi(string s1,string s2){
    int n1=s1.size();
    int n2=s2.size();
    vector<int> a(n1+n2,0);
    foru(i,0,n1-1)
        foru(j,0,n2-1) a[i+j]+=(s1[i]-'0')*(s2[j]-'0');
    string s="";
    int b=0;
    ford(i,n1+n2-2,0){
        a[i]+=b;
        s=char(a[i]%10+'0')+s;
        b=a[i]/10;
    }
    if (b) s=to_string(b)+s;
    while(s[0]=='0'&&s.size()>1) s.erase(0,1);
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        cout << multi(s1,s2) << "\n";
    }
}
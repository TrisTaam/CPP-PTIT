#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,a;
string s;
vector<string> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> a;
        cin.ignore();
        getline(cin,s);
        stringstream ss(s);
        b.clear();
        while(ss >> s){
            foru(i,0,s.size()-1) s[i]=tolower(s[i]);
            s[0]=toupper(s[0]);
            b.push_back(s);
        }
        if (a==1){
            cout << b.back();
            if (b.size()>1)
                foru(i,0,b.size()-2) cout << " " << b[i];
        }
        else{
            foru(i,1,b.size()-1) cout << b[i] << " ";
            cout << b[0];
        }
        cout << "\n";
    }
}
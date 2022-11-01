#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

string s;
vector<string> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin >> s) a.push_back(s);
    foru(i,0,a.size()-1){
        a[i][0]=toupper(a[i][0]);
        foru(j,1,a[i].size()-1) a[i][j]=tolower(a[i][j]);
    }
    foru(i,0,a.back().size()-1) a.back()[i]=toupper(a.back()[i]);
    if (a.size()==1) cout << a[0];
    else{
        cout << a[0];
        foru(i,1,a.size()-2) cout << " " << a[i];
        cout << ", " << a.back();
    }
}
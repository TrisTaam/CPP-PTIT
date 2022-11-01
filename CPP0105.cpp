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
string s;
bool a[10];

bool res(string s){
    for(char x:s)
        if (x!='0'&&x!='6'&&x!='8'&&a[x]) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        fill(a,false);
        for(char x:s) a[x-'0']=true;
        cout << (res(s)?"YES":"NO") << "\n";
    }
}
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    for(char &x:s) x=tolower(x);
    for(char x:s)
        if (x!='a'&&x!='e'&&x!='i'&&x!='o'&&x!='u'&&x!='y') cout << "." << x;
}
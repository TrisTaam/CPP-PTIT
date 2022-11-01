#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

ifstream f1;
ofstream f2;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    f1.open("PTIT.in",ios::in);
    f2.open("PTIT.out",ios::out);
    while(!f1.eof()){
        getline(f1,s);
        f2 << s << "\n";
    }
}
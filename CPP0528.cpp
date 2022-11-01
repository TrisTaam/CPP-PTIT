#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

struct sv{
    int stt;
    string id,name,cls,email,cpn;
};

const int N=1e5+5;
int n,q;
sv a[N];
string s;

bool cmp(sv a,sv b){
    return a.name<b.name;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    foru(i,0,n-1){
        a[i].stt=i+1;
        cin >> a[i].id;
        cin.ignore();
        getline(cin,a[i].name);
        cin >> a[i].cls;
        cin >> a[i].email;
        cin >> a[i].cpn;
    }
    sort(a,a+n,cmp);
    cin >> q;
    while(q--){
        cin >> s;
        foru(i,0,n-1)
            if (a[i].cpn==s) cout << a[i].stt << " " << a[i].id << " " << a[i].name << " " << a[i].cls << " " << a[i].email << " " << a[i].cpn << "\n";
    }
}
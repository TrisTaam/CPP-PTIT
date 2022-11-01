#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

string trans(string s){
    stringstream ss(s);
    string ans="";
    while(ss >> s) ans+=toupper(s[0]);
    return ans;
}

class Gv{
public:
    static int NUM_GV;
    Gv();
    string getJob();
    friend istream& operator >>(istream &in,Gv &a);
    friend ostream& operator <<(ostream &out,Gv a);
private:
    string id,name,job;
};

Gv::Gv(){}

string Gv::getJob(){
    return job;
}

istream& operator >>(istream &in,Gv &a){
    a.id=to_string(++Gv::NUM_GV);
    if (a.id.size()==1) a.id="0"+a.id;
    a.id="GV"+a.id;
    getline(in,a.name);
    getline(in,a.job);
    a.job=trans(a.job);
    return in;
}

ostream& operator <<(ostream &out,Gv a){
    cout << a.id << " " << a.name << " " << a.job << "\n";
    return out;
}

int Gv::NUM_GV=0;

int n,q;
vector<Gv> a;
Gv tmp;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    cin.ignore();
    foru(i,1,n){
        cin >> tmp;
        a.push_back(tmp);
    }
    cin >> q;
    cin.ignore();
    while(q--){
        getline(cin,s);
        s=trans(s);
        cout << "DANH SACH GIANG VIEN BO MON " << s << ":\n";
        foru(i,0,n-1)
            if (a[i].getJob()==s) cout << a[i];
    }
}
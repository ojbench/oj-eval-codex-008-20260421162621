#include <bits/stdc++.h>
using namespace std;int main(){ios::sync_with_stdio(false);cin.tie(nullptr);string s; if(!(cin>>s)) return 0; if(s.size()<5){ cout<<s; return 0;} array<char,5> a; for(int i=0;i<5;i++) a[i]=s[i]; sort(a.begin(),a.end()); for(char c:a) cout<<c; return 0;}

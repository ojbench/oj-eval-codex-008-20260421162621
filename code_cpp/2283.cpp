#include <bits/stdc++.h>
using namespace std;
void hanoi(int n, char A, char B, char C){ if(n==0) return; hanoi(n-1,A,C,B); cout<<A<<"->"<<C<<"\n"; hanoi(n-1,B,A,C);} 
int main(){ios::sync_with_stdio(false);cin.tie(nullptr); char ch; if(!(cin.get(ch))) return 0; int n; if(ch==':') n=10; else n=ch-'0'; if(n<1) return 0; hanoi(n,'A','B','C'); return 0;}

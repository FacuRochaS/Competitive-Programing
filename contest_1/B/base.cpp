#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(0);
 
    cin.tie(0);  
    cout.tie(0);
 
    
    int a,b; // large
 
    cin >> a >> b; 
    ll l = 0;
    while(a <= b){
        l++;
        b = b * 2;
        a = a * 3;
    }
    
    cout << l;
 
 
    
    
}
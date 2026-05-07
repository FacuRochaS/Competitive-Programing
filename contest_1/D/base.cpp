#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(0);
 
    cin.tie(0);  
    cout.tie(0);
 
    
    ll n; // large
 
    cin >> n; 
 
    vector<string> v;
    vector<int> h;
 
       
    for (ll i=0; i < n; i++){
        string x;
        cin >> x ;
        int res = 0;
        int cantidad = 0;
        char ant = 'L';
        for (int i=0; i < x.size(); i++){
            if(ant == 'L' && x[i] == 'L'){
                cantidad++;
            }
            else{
                if(x[i] == 'L'){
                    cantidad = 1;
                }
                else{
                    cantidad=0;
                }
                
            }
            ant = x[i];
            if(res < cantidad ){
                res = cantidad;
            }
        }
        h.push_back(res +1);
 
        
    }
 
 
 
 
    for(int i=0; i < h.size(); i++){
        
        cout << h[i] << "\n";
 
    }
 
 
 
    
    
 
 
    
    
}
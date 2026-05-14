#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(0);
 
    cin.tie(0);  
    cout.tie(0);
 
    
    int n,m; // large
 
    cin >> n >> m; 
 
    vector<string> v;
    vector<string> w;
    vector<string> z;
    vector<string> res;
       
    for (ll i=0; i < m; i++){
        string x,d;
        cin >> x >> d;
        v.push_back(x); 
        w.push_back(d);
    }
 
    for (ll i=0; i < n; i++){
        string x;
        cin >> x ;
        
        z.push_back(x); 
        
    }
 
    //podria comparar solo 1
    // o resolver con diccionario
    //map<Tipo key,tipo Clave>
 
    for(int i=0; i < z.size(); i++){
        
        for(int j=0; j < w.size(); j++){
        if (z[i] == w[j] || z[i]== v[j]){
            if(w[j].size() >= v[j].size()){
                cout << (v[j]);
                cout << " ";
                j =  w.size();
            }
            else{
                cout <<(w[j]);
                cout << " ";
                j =  w.size();
            }
        }
        }
 
    }
 
 
 
    
    
 
 
    
    
}
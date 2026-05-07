#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);

    cin.tie(0);  
    cout.tie(0);


    ll n; //fence large
    ll k; //piano large
    cin >> n; 
    cin >> k;
    vector<ll> v(n);   // primero calculamos O(n), guardamos las sumas


    vector<ll> sp(n+1); //vector donde vamos a guardar las sumas de los prefijos
    sp[0]=0; // ponemos el neutro de la suma
    for (ll i=0; i < n; i++){
        
        cin >> v[i]; //Obtein the fences large
        sp[i+1] = sp[i] + v[i];

    }

    ll min;
    ll res = 1;
    for(ll i=0; i < (sp.size() - k); i++){
        if(i ==0){
            min = sp[k];
        }
        else{
            if(min > (sp[k+i] - sp[i])){
                min =  (sp[k+i] - sp[i]);
                res = i + 1;
            }
        }
    }
    cout << res;
    
    
}


//g++ -Wall -std=c++17 nombre.cpp -o nombreEjecutable
// ./ nombreEjecutable
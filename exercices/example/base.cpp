#include <bits/stdc++.h>
using namespace std;
typedef long long ll; // renombrar/crear un alias a un tipo

bool isPair(long long x){
    if( x%2 == 0 ) return true;
    return false;
}

vector<ll> arreglos(ll x){

    vector<ll> v;

    vector<ll> b(x); //x lo uso para definir el tamaño

    v.push_back(x);
    v.push_back(2*x);
    ll c;
    cin >> c;
    for (ll i=0; i < c; i++){
        ll a;
        cin >> a;
        v.push_back(a);
        max(a,x);
    }

    v.pop_back(); //quita el ultimo
    v[0];

    sort(v.begin(),v.end()); //ordena
    reverse(v.begin(),v.end());
    

}



ll subarreglosN(vector<ll> v, ll n){
    // primero calculamos O(n), guardamos las sumas
    vector<ll> sp; //vector donde vamos a guardar las sumas de los prefijos
    sp[0]=0; // ponemos el neutro de la suma
    for (ll r=1; r<= n; r++){
        sp[r]=sp[r-1]+ v[r-1]; // sp en la posicion r, va a ser el valor del anterior prefijo + el siguiente elemento de la lista
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);  
    cout.tie(0);


    pair<ll, bool> p;
    pair <ll, pair<ll,bool>> f;

    p.first = 0;
    p.second = true;


    long long n;
    cin >> n;

    cout << isPair(n) << "\n";



    return 0;
    
}


//g++ -Wall -std=c++17 nombre.cpp -o nombreEjecutable
// ./ nombreEjecutable
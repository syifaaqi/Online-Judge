#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void jackpot(ll a[],ll n){
    ll now=0;
    ll prev=0;
    for(ll i=0;i<n;i++){
        now+=a[i];
        if(now<0) now=0;
            if(prev<now) prev=now;
    }
        if(prev==0) printf("Losing streak.\n");
            else printf("The maximum winning streak is %lld.\n", prev);
}

int main() {
    ll N;
    while(true){
        scanf("%lld" , &N);
        	if(N==0) break;
    		ll a[N],i;
        for(ll i=0; i<N; i++) scanf("%lld",&a[i]);
        	jackpot(a,N);
    }   
    return 0;
}
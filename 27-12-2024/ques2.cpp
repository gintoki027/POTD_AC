#include<iostream>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long t; 
    cin>>t;
    while(t--){
        long long n; 
        cin>>n;
        long long cnt = 1;
        for(long long p = 2; n % p == 0 && p <= n; p++){
        	++cnt;
        }
        cout<<cnt<<"\n";
    }
 
} 

#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
int main(){
//1 Pangram
	int n,val=1;
	cin>>n;
	string test;
	cin>>test;
	for(char &c : test){
		c = tolower(static_cast<unsigned char>(c));
	}
	vector<int> occurence(26,0);
	if(n<=25){
		cout<<"NO";
	}else{
		for(int i=0;i<n;i++){
			occurence[test[i]-97]++;
		}
		for(int i=0;i<26;i++){
			if(occurence[i]==0){
				val=0;
				break;
			}
		}
		if(val==0){
			cout<<"NO";
		}else{
			cout<<"YES";
		}
	}
 
	return 0;
}
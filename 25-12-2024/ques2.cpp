#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int toParty;
    int time = 5;
    cin>>toParty;
    int totalTime = 240-toParty;
    
    int sum = 0;
    int ques = 0;
    for(int i=1;i<=n;i++){
    	time=5*i;
    	
    	sum+=time;
   
    	if(totalTime-sum>=0){
    		ques++;
   
    	}
    }

    cout<<ques;
  
    return 0;
}

#include <iostream>
using namespace std;
int main(){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(j>=n-i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
}
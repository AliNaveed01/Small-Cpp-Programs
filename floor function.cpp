#include<iostream>
using namespace std;

float floor (float num){
	int n=num;
	if(num>0){
		return n;
	}
	if(num<0){
		return n-1; 
	}
}

int main(){
	int N;
	cin>>N;
	cout<<floor(N);
	return 0;
}

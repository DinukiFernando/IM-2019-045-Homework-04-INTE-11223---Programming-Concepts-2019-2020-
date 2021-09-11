
// Compute the smallest common factor of two integers read from input data.

#include <iostream>
using namespace std;


void gcd(int num1,int num2){
	
	int max,hcd;
	
	if(num1>num2){
		max=num1;                //finding the max value
	}else{
		max=num2;
	}
	
	for(int i=1;i<=max;i++){
		if(num1%i==0 && num2%i==0){
			hcd = i;
		}
	}
	cout<<"Least Common factor (LCM): "<< (num1*num2)/hcd;           //LCM=Least Common factor
}


int main(){
	
	int num1,num2;
	cout<<"Enter 1 number: ";
	cin>>num1;
	cout<<"Enter 2 number: ";
	cin>>num2;
	cout<<endl;
	
 //calling the gcd function		
	gcd(num1,num2);            
	
	
	return 0;
}

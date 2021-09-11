
//compute the greatest common divisor of two integers read from input data. 

#include <iostream>
using namespace std;


void gcd(int num1,int num2){
	
	int max,hcd;
	
	if(num1>num2){       //get the max value 
		max=num1;
	}else{
		max=num2;
	}
	
	for(int i=1;i<=max;i++){
		if(num1%i==0 && num2%i==0){
			hcd = i;
		}
	}
	cout<<"Greatest common Divisor (GCD): "<< hcd;        // GCD=Greatest common Divisor 
}


int main(){
	
	int num1,num2;
	cout<<"Enter 1 number: ";
	cin>>num1;
	cout<<"Enter 2 number: ";
	cin>>num2;
	cout<<endl;

//call the gcd function		
	gcd(num1,num2);       
	
	
	return 0;
}

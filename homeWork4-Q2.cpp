
//The average of those input items that are greater than 10.

#include <iostream>
using namespace std;

int main(){
	int N;                         //N= number of elements
	double number,total,average;
	cout<<"Input N: ";
	cin>>N;
	cout<<endl;
	int count;
	
	
	for(int i=1;i<=N;i++){
		cout<<"Enter "<<i<<" number:";         //getting N number of elements
		cin>>number;
		if(number>10){                         //checking the elements whether they are greter than 10 or not
			count++;
		   total+=number;
		}
		
	}
	cout<<endl;
	average=total/count;
	cout<<"Average is "<<average<<endl;
	return 0;
}


//compute the average of the Next N elements of inputs. 

#include <iostream>
using namespace std;

int main(){
	int N;                            //N= number of elements
	double number,total,average;      // declare 3 variables
	cout<<"Input N: ";
	cin>>N;
	cout<<endl;
	
	for(int i=1;i<=N;i++){
		cout<<"Enter "<<i<<" number:";        //getting N number of elements
		cin>>number;
		total+=number;
	}
	cout<<endl;
	average=total/N;
	cout<<"Average is "<<average<<endl;
	
	return 0;
}

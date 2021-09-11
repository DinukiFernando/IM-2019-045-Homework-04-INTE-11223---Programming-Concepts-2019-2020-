
//Computes the smallest and the largest numbers in the next N elements of inputs. 

#include <iostream>
using namespace std;

int main(){
	int N;
	double number;
	cout<<"Input N: ";
	cin>>N;
	cout<<endl;
	
	double smallestValue=INT_MAX;         //INT_MAX is the maximum value that intiger has  
	double LargestValue=INT_MIN;          //INT_MIN is the minimum value that integer has
	
	for(int i=1;i<=N;i++){
		cout<<"Enter "<<i<<" number:";
		cin>>number;
		if(smallestValue>number){
			smallestValue=number;
		}if(LargestValue<number){
			LargestValue=number;
		};
	}
	cout<<endl;
	cout<<"smallestValue is "<<smallestValue<<endl;
	cout<<"LargestValue is "<<LargestValue<<endl;
	
	return 0;
}

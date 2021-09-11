// CPP program to find the first, second and third minimum element in an array

#include<iostream>

using namespace std;
 
int Print3Smallest(int array[], int n)
{
    int firstmin = INT_MAX, secmin = INT_MAX, thirdmin = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        /* Check if current element is less than firstmin, then update first, second and third */
        if (array[i] < firstmin)
        {
            thirdmin = secmin;
            secmin = firstmin;
            firstmin = array[i];
        }
 
        /* Check if current element is less than secmin then update second and third */
        else if (array[i] < secmin)
        {
            thirdmin = secmin;
            secmin = array[i];
        }
 
        /* Check if current element is less than then update third */
        else if (array[i] < thirdmin)
            thirdmin = array[i];
    }
 
    //cout << "First min = " << firstmin << "\n";
    //cout << "Second min = " << secmin << "\n";
    cout << "Third min = " << thirdmin << "\n";
    cout<<array[i];
}
 
int main()
{
    
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<endl;
    int array[n];
    
    for(int i=0;i<n;i++){
    	cout<<"Enter the number: ";
    	cin>>array[i];
	}
	cout<<endl;
    Print3Smallest(array, n);
    return 0;
}

#include <iostream>
using namespace std;

int main() {
	//Calculate sum of positive numbers
	// Sum of negative numbers
	// Average of both
	
	int size,positiveSum=0,negativeSum=0,averageNum=0;
	cin>>size;
	
	int arr[size];
	for(int i=0;i<size;i++){
	    cin>>arr[i];
	}
	
	for(int i=0;i<size;i++){
	
    	if(arr[i]>0){
    	    positiveSum+=arr[i];
    	}else{
    	    negativeSum+=arr[i];
    	}
	}	

	 averageNum=averageNum/size;   
	  cout<<"Sum of positive numbers"<<positiveSum<<endl;
	  cout<<"Sum of negative numbers"<<negativeSum<<endl;
	  cout<<"Average of array"<<averageNum<<endl;
	
	return 0;
}

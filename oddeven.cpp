#include <iostream>
using namespace std;

int main() {
	
	int size;
	
	cout<<"Enter size: "<<endl;
	cin>>size;
	
	int numList[size],sumEven=0,sumOdd=0;
	
	cout<<"Enter numbers in list";
	for(int i=0;i<size;i++){
	    cin>>numList[i];
	}
	
	for(int i=0;i<size;i++){
	    if(numList[i]%2==0){
	        sumEven= sumEven+numList[i];
	  	    }else{
	  	        sumOdd = sumOdd+numList[i];
	  	    }
	  	    
	}
	
	cout<<"Even Sum"<<sumEven<<endl;
	cout<<"Odd Sum"<<sumOdd<<endl;
	
	
	
	return 0;
}

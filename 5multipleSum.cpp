#include <iostream>
using namespace std;

/*
C program to find the number of integers divisible by 
 * 5 between the given range num1 and num2, where num1 < num2.
 *
 * Also find the sum of all these integer numbers which are divisible
 * by 5 and display the total

*/

int main() {
	
	int intNum,finalNum,count=0,sum=0;
	
	
	cout<<"Enter Initial Number";
	cin>>intNum;
	
	cout<<"Enter Final Number";
	cin>>finalNum;
	
	for(int i=intNum;i<finalNum;i++){
	    if(i%5==0){
	        count++;
	        sum=sum+i;
	    }
	}
	
	cout<<"Number of integer b/w range"<<count;
	cout<<"Total sum of range is"<<sum;

	
	return 0;
}

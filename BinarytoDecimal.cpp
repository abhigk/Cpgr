#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//Convert Binary to Decimal
	   int digit,number=0,i=0,binaryInupt;
	    
	    cin>>binaryInupt;
	    
	    while(binaryInupt>0){
	        
            	    digit=binaryInupt%10;
                    number=number+digit*pow(2,i);	
                    
            	    binaryInupt=binaryInupt/10;
            	    i++;
	         }
	cout<<number;
	
	
	
	return 0;
}

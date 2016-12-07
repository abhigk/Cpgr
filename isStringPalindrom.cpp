#include <iostream>
#include <string.h>

using namespace std;
	//Read a string and check if it's palindrome without using library functions
int main() {

    string s;
    s="bbuttubb";//INPUT
    int size=s.size()-1;

    int isPalindrome=1;
    
    for(int i=0;i<size;i++){
        if(s[i]!=s[size-i]){
        isPalindrome=0;
        break;
        }
    }
    
	//OUTPUT
    if(isPalindrome==1){
        cout<<"Palindrome";}
 if(isPalindrome==0){
     cout<<"Not Palindrome";
 }

    
    
	return 0;
}

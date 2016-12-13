#include <stdio.h>

int main() {
	int i,n,temp,j,arr[10];
	
	printf("Enter size of array");
	scanf("%d",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	//sorting
	for(i=0;i<n;i++){
	    for(j=0;j<n-i-1;j++){
	        if(arr[j]>arr[j+1]){
	            temp=arr[j];
	            arr[j]=arr[j+1];
	            arr[j+1]=temp;
	        }
	    }
	}
	
	printf("Array in ascending order\n");
	for(i=0;i<n;i++){
	    printf("%d",arr[i]);
	}
	
	return 0;
}

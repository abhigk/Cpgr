//implement push pop and display stack

#include <stdio.h>
#define MAX 10
int st[MAX], top=-1;

void push(int st[], int val){
    if(top == MAX-1){
        printf("Stack over flow");
    }else{
        top++;
        st[top] = val;
    }
}

int pop(int st[]){
    int val;
    if(top==-1){
        printf("stack underflow");
        return -1;
    }else{
        val=st[top];
        top--;
        return val;
    }
}

void display(int st[]){
    int i;
    if(top==-1){
        printf("Stack underflow");
    }else{
        for(i=top;i>=0;i--){
            printf("%d",st[i]);
        }
    }
}

int main() {
    int val,option;
	
	do{
	    printf("Enter Option\n");
	    printf("1. PUSH\n");
	    printf("2. POP\n");
	    printf("3. DISPLAY\n");
	    printf("4. EXIT\n");
	    printf("ENTER YOUR OPTION");
	    scanf("%d",&option);
	    switch(option){
	        case 1:
	           printf("Enter val to be pushed on stack\n");
	           scanf("%d",val);
	           push(st,val);
	           break;
	       case 2:
	           val == pop(st);
	           if(val!=-1){
	               printf("Val deleted from stack is %d",val);
	           }
	           break;
	       case 3:
	                display(st);
	                break;
	    }
	    
	    
	}while(option!=4);
	
	
	return 0;
}












#include<stdio.h>


main(){
  
  int a;
  int n = 0;
    
  	printf("Enter is amount: ");
  	scanf("%i",&n);
 
   		for(a = 0; n != 0; a++){
   
    			n /= 10;
    
	} 
  
    printf("Number of example: %i", a);
}

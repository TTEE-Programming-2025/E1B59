#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 


int main (void){
	int keycount=3,key,function,function1,function2,function3=0,n,i,j,k;
for(n=0;n<20;n++){
	printf("----    --------------------    ----\n");
}	

do{//輸入密碼，錯就重新輸入，直到滿三次 
	printf("輸入密碼(剩餘%d次,預設密碼0602)",keycount);
	scanf("%d",&key);
	keycount--;
	if(keycount==0){
		return 0;
	}	
}while(key!=0602);

system ("pause");
return 0; 
}


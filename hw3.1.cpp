#include <stdio.h>
#include <stdlib.h>

 int main(void)
 {
 int Keycount=4,key,n;
 	for(n=0;n<20;n++){
	printf("----    --------------------    ----\n");
}	

	do{//輸入密碼，錯就重新輸入，直到滿三次 
		printf("輸入密碼(剩餘%d次,預設密碼2025)",Keycount);
		scanf("%d",&key);
		Keycount--;
		if(Keycount==0){
		return 0;
		}	
	}while(key!=2025);
}


 

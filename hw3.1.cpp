#include <stdio.h>
#include <stdlib.h>

 int main(void)
 {
 int Keycount=4,key,n;
 	for(n=0;n<20;n++){
	printf("----    --------------------    ----\n");
}	

	do{//��J�K�X�A���N���s��J�A���캡�T�� 
		printf("��J�K�X(�Ѿl%d��,�w�]�K�X2025)",Keycount);
		scanf("%d",&key);
		Keycount--;
		if(Keycount==0){
		return 0;
		}	
	}while(key!=2025);
}


 

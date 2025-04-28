#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 


int main (void){
	int Keycount=4,key,Function,Function1,Function2,Function3=0,n,i,j,k;
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

do{//印出功能列表 
	system("cls");
	printf("----------------------------------\n");
	printf("        a.印出直角三角形          \n");
	printf("          b.顯示乘法表            \n");
	printf("              c.結束              \n");
	printf("           請輸入選項             \n");
	printf("----------------------------------\n");
	Function=getch();
	system("cls");
	
	if(Function==97||Function==65){//功能a
	printf("請輸入A-N之間的字母:");
	Function1=getch();
	while (65>Function1||78<Function1&&97>Function1||110<Function1){//輸入直到正確
	system("cls");
	printf("輸入錯誤，請重新輸入:");
	Function1=getch();
	} 
	if(65<=Function1&&Function1<=78){//確保迴圈的輸入值是固定的
		Function1+=32; 
	}
	for(i=97;i<=Function1;i++){//頂層迴圈
		printf("\n");
	for(k=0;k<Function1-i;k++){//空格的迴圈
		printf(" ");
	} 
	for(j=97;j<=i;j++){//字母迴圈
		printf("%c",j); 
	}
	}
	printf("\n按下任意鍵繼續");
	Function1=getch();
}
if(Function == 98 || Function == 66){//功能B 
   printf("請輸入 1-9 之間的數字 : ");
   Function2=getch();
   while(49>Function2 || 57<Function2){//如果輸入錯就在這邊一直輸入到對為止 
    system("cls");
    printf("輸入錯誤，請重新輸入: ");
    Function2=getch();
   }
   for(i=1 ; i<=Function2-48 ; i++){//被乘數迴圈 
    printf("\n");
    for(j=1;j<=i;j++){//乘數迴圈 
     printf("%d * %d = %d ",i,j,i*j);
    }
    
   }
   printf("\n按下任意鍵繼續...... ");
   Function2=getch();
  }
  
  
  
  if(Function == 99 || Function == 67){//功能C 
   printf("Continue?(Y/N) : ");
   Function3=getch();
   if(Function3 == 78 || Function3 == 110){//是否為停止 
    break;
   }
   while(Function3 != 78 && Function3 != 89 && Function3 != 110 && Function3 != 121){//如果輸入錯就在這邊一直輸入到對為止 
    system("cls");
    printf("輸入錯誤，請重新輸入: ");
    Function3=getch();
   }
  }
 }while(Function3 != 89 || Function3 != 121);
 
 system("cls");
 return 0;
 
}
//在這次迴圈指令的練習過程中，我深刻地體會到了迴圈結構在程式當中的重要性。最初從for迴圈到複雜的曹狀迴圈應用，也逐漸掌握了如何使用迴圈來有效解決問題 
























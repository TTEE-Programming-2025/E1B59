#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 


int main (void){
	int Keycount=4,key,Function,Function1,Function2,Function3=0,n,i,j,k;
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

do{//�L�X�\��C�� 
	system("cls");
	printf("----------------------------------\n");
	printf("        a.�L�X�����T����          \n");
	printf("          b.��ܭ��k��            \n");
	printf("              c.����              \n");
	printf("           �п�J�ﶵ             \n");
	printf("----------------------------------\n");
	Function=getch();
	system("cls");
	
	if(Function==97||Function==65){//�\��a
	printf("�п�JA-N�������r��:");
	Function1=getch();
	while (65>Function1||78<Function1&&97>Function1||110<Function1){//��J���쥿�T
	system("cls");
	printf("��J���~�A�Э��s��J:");
	Function1=getch();
	} 
	if(65<=Function1&&Function1<=78){//�T�O�j�骺��J�ȬO�T�w��
		Function1+=32; 
	}
	for(i=97;i<=Function1;i++){//���h�j��
		printf("\n");
	for(k=0;k<Function1-i;k++){//�Ů檺�j��
		printf(" ");
	} 
	for(j=97;j<=i;j++){//�r���j��
		printf("%c",j); 
	}
	}
	printf("\n���U���N���~��");
	Function1=getch();
}
if(Function == 98 || Function == 66){//�\��B 
   printf("�п�J 1-9 �������Ʀr : ");
   Function2=getch();
   while(49>Function2 || 57<Function2){//�p�G��J���N�b�o��@����J��אּ�� 
    system("cls");
    printf("��J���~�A�Э��s��J: ");
    Function2=getch();
   }
   for(i=1 ; i<=Function2-48 ; i++){//�Q���ưj�� 
    printf("\n");
    for(j=1;j<=i;j++){//���ưj�� 
     printf("%d * %d = %d ",i,j,i*j);
    }
    
   }
   printf("\n���U���N���~��...... ");
   Function2=getch();
  }
  
  
  
  if(Function == 99 || Function == 67){//�\��C 
   printf("Continue?(Y/N) : ");
   Function3=getch();
   if(Function3 == 78 || Function3 == 110){//�O�_������ 
    break;
   }
   while(Function3 != 78 && Function3 != 89 && Function3 != 110 && Function3 != 121){//�p�G��J���N�b�o��@����J��אּ�� 
    system("cls");
    printf("��J���~�A�Э��s��J: ");
    Function3=getch();
   }
  }
 }while(Function3 != 89 || Function3 != 121);
 
 system("cls");
 return 0;
 
}
//�b�o���j����O���m�߹L�{���A�ڲ`��a��|��F�j�鵲�c�b�{���������n�ʡC�̪�qfor�j���������䪬�j�����ΡA�]�v���x���F�p��ϥΰj��Ӧ��ĸѨM���D 
























#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
char Name[10][20],NameSearch[20],PVPName[10][20],ChName[20];
int ID[10],PVPID[10],ChID;
int Math[10],PVPMath[10],ChMath;
int Physics[10],PVPPhysics[10],ChPhysics;
int English[10],PVPEnglish[10],ChEnglish;
float AVG[10],PVPAVG[10],ChAVG;
int People;
int Key=0;

void WelcomeScreen(){//Print desk 
for (int i = 0; i < 20; i++) printf("*WELCOME*\n");
}
void List(){//Print Function List 
 printf("----------[Grade System]----------\n");
 printf("| A. Enter Student's Grades      |\n");
 printf("| B. Display Student's Grades    |\n");
 printf("| C. Searh For Student's Grades  |\n");
 printf("| D. Grade Ranking               |\n");
 printf("| E. Exit System                 |\n");
 printf("----------------------------------\n\n");
 printf("��J�ﶵ:\n");
} 
int FunctionA(){
 int loop,i;
 printf("�`�@���h�־ǥ� (5-10) �� : ");
 scanf("%d",&People);
 while(People<5 || People>10){
  printf("�H�ƿ��~ �u�� 5-10 �ӤH : ");
  scanf("%d",&People);
 }

 for(loop=0;loop<People;loop++){
  printf("�� %d �Ӿǥͪ��m�W : ",loop+1);
  scanf("%s",&Name[loop]);
  
  printf("%s ���Ǹ� (6����) : ",Name[loop]);
  scanf("%d",&ID[loop]);
  while(ID[loop]<0 || ID[loop]>999999){
   printf("�Ǹ����b�d�򤺡A�Э��s��J : ");
   scanf("%d",&ID[loop]);
  }
  
  printf("%s ���ƾǦ��Z : ",Name[loop]);
  scanf("%d",&Math[loop]);
  while(Math[loop]<0 || Math[loop]>100){
   printf("���Z���b�d�򤺡A�Э��s��J : ");
   scanf("%d",&Math[loop]);
  }
  
  printf("%s �����z���Z : ",Name[loop]);
  scanf("%d",&Physics[loop]);
  while(Physics[loop]<0 || Physics[loop]>100){
   printf("���Z���b�d�򤺡A�Э��s��J : ");
   scanf("%d",&Physics[loop]);
  }
  
  printf("%s ���^�妨�Z : ",Name[loop]);
  scanf("%d",&English[loop]);
  while(English[loop]<0 || English[loop]>100){
   printf("���Z���b�d�򤺡A�Э��s��J : ");
   scanf("%d",&English[loop]);
  }
  
  AVG[loop]=(Math[loop]+Physics[loop]+English[loop])/3;
  
 }
 printf("���Z��J����......");
 
 for(loop=0;loop<People;loop++){
  strcpy(PVPName[loop],Name[loop]);
  PVPID[loop]=ID[loop];
  PVPMath[loop]=Math[loop];
  PVPPhysics[loop]=Physics[loop];
  PVPEnglish[loop]=English[loop];
  PVPAVG[loop]=AVG[loop];
 }
 
 for(loop=0;loop<People;loop++){
  for(i=0;i<People-1;i++){
   if(PVPAVG[i]<PVPAVG[i+1]){
    strcpy(ChName,PVPName[i+1]);
    ChID=PVPID[i+1];
    ChMath=PVPMath[i+1];
    ChPhysics=PVPPhysics[i+1];
    ChEnglish=PVPEnglish[i+1];
    ChAVG=PVPAVG[i+1];
    
    strcpy(PVPName[i+1],PVPName[i]);
    PVPID[i+1]=PVPID[i];
    PVPMath[i+1]=PVPMath[i];
    PVPPhysics[i+1]=PVPPhysics[i];
    PVPEnglish[i+1]=PVPEnglish[i];
    PVPAVG[i+1]=PVPAVG[i];
    
    strcpy(PVPName[i],ChName);
    PVPID[i]=ChID;
    PVPMath[i]=ChMath;
    PVPPhysics[i]=ChPhysics;
    PVPEnglish[i]=ChEnglish;
    PVPAVG[i]=ChAVG;
   }
  }
 }
 
 
}
int FunctionB(){
 int loop;
 printf("Name ID    M.G.  P.G.  E.G.  AVG\n");
 for(loop=0;loop<People;loop++){
  printf("%s ",Name[loop]);
  printf("%d ",ID[loop]);
  printf("%d ",Math[loop]);
  printf("%d ",Physics[loop]);
  printf("%d ",English[loop]);
  printf("%f \n",AVG[loop]);
 }
 getch();
}

int main(void){
 int KeyCount=3,Key,FunctionKeyIn;
 WelcomeScreen();
 
 do{//Key In 
  printf("�п�J�K�X(�w�]�K�X2025) (��%d��): ", KeyCount);
  scanf("%d",&Key);
  printf("\n");
  KeyCount--;
  if(KeyCount==-1){
   system("cls");
   printf("���~�W�L�T���A�{������");
   return 0;
  }
 }while(Key!=2025);
 
 system("cls");
 printf("----------Welcome ----------");
 system("cls");
  
 do{//infinite loop
  system("cls");
  List();
  FunctionKeyIn=getch();
  system("cls");
  while(FunctionKeyIn!=65 && FunctionKeyIn!=66 && FunctionKeyIn!=67 && FunctionKeyIn!=68 && FunctionKeyIn!=69 && FunctionKeyIn!=97 && FunctionKeyIn!=98 && FunctionKeyIn!=99 && FunctionKeyIn!=100 && FunctionKeyIn!=101){
   List();
   printf("\n�L���ﶵ�A�Э��s���\n");
   FunctionKeyIn=getch();
   system("cls");
  }
  switch(FunctionKeyIn){
   case 65:
   case 97:
    FunctionA();
    break;
   case 66:
   case 98:
    FunctionB();
    break;
   
  }
  
 }while(1);
}

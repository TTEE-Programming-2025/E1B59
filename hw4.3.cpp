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
 printf("輸入選項:\n");
} 
int FunctionA(){
 int loop,i;
 printf("總共有多少學生 (5-10) 位 : ");
 scanf("%d",&People);
 while(People<5 || People>10){
  printf("人數錯誤 只能 5-10 個人 : ");
  scanf("%d",&People);
 }

 for(loop=0;loop<People;loop++){
  printf("第 %d 個學生的姓名 : ",loop+1);
  scanf("%s",&Name[loop]);
  
  printf("%s 的學號 (6位整數) : ",Name[loop]);
  scanf("%d",&ID[loop]);
  while(ID[loop]<0 || ID[loop]>999999){
   printf("學號不在範圍內，請重新輸入 : ");
   scanf("%d",&ID[loop]);
  }
  
  printf("%s 的數學成績 : ",Name[loop]);
  scanf("%d",&Math[loop]);
  while(Math[loop]<0 || Math[loop]>100){
   printf("成績不在範圍內，請重新輸入 : ");
   scanf("%d",&Math[loop]);
  }
  
  printf("%s 的物理成績 : ",Name[loop]);
  scanf("%d",&Physics[loop]);
  while(Physics[loop]<0 || Physics[loop]>100){
   printf("成績不在範圍內，請重新輸入 : ");
   scanf("%d",&Physics[loop]);
  }
  
  printf("%s 的英文成績 : ",Name[loop]);
  scanf("%d",&English[loop]);
  while(English[loop]<0 || English[loop]>100){
   printf("成績不在範圍內，請重新輸入 : ");
   scanf("%d",&English[loop]);
  }
  
  AVG[loop]=(Math[loop]+Physics[loop]+English[loop])/3;
  
 }
 printf("成績輸入完畢......");
 
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
  printf("請輸入密碼(預設密碼2025) (剩%d次): ", KeyCount);
  scanf("%d",&Key);
  printf("\n");
  KeyCount--;
  if(KeyCount==-1){
   system("cls");
   printf("錯誤超過三次，程式結束");
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
   printf("\n無此選項，請重新選擇\n");
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

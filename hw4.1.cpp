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
 } 
 

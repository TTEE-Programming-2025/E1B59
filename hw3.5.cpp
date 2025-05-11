#include <stdio.h>
#include <stdlib.h>
#include <time.h>//random number
#include <conio.h>
#include <unistd.h>//delay

void WelcomeScreen() {
    for (int i = 0; i < 20; i++) {
        printf("* Welcome *\n");
    }
}
void List(){//Print Function List 
	printf("----------[Booking System]----------\n");
	printf("|       A. Available seats          |\n");
	printf("|       B. Arrange for you          |\n");
	printf("|      C. Choose by yourself        |\n");
	printf("|           D. Exit                 |\n");
	printf("------------------------------------\n\n");
	printf("Please enter options: \n");
} 
int main(void) {
	int Row,Column,KeyCount=2,FunctionKeyIn=0,Key,RandomSeatCount;
	int i,j,k;
	char Seats[9][9];
	
	for(Row=0;Row<9;Row++){//Seats Reset
		for(Column=0;Column<9;Column++){
			Seats[Row][Column]='-';
		}
	}
	
	srand(time(NULL));
	RandomSeatCount=0;
	
	while(RandomSeatCount<10){//Set Random Seat
		Row = rand()%9;
		Column = rand()%9;
		if(Seats[Row][Column]=='-'){
			Seats[Row][Column]='*';
			RandomSeatCount++; 
		}
	}
	
	WelcomeScreen();
	
	do{//Key In 
		printf("Please enter your password, %d chances remaining (password:2025): ",KeyCount);
		scanf("%d",&Key);
		printf("\n");
		KeyCount--;
		if(KeyCount==-1){
			system("cls");
			return 0;
		}
	}while(Key!=2025);
	
	system("cls");
	printf("----------Welcome E1B59----------");
	system("cls");
	
	while(1){
		List();
		FunctionKeyIn=getch();
		system("cls");
		while(FunctionKeyIn!=65 &&FunctionKeyIn!=66 &&FunctionKeyIn!=67 &&FunctionKeyIn!=68 &&FunctionKeyIn!=97 &&FunctionKeyIn!=98 &&FunctionKeyIn!=99 &&FunctionKeyIn!=100){
			List();
			printf("\nError message.Please try again\n");
			FunctionKeyIn=getch();
			system("cls");
		}
		
		if(FunctionKeyIn==65 || FunctionKeyIn==97){//Function A
			printf("This is the current seat : \n\n");
			printf(" 123456789\n");
			for(i=8;i>=0;i--){
				printf("%d",i+1);
				for(j=0;j<9;j++){
					printf("%c",Seats[i][j]);
				}
				printf("\n");
			}
			printf("Press any key to continue.\n");
			getch();
			system("cls");	
		}
		
		else if(FunctionKeyIn==66 || FunctionKeyIn==98){//Function B
			printf("How many seats do you want to reserve? (1-4 people)");
			Key=getch();
			system("cls");
			while(Key<'1' || Key>'4'){
				printf("Error (minimum 1 person, maximum 4 people)");
				Key=getch();
				system("cls");
			} 
			switch(Key){
				case '1'://1 person
					do{
						Row = rand()%9;
						Column = rand()%9;
					}while(Seats[Row][Column]=='*');
					Seats[Row][Column]='@';
					break;
				case '2'://2 person
					do{
						Row = rand()%8;
						Column = rand()%8;
					}while(Seats[Row][Column]=='*' || Seats[Row][Column+1]=='*');
					Seats[Row][Column]='@';
					Seats[Row][Column+1]='@';
					break;
				case '3'://3 person
					do{
						Row = rand()%7;
						Column = rand()%7;
					}while(Seats[Row][Column]=='*' || Seats[Row][Column+1]=='*' || Seats[Row][Column+2]=='*');
					Seats[Row][Column]='@';
					Seats[Row][Column+1]='@';
					Seats[Row][Column+2]='@';
					break;
					break;
				case '4'://4 person
					printf("Do you want to sit four people in a row or two people side by side? (1 or 2)");
					Key=getch();
					system("cls");
					while(Key!='1' && Key!='2'){
						printf("Error (1 or 2)");
						Key=getch();
						system("cls");
					}
					if(Key=='1'){
						do{
							Row = rand()%6;
							Column = rand()%6;
						}while(Seats[Row][Column]=='*' || Seats[Row][Column+1]=='*' || Seats[Row][Column+2]=='*' || Seats[Row][Column+3]=='*');
						Seats[Row][Column]='@';
						Seats[Row][Column+1]='@';
						Seats[Row][Column+2]='@';
						Seats[Row][Column+3]='@';
					}
					else if(Key=='2'){
						do{
							Row = rand()%8;
							Column = rand()%8;
						}while(Seats[Row][Column]=='*' || Seats[Row][Column+1]=='*' || Seats[Row+1][Column]=='*' || Seats[Row+1][Column+1]=='*');
						Seats[Row][Column]='@';
						Seats[Row][Column+1]='@';
						Seats[Row+1][Column]='@';
						Seats[Row+1][Column+1]='@';
					}
					break; 
			}
			printf("Are you satisfied with the seat that the system automatically selected for you? (Y/N)\n");
			for(i=8;i>=0;i--){
				printf("%d",i+1);
				for(j=0;j<9;j++){
					printf("%c",Seats[i][j]);
				}
				printf("\n");
			}
			Key=getch();
			system("cls");
			while(Key!=78 && Key!=89 && Key!=110 && Key!=121 ){
				system("cls");
				printf("Input error (Y/N)");
				Key=getch();				
			}
			if(Key=='Y' || Key=='y'){
				for(i=0;i<9;i++){
					for(j=0;j<9;j++){
						if(Seats[i][j]=='@'){
							Seats[i][j]='*';
						}
					}
				}
			}
			else if(Key=='N' || Key=='n'){
				for(i=0;i<9;i++){
					for(j=0;j<9;j++){
						if(Seats[i][j]=='@'){
							Seats[i][j]='-';
						}
					}
				}
			}
			system("cls");
				
		}
		
		else if(FunctionKeyIn==67 || FunctionKeyIn==99){//Function C 
			printf("Choose by yourself \n\n");
			
			do{
				printf("Which row?(1-9): \n");
				Row=getche();
				while(Row<'1' || Row >'9'){
					system("cls");
					printf("There is no such seat. Which row? :\n");
					Row=getche();
				}
				Row-='0';
				printf("\n %d row ,Which number?(1-9): \n",Row);
				Column=getche();
				while(Column<'1' || Column >'9'){
					system("cls");
					printf("There is no such seat. Which number? :\n");
					Column=getche();
				}
				Column-='0';
				if(Seats[Row-1][Column-1]=='*'){
					printf("\nThis seat is already occupied. Please re-enter\n");
				}
				else{
					Seats[Row-1][Column-1]='@';
					printf("This is your seat. : \n\n");
					printf(" 123456789\n");
					for(i=8;i>=0;i--){
						printf("%d",i+1);
						for(j=0;j<9;j++){
							printf("%c",Seats[i][j]);
						}
						printf("\n");
					}
				}
				printf("\nPress a number to continue inputting, the rest will return to the main menu.\n");
				Key=getch();
				Seats[Row-1][Column-1]='*';
				system("cls");	
			}while('0'<=Key && Key<='9');
				
		}			
		
		else if(FunctionKeyIn==68 || FunctionKeyIn==100){//Function D 
			printf("Continue?(Y/N) : ");
			Key=getch();
			if( Key== 78 || Key == 110){
				break;
			}
			while(Key != 78 && Key != 89 && Key != 110 && Key != 121){ 
				system("cls");
				printf("Error (Y/N): ");
			}
			system("cls");
		}
	}	
}

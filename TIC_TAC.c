#include<stdio.h>
#include<conio.h>

void layout(); //function for layout of tic tac toe
void play();  //function by which game is played
int checkwin();  //function to check winning or draw or inprocess condition
char a[10]={'1','2','3','4','5','6','7','8','9'};
int main()
{
	clrscr();
	play();
	getch();
	return(1);
}

int checkwin()
{
   if((a[0]==a[1] && a[1]==a[2])||(a[3]==a[4] && a[4]==a[5])
   ||(a[6]==a[7] && a[7]==a[8])||(a[0]==a[3] && a[3]==a[6])
   ||(a[1]==a[4] && a[4]==a[7])||(a[2]==a[5] && a[5]==a[8])
   ||(a[0]==a[4] && a[4]==a[8])||(a[2]==a[4] && a[4]==a[6]))
	 {  return(1);}

  else if(a[0]!='1'&& a[1]!='2'&& a[2]!='3'&& a[3]!='4'&& a[4]!='5'&&
  a[5]!='6'&& a[6]!='7'&& a[7]!='8'&& a[8]!='9')
   { return(0);}

   else
    return(-1);
}
void play()
{
   char put;
   int turn,ch=-1,num,player=1;;

   do
   {
    layout();
    turn=((player%2)+1);
    if(turn==2)
    put='0';
    else
    put='X';
    printf("\nPlayer %d enter a number\t",turn);
    scanf("%d",&num);
	if(num==1 && a[0]=='1')
	a[0]=put;
	else if(num==2 && a[1]=='2')
	a[1]=put;
	else if(num==3 && a[2]=='3')
	a[2]=put;
	else if(num==4 && a[3]=='4')
	a[3]=put;
	else if(num==5 && a[4]=='5')
	a[4]=put;
	else if(num==6 && a[5]=='6')
	a[5]=put;
	else if(num==7 && a[6]=='7')
	a[6]=put;
	else if(num==8 && a[7]=='8')
	a[7]=put;
	else if(num==9 && a[8]=='9')
	a[8]=put;
	else
	  {
	  printf("\nInvalid number");
	  --player;
	  getch();
	  }

	  getch();

    ch=checkwin();
    player++;
    clrscr();
   }while(ch==-1);

   --player;
   player=player%2+1;
   if(ch==1)
   printf("\n\nPlayer %d wins",player);
   else
   printf("\n\nMatch Drawn");

}


void layout()
{
    printf("\n");
    printf("Player 1 :X");
    printf("\tPlayer 2 :0\n\n\n");
    printf("   |   |   \n");
    printf(" %c",a[6]);printf(" | %c",a[7]);printf(" | %c",a[8]);printf("  \n");
    printf("   |   |   \n");
    printf("--- --- ---\n");
    printf("   |   |   \n");
    printf(" %c",a[3]);printf(" | %c",a[4]);printf(" | %c",a[5]);printf("  \n");
    printf("   |   |   \n");
    printf("--- --- ---\n");
    printf("   |   |   \n");
    printf(" %c",a[0]);printf(" | %c",a[1]);printf(" | %c",a[2]);printf("  \n");
    printf("   |   |   \n");
}

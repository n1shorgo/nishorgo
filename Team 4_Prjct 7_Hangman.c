//Sami's Part_1-25//

#include<stdio.h>
#include<conio.h>
#include<string.h>


int main()
{
system("color 1F");
int i,j,c,count=0,ans=0,flag=0,*ptr;
char a[1][6]={"mist"};
char b[10],alpha;
char d='_';

c=strlen(&a[0][0]);
printf("\n\t\t\t ** Let's play a game ** \n");
printf("\t\t\t ** HANGMAN ** \n");
	printf("\n\t\t\t**************\t\t\t");
		printf("\n\t\t\t..............\n\n\t\t\t  ");
for(j=0;j<c;j++)
	  {
	  printf("%c ",d);
	  b[j]=d;
	  }
	  printf("\n\t\t\t..............\t\t\t");
	  printf("\n\t\t\t**************");
//Shuvo's Part_26-47//

while (count<6)
 {
 flag=0;
	   printf("\n\n\n\t Please Enter a Character	");
		alpha=getche();
		for(i=0;i<c;i++)
		{
			if (alpha==a[0][i])
		    {
		   		b[i]=a[0][i];
		   		flag=1;
				ans++;
			}
		}
		printf("\n\n\t\t\t ** Let's play a game ** \n");
		printf("\n\t\t\t ** HANGMAN ** \n");
		printf("\n\t\t\t**************\t\t\t");
		printf("\n\t\t\t..............\n\n\t\t\t  ");
		//Nabil's Part_48-69//
		for(i=0;i<c;i++)
		printf("%c ",b[i]);
		printf("\n\t\t\t..............\t\t\t");
		printf("\n\t\t\t**************");

		if(flag==0)
			{
		count++;
		printf("\n\t\t%c is a Wrong Guess",alpha);
		printf("\n\t\t (You Have %d More Guesses Left)",6-count);
			}

		else{
		printf("\n\t\t You Are Correct !!");
	   printf("\n\t\t( You Have %d More Words To Go)",c-ans);
	   		}
		if(ans==c) break;
 }
 if(ans==c) printf("\n\n\t You Won !!");
 else printf("\n\t\t  You Lost !!\n \t\t **SORRY  YOU ARE HANGED**");

getch();
return 1;
}

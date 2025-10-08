#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int choice;
    char yn;
    clrscr();

    printf("\n\t********* WellCome - What do you want to eat *********");
    top:


    //--- menu -------

    printf("\n\t1. Pizza");
    printf("\n\t2. Burger");
    printf("\n\t3. Biryani");
    printf("\n\t4. Daal Roti");
    printf("\n\nEnter your choice (1-4): ");
    scanf("%d", &choice);
    // yn= getche();//jub tak user kuch enter na kare wo yehi statement print karwata rahe


    //---------- conditions ---------

    if (choice == 1)
	goto one;
    else if (choice == 2)
	goto two;
    else if (choice == 3)
	goto three;
    else if (choice == 4)
	goto four;
    else
	goto down;





	// ------ lables -------------


	one:
	printf("\nYou are at one block, Enjoy your Pizza");
	getch();
	printf("\n\nYou want to continue press (y/n)");
	scanf("%c",&yn);
	yn=getche();

	if((yn=='y')||(yn=='Y'))
	goto top;
	else
	goto down;

	two:
	printf("\nYou are at two block, Enjoy your Burger");
	getch();


	printf("\n\nYou want to continue press (y/n)");
	scanf("%c",&yn);
	yn=getche();

	if((yn=='y')||(yn=='Y'))
	goto top;
	else
	goto down;


	three:
	printf("\nYou are at three block, Enjoy your Biryani");
	getch();



	printf("\n\nYou want to continue press (y/n)");
	scanf("%c",&yn);
	yn=getche();

	if((yn=='y')||(yn=='Y'))
	goto top;
	else
	goto down;


	four:
	printf("\nYou are at four block, Enjoy your Daal Roti");
	getch();



	printf("\n\nYou want to continue press (y/n)");
	scanf("%c",&yn);
	yn=getche();

	if((yn=='y')||(yn=='Y'))
	goto top;
	else
	goto down;

	down:exit(0);

	printf("\n\nThank you so much for visiting.\n");
	getch();
}

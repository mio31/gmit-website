#include<stdio.h>
#include<stdlib.h>

#define Pi 3.141259


int showMenu();
void areaSquare();
//void areaTriangel();
//void areaCircle();


main()
{
	int iChoice;

	// have menu appear, user makes decision, do work, reshow menu
	// do this until user enters 5
    printf("length = %d\n", strlen(name)); /* debug line */
        printf("ppppppppppppppppppp"); /* debug line */
        printf("pica"); /* debug line */

	do
	{
		iChoice = showMenu();
	}while(iChoice != 5);

	printf("\n\n\n");
	system("pause");


} /* end of main */


int showMenu()
{
    int iChoice;
    printf("\n\n\t\tWelcome to our Area Calculator\n\n");
	printf("\n\t\t1. Square");
	printf("\n\t\t2. Rectangle");
	printf("\n\t\t3. Triangle");
	printf("\n\t\t4. Circle");
	printf("\n\t\t5. Exit");

	printf("\n Enter your choice:  ");
	fflush(stdin);
	scanf("%d", &iChoice);

	switch(iChoice)
	{
	    case 1:
	    case 2:
	    {
	        areaSquare(iChoice);
	        break;

	    }



	    case 5:
	    {
	        printf("\n so long...");
	        break;
	    }
	    default:
	    {
	        break;
	    }

	}
	return(iChoice);
	printf("\n\n\n");
	system("pause");
}/*end of switch*/
void areaSquare(iChoice)
{

    int iSide1, iSide2;
    printf("enter side 1:");
    fflush(stdin);
    scanf("%d",&iSide1);

    if(iChoice==1)
    {
        printf("Square with side %d has area of %d",iSide1,(iSide1*iSide1));

    }
    else
    {
    printf("enter side 2:");
    fflush(stdin);
    scanf("%d",&iSide2);
    }
}



















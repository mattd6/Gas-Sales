/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

void Menu(void)
{	// menu options
	printf("Menu:\n");
	printf("1 - Gas Mileage\n");
	printf("2 - Sales Commission\n");
	printf("3 - Quit\n");
	
}

void Option1(void)
{
	/*   Gas Mileage
  Drivers are concerned with the mileage obtained by their automobiles.  One driver has kept track of 
  several tanks of gasoline by recording miles driven and gallons used for each tank.  Develop a program 
  using a while loop that will input the miles driven and the gallons used for each tank.  The program 
  should calculate and display the miles per gallon obtained for each tank.  After processing all input 
  information, the program should calculate and print the overall miles per gallon obtained for all tanks.  */
	
	int     num, sum, count;
    float   done;
    
    sum = 0;
    count = 1;
    
    printf("Enter the gallons used by Tank %i: ", count);
    scanf("%f", &done);
    
    printf("Enter the miles driven by this tank: ");
    scanf("%i", &num);
    
    printf("The mpg for this tank was %.2f\n", (float)num / done);
    
    while(done > 0)
    {
        ++count;
        
        sum = sum + (num / done);
        
        printf("Enter the gallons used by Tank %i: ", count);
        scanf("%f", &done);
        
        if (done > 0)
        {
            printf("Enter the miles driven by this tank: ");
            scanf("%i", &num);
            
            printf("The mpg for this tank was %.2f\n", (float)num / done);
        }
        
    }
    --count;
    printf("The overall average miles per gallon was %.2f\n", (float)sum / count);
    
    printf("Press any number key and then Enter to continue: ");
    scanf("%i", &num);
    
}

void Option2(void)
{
	/* Sales
  People in sales frequently earn a base salary and commission on their sales.  A company has asked you 
  to write a program to estimate the payroll for the week given a person’s sales.  The sales force earns 
  a base salary of $300 per week plus 12% of their total sales for the week.  Since each department has 
  a different number of employees, use a while loop to allow the user to exit the program by entering an 
  integer less than 100 when they have completed. */
  
  int done, num;
    
    do
    {
        printf("Enter the employee number: ");
        scanf("%i", &done);
        
        if (done >= 100)
        {
            printf("Enter sales amount: ");
            scanf("%i", &num);
            
            printf("This week's salary: $%.2f\n", (num * .12) + 300);
        }
        
    }while(done >= 100);
}
void Welcome(void)
{
	printf("Welcome!\n");
	
}

int main(void)
{
	//declare variables
	int choice;
	do
	{
		//welcome - title
		Welcome();
		//print Menu options
		
		Menu();
		
		//Get user's choice
		printf("Enter your menu choice: ");
		scanf("%i", &choice);
		
		switch(choice)
		{
			case 1: Option1();  
			        
			        break;
			case 2: Option2();  
			        
			        break;
			case 3: //Quit
		       
					break;
			default:
		
					break;
		}
	}while(choice != 3);
	
	return 0;
}
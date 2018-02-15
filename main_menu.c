#include<stdio.h>
#include<stdlib.h>

int main()
{
  int main_menu_option;                                    //Variable to store the user selected option
  printf("1. Start New Game\n");                           //Start new game
  printf("2. Exit\n\n\n");                                 //Exit Game
  printf("Please select an option!\n");                    //User enters value to be stored in main_menu_option
  scanf("%d",&main_menu_option);

  while(main_menu_option == 1 || main_menu_option == 2)
  {
      switch(main_menu_option)
	{
	case 1:      
	  printf("\e[1;1H\e[2J");                              //clear screen
	  break;

	case 2:
	  printf("Thank you for playing!");
	  getchar();
	  return 1;
	  break;

	default:
	  printf("Please select a valid option (1 or 2)\n");
  }
  
}
}

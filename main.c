#include <stdio.h>

int main(int argc, char** argv){
	int array[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	int turn = 0;
	int gameloss = 0;
	int holder = 0;
	int i = 0;
	int j = 0;
	int countup1 = 0;
	int countup2 = 0;
	printf("Welcome to tic tac toe. \n");
	while (gameloss == 0) {
		if (turn == 0){
			printf("The turn is now X. Player 1, please enter a number from 1-9 that has not already been picked.\n");
			scanf("%d", &holder);
			if (holder == 1){
				if (array[0] == 0){
					array[0] = 1;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
				}
			}
			else if (holder == 2){
				if (array[1] == 0){
					array[1] = 1;
				}
				else {
				 printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
			}
			else if (holder == 3){
				if (array[2] == 0){
                                array[2] = 1;
				}
				else {
				 printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else if (holder == 4){
				if (array[3] == 0){
                                array[3] = 1;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else if (holder == 5){
				if (array [4] == 0){
                                array[4] = 1;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else if (holder == 6){
				if (array[5] == 0){
                                array[5] = 1;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else if (holder == 7){
				if (array[6] == 0){
                                array[6] = 1;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else if (holder == 8){
				if (array[7] == 0){
                                array[7] = 1;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else if (holder == 9){
				if (array [8] == 0){
                                array[8] = 1;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else {
				printf("Faulty input! Please restart program.");
			}	
			while (i < 9){
				if (array[i] == 0){
					printf("- ");
				}
				else if (array [i] == 1){
					printf("x ");
				}
				else if (array [i] == 2){
					printf("o ");
				}	
				countup1 = countup1 + 1;
				i = i + 1;
				if (countup1 >= 3){
					printf("\n");
					countup1 = 0;
				}
			}
			i = 0;
			turn = 1;
		}
		else if(turn == 1){
			printf("The turn is now O. Player 2, please enter a number from 1-9 that has not already been picked.\n");
			scanf("%d", &holder);
		        if (holder == 1){
				if (array[0] == 0){
					array[0] = 2;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
				}
			}
			else if (holder == 2){
				if (array[1] == 0){
					array[1] = 2;
				}
				else {
				 printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
			}
			else if (holder == 3){
				if (array[2] == 0){
                                array[2] = 2;
				}
				else {
				 printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else if (holder == 4){
				if (array[3] == 0){
                                array[3] = 2;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else if (holder == 5){
				if (array [4] == 0){
                                array[4] = 2;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else if (holder == 6){
				if (array[5] == 0){
                                array[5] = 2;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else if (holder == 7){
				if (array[6] == 0){
                                array[6] = 2;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else if (holder == 8){
				if (array[7] == 0){
                                array[7] = 2;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else if (holder == 9){
				if (array [8] == 0){
                                array[8] = 2;
				}
				else {
				printf("That number has already been chosen. As such, you forfeit your turn.");
										                                }
                        }
			else {
				printf("Faulty input! Please restart program.");
			}	
			while (i < 9){
				if (array[i] == 0){
					printf("- ");
				}
				else if (array [i] == 1){
					printf("x ");
				}
				else if (array [i] == 2){
					printf("o ");
				}	
				countup2 = countup2 + 1;
				i = i + 1;
				if (countup2 >= 3){
					printf("\n");
					countup2 = 0;
				}
			}
			i = 0;
			turn = 0;
		}
	}
}

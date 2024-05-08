

//Authors:Alejadnro Cardenas, RAshin Raisa
//Date:May 2, 2024
//Purpose:Display and edit images

#include <stdio.h>
	
int main(){

int rows =100;
int cols=100;
int image[rows][cols];
int editmenu(int *editchoice);
int getMenu(int *userinput);
int load(int rows, int cols, int image [][cols]);	
int display(FILE *load_fp, int image[rows][cols], int rows, int cols);
int userchoice, userinput, editchoice, editin, loadedim;
int indexCols =0;
int indexRows =0;

do{
	userchoice = getMenu(&userinput);

switch(userchoice){

	case 1:
		printf("\nyou chose 1!\n");
		load(rows, cols, image);
		printf("\ncode works");
		
		break;

	case 2:
		printf("you chose 2!\n");
 	display(FILE *load_fp, int image[rows][cols], int rows, int cols);
			printf("made it to line 33");
		break;

	case 3:
		printf("Opening editing menu!\n");
		
		editin = editmenu(&editchoice);
	switch(editin){
	
		case 1:
			printf("you chose crop!");
			
			
			break;
		case 2: 
			printf("you chose Dim!");
			break;
			
		case 3:
			printf("you chose brighten!");
			break;
		case 0:
			printf("bye!");
			break;
			}
		
		
		break;

	case 0:
		printf("BYE BYE\n");
		break;
}
} while (userchoice != 0);

return 0;
}
int getMenu(int *userinput){
	

printf("**photo editor**\n");
printf("1: Load image\n");
printf("2: Display image\n");
printf("3: Edit image\n");
printf("0: Exit\n");
printf("\nChoose from one of the options above:");

scanf("%d",userinput);

	return *userinput;
}

int editmenu(int *editchoice){
	printf("**Editing**\n");
	printf("1: Crop image\n");
	printf("2: Dim image\n");
	printf("3: Brighten image\n");
	printf("0: Return to main menu\n");
	printf("\n Choose an option: ");
	
	scanf("%d", editchoice);
	return *editchoice;
	
}
int load(int rows, int cols, int image[][cols]){
	char l;
	FILE *load_fp;
	load_fp = fopen("test_image.txt", "r");
	
	if(load_fp == NULL){
		printf("Can't open file");
		return 0;
		}
	fscanf(load_fp, "%c", &l);
	printf("%c", l);
	
	fclose(load_fp);
	return 0;
	}

int display(FILE *load_fp,int rows, int cols, int image[rows][cols]){
	while (fscanf(load_fp, "%d", &image[rows][cols]) ==1){
		printf("%d", &image[rows][cols])
		indexCols++;
		return 0;
		}
	while (fscanf(load_fp, "%d", &image[rows][cols]) ==1){
	printf("%d", &image[rows][cols]);
	indexRows++;
	return 0;
	}
	
	}
	
	
	

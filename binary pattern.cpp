#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int i , j, rows;
	
	printf("enter the number of rows: 8 ");
	scanf("%d",&rows);
	for(i=1; i<=rows; i++){
		for (j=1; j<=i; j++){
			if ((i+j)%2==1){printf("1");
			}
			else{
				printf("0");
			}
			
			
		}
		
		printf("\n");
		
			}
			getch(0);
			return 0;
	
}

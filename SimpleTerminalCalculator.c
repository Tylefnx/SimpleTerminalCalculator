#include <stdio.h>

void main(){
	int a, b, c;
	char ch1, ch2;

	while(1) {
		system("clear");
		printf("Please select an operation...\n(+,-,*,/)\n\nOperation: ");
		scanf("%c", &ch1);

		if (ch1 == '*'){
			system("clear");
			printf("Input 2 integers to multiply\n\n1st Number: ");
			scanf("%d", &a);
			getchar();
			printf("2nd Number: ");
			scanf("%d",&b);
			getchar();
			c = a * b;
			printf("\n%d x %d = %d\n", a, b, c);
			printf("\nDo you wish to continue to calculate more shit ?\n(y/n)\n\n");
			scanf("%c", &ch2);
			getchar();
			if (ch2 == 'y'| ch2 == 'Y')
				continue;
			else
				break;
		}

		if (ch1 == '/'){
			system("clear");
			printf("Input 2 integers to divide\n1st number: ");
			scanf("%d", &a);
			getchar();
			printf("2nd number: ");
			scanf("%d", &b);
			getchar();
			c = a / b;
			printf("\n%d / %d = %d\n", a, b, c);
			printf("\nDo you wish to continue to calculate more shit ?\n(y/n)\n\n");
			scanf("%c", &ch2);
			getchar();
			if (ch2 == 'y'| ch2 == 'Y')
				continue;
			else
				break;
		}

		if (ch1 == '-'){
			system("clear");
			printf("Input 2 integers to extract\n\n1st Number: ");
			scanf("%d", &a);
			getchar();
			printf("2nd Number: ");
			scanf("%d",&b);
			getchar();
			c = a - b;
			printf("\n%d - %d = %d\n", a, b, c);
			printf("\nDo you wish to continue to calculate more shit ?\n(y/n)\n\n");
			scanf("%c", &ch2);
			getchar();
			if (ch2 == 'y'| ch2 == 'Y')
				continue;
			else
				break;
		}

		if (ch1 == '+'){
			system("clear");
			printf("Input 2 integers to add\n\n1st Number: ");
			scanf("%d", &a);
			getchar();
			printf("2nd Number: ");
			scanf("%d",&b);
			getchar();
			c = a + b;
			printf("\n%d + %d = %d\n", a, b, c);
			printf("\nDo you wish to continue to calculate more shit ?\n(y/n)\n\n");
			scanf("%c", &ch2);
			getchar();
			if (ch2 == 'y'| ch2 == 'Y')
				continue;
			else
				break;
		}
	}

	return 0;
}

#include <stdio.h>

int main(void)
{
	int total, ftotal, dista, amount;
	char type, vtype;

	printf("Are you a loyalty customer ? (Y/N) :");
	scanf("%c", &type);
	if (type == 'Y' || type == 'y')
	{
		printf("input vehicle type (A/B/C/D) :");
		scanf("% c", &type);
		printf("input traveling distance(Km) :");
		scanf("%d", &dista);
		if (0<dista> 80)
		{
			switch (type)
			{
				case 'a':
				case 'A':
					total = 20000;
					break;
				case 'b':
				case 'B':
					total = 15000;
					break;
				case 'c':
				case 'C':
					total = 10000;
					break;
				case 'd':
				case 'D':
					total = 8000;
					break;
				default:
					printf("invalid type");
			}
		}
		else if (dista < 80)
		{
			switch (type)
			{
				case 'a':
				case 'A':
					amount = dista - 80;
					total = (100 *amount) + 20000;
					break;
				case 'b':
				case 'B':
					amount = dista - 80;
					total = (80 *amount) + 15000;
					break;
				case 'c':
				case 'C':
					amount = dista - 80;
					total = (60 *amount) + 10000;
					break;
				case 'd':
				case 'D':
					amount = dista - 80;
					total = (amount *50) + 8000;
					break;
				default:
					printf("invalid type");
			}	//end switch
		}
		else {}

		ftotal = total *(10 / 100) + total;
	}
	else if (type == 'N' || type == 'n')
	{
		printf("input vehicle type (A/B/C/D) :");
		scanf("% c", &type);
		printf("input traveling distance(Km) :");
		scanf("%d", &dista);
		if (0<dista> 80)
		{
			switch (type)
			{
				case 'a':
				case 'A':
					total = 20000;
					break;
				case 'b':
				case 'B':
					total = 15000;
					break;
				case 'c':
				case 'C':
					total = 10000;
					break;
				case 'd':
				case 'D':
					total = 8000;
					break;
				default:
					printf("invalid type");
			}
		}
		else if (dista < 80)
		{
			switch (type)
			{
				case 'a':
				case 'A':
					amount = dista - 80;
					total = (100 *amount) + 20000;
					break;
				case 'b':
				case 'B':
					amount = dista - 80;
					total = (80 *amount) + 15000;
					break;
				case 'c':
				case 'C':
					amount = dista - 80;
					total = (60 *amount) + 10000;
					break;
				case 'd':
				case 'D':
					amount = dista - 80;
					total = (amount *50) + 8000;
					break;
				default:
					printf("invalid type");
			}	//end switch
		}
	}
	else
	{
		ftotal = total *(05 / 100) + total;
		printf("Invalid customer type");
	}
}
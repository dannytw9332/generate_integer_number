#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>




int main()
{
	printf("All inputs are integer value only.\nYou can choose any round as result.\n");
	int min, max, num,expext_avg, i;
	time_t t1;
	printf("Enter maximum number:");
	scanf("%d", &max);
	printf("Enter minimum number:");
	scanf("%d", &min);
	printf("Enter how many numbers do you want to generate:");
	scanf("%d", &num);
	int number[num];
	printf("Enter expected average:");
	scanf("%d", &expext_avg);
	if(expext_avg < min || expext_avg > max)
	{
		printf("the expexted average is larger than maximum or smaller than minimum.");
	}
	else
	{
		max = max - min + 1;
		int w=0;
		srand((unsigned) time(&t1));
		while(w<5)
		{
			int sum = 0;
			int avg = 0;
			for(i = 0;i<num;i++)
			{
				number[i] = rand() % max + min; 
				sum += number[i];
			}
			avg = round(sum/num);
			if(avg == expext_avg)
			{
				printf("%d round:\n",w+1);
				for(i=0; i<num;i++)
				{
					printf("%d\n", number[i]);
				}
				w++;
				printf("\n");
			}	
		}
	}
	system("pause");
	return 0;
}

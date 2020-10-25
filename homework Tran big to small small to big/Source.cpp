#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	char input[20][20];
	char output[20][20];
	printf("how many word : ");
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		printf(" enter word : ");
		scanf("%s", input[i]);
		int length = strlen(input[i]);
		for (int j = 0; j < length; j++)
		{
			if (input[i][j] >= 97 && input[i][j] <= 122)
			{
				output[i][j] = input[i][j] - 32;
			}
			if (input[i][j] >= 65 && input[i][j] <= 90)
			{
				output[i][j] = input[i][j] + 32;
			}
		}
		output[i][length] = '\0';
		printf(" output is %s\n", output[i]);
	}
	return 0;
}
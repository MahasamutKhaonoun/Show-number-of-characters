#include<stdio.h> 
int main()
{
	char alphabet[50];
	int sum = 0;
	gets_s(alphabet);
	for (int i = 0;i < 50;i++)
	{
		if (alphabet[i] == '\0')
		{
			break;
		}
		sum = sum + 1;
	}
	printf("%d", sum);
	return 0;
}
#include <stdio.h>
int main()
{
	char arr[10];
	char c;
	int i=0,z;
	
	printf("Enter the string\n");
	//gets(arr);
	fgets(arr, sizeof(arr), stdin);

	printf("The string is %s",arr);
	
	//while(i<10)
//{
	for(c = 'A'; c <= 'Z'; ++c)
	{
		if(c == arr[i])
		{
			i++;
			printf("The matched is character %c",c);
		}
	}
	
i=0;

		for(z=0; z<10; z++)
			{
				if(z == arr[i])
				{
					printf("The matched is interger %d",z);
				}
			}
			
//}
	
	return 0;
	
	
}

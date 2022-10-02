#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	FILE* fp;//65010536
	char str[100];
	char* p,*c;
	p = str;
	c = str;
	printf("Input String : \n");
	while (*p != '.') {
		scanf("%s", str);
		if (*c == '.') 
		{
			break;
		}
		while (*p != '\0') 
		{
			if (* p == '.')
			{
				break;
			}
			p++;
		}
		fp = fopen("String.txt", "a");
		fprintf(fp, "%s\n", str);
		fclose(fp);
	}
	return 0;
}
#include<stdio.h>

int main()
{
	FILE *filep;
	char text[256];
	filep=fopen("kadir.txt","a");
	
	if(filep=NULL)
	{
		printf("Dosya Olsturulamadi");
	}
	else
	{
		printf("Dosyaniza yazinizi yaziniz:");
		fgets(text,256,stdin);
		fputs(text,filep);
		printf("Dosya Yazdirildi.");
		fclose(filep);
		
		return 0;
	}
}

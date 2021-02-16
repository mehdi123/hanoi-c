#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>

int hanoi(int,char,char,char);
main()
{
	int i;
	char s[4] ,f ,w ,t;
	clrscr();
	printf("Enter the number of rings:");
	i = 0;
	while(isdigit(s[i++] = getchar()));
	s[i] = '\0';
	f = getchar();
	w = getchar();
	t = getchar();
	printf("\n%d\n",hanoi(atoi(s),f,w,t));
	return 0;
}
int hanoi(int num,char f,char w,char t)
{
	static int i = 0;
	if ( num > 1 ) {
		hanoi(num - 1,f,t,w);
		hanoi(1,f,w,t);
		hanoi(num - 1,w,f,t);
		return i;
	}
	i++;
	putchar(f);
	putchar('\t');
	putchar(t);
	putchar('\n');
}




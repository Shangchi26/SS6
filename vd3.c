#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf ("The number 555.55 in various forms:\n");
	printf ("In float form without modifiers :\n");
	printf ("[%f]\n",555.55);
	printf ("In exponential form without any modifier: \n");
	printf ("[%e]\n",555.55);
	printf ("In float form with - modifier:\n",555.55);
	printf ("[%-f]\n",555.55);
	printf ("In float form with digit string 10.3 as modifier\n");
	printf ("[%10.3f]\n",555.55);
	printf ("In float form with 0 as modifier: \n");
	printf ("[%0f]\n",555.55);
	printf ("In float form with 0 and digit string 10.3 ");
	printf ("as modifiers:\n");
	printf ("[%010.3f]\n",555.55);
	printf ("In float form with -, 0");
	printf ("and digit string 10.3 as modifiers: \n");
	printf ("[%-010.3f]\n",555.55);
	printf ("In exponential form with 0 ?");
	printf ("and digit string 10.3 as modifiers:\n");
	printf ("[%010.3e]\n",555.55);
	printf ("In exponential form with -, 0");
	printf ("and digit string 10.3 as modifiers : \n");
	printf ("[%-010.3e]\n\n",555.55);
	return 0;
}

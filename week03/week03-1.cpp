///Week03-1 Palindrome (CPE���P�s��-�@���P(��))
///step1: Input Ouput  scanf("%s", line)
///step2: while() + scanf() == 1
#include <stdio.h>
int main()
{
	char line[30];

	while( scanf("%s", line) == 1 ){

		printf("%s", line);

		printf(" -- is not a palindrome.\n\n");
	}
}

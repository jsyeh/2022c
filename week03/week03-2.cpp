///Week03-2 Palindrome (CPE顆星廣場-一顆星(難))
///step03 只解決迴文/回文,正讀、反讀,都一樣
/// for迴圈,前面到後面 vs. 後面到前面
#include <stdio.h>
#include <string.h> ///strlen()
int main()
{
	char line[30];

	scanf("%s", line);

	int N = strlen(line);
	int bad=0;
	for(int i=0; i<N; i++){
        if( line[i] != line[N-1-i] ) bad=1;
	}
	if(bad==1) printf("它不是迴文\n");
	else printf("它是迴文\n");
}

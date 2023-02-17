///Week01-5.cpp step03-1
#include <stdio.h>
#include <string.h> //for strlen()
int main()
{

	char line[40]; //字串,就是字元陣列
	int total=0;
	while( scanf("%s", line)==1 ){
//如果scanf()成功讀入1筆資料, 就持續做
		int ans=0;
		int N = strlen(line);
		for(int i=0; i<N; i++){ //陣列配迴圈
			if( line[i] == '2' ) ans++;
		}
		printf("%d\n", ans);
		total += ans;
	}
	printf("Total: %d\n", total);
}

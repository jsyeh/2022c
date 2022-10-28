///step01-1.cpp 實習課要上機考了。但程式背了也沒用, 因為考試會背錯。
///所以要有思考的方式來解決。今天把實習的題目拿來講解「怎麼想出來的」
///今天的大魔王是 2個 while迴圈 來畫出直角三角形(有空格、有星星)
///所以先用 for迴圈來思考。可以用 3個for迴圈, 很好思考。但是只有2個for迴圈時,
///口訣是先能畫出正方形。
///再來的關鍵, 是空格有幾個。空格有n-i個。所以 把 if寫出來, 成立時印空格, else印星星,完成
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	for(int i=1; i<=n; i++){
		for(int k=1; k<=n; k++){
			if( k<= n-i )  printf(" ");
			else printf("*");

		}
		printf("\n");
	}

}
///only two for
///口訣: 正方型


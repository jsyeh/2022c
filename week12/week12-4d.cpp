//(SOIT106_ADVANCE_004) 進階題：大小寫轉換 :
//讀入一個字串(至多10個字元)，將字串中的大小寫英文字母相互轉換
//(大寫轉為小寫，小寫轉為大寫)後輸出。

#include <stdio.h>
int main()
{
	char line[20];
	scanf("%s", line);

	for(int i=0; line[i]!=0; i++){
		char c = line[i];
		if(c>='A' && c<='Z') line[i]=c-'A'+'a';
		if(c>='a' && c<='z') line[i]=c-'a'+'A';
	}
	printf("%s\n", line);
}

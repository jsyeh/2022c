///H10111402：Function-反轉數字
///(H10111402) Function-反轉數字 :
///請撰寫一函式(Fun)，傳回整數參數值的反轉。
///舉例: 參數為9876，反轉後為6789。
///參數為98765，反轉後為0。
///(注意:輸入的值介於1~9999，超過請回傳0)

/*請在1到9999輸入一個數字:數字反轉為:*/
#include <stdio.h>
void calc(int n)
{
	if(n<1 || n>9999) printf("0\n");
	else{ //剝皮法
		while( n>0 ){
			printf("%d", n%10 );;
			n = n / 10;
		}
		printf("\n");
	}
}
int main()
{
	printf("請在1到9999輸入一個數字:數字反轉為:");

	int n;
	scanf("%d", &n);

	calc( n );
}

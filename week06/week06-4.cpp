///暴力法有點慢 想要快 1億倍!!!
///國中將不會教的「輾轉相除法」
#include <stdio.h>
int main()
{
    printf("請輸入2個數字: ");
    int a, b, c; ///大,中,小
    scanf("%d %d", &a, &b);

    while(1){ ///一直做
        c = a%b;///小 a除b 得到餘數
        printf("a:%d b:%d c:%d\n", a, b, c);
        if( c==0 ) break; ///離開迴圈 跳開
        a = b; ///大二變老大
        b = c; ///老三變老二
    }
    printf("中的是:%d", b);
}

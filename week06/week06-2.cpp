#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){ ///(1)加糷芅琜
        int space = 5-i;///(2)计Τ碭
        int star = i*2-1;///(2)计Τ碭琍琍
        for(int k=0; k<space; k++){ ///(3)癹伴夹非
            printf(" ");
        }
        for(int k=0; k<star; k++){
            printf("*");
        }

        printf(" 芅琜:%d加 %d %d琍\n", i, space, star);
    } ///(1)加糷芅琜
}
///     *    芅琜:1加 4 1琍
///    ***   芅琜:2加 3 3琍
///   *****  芅琜:3加 2 5琍
///  ******* 芅琜:4加 1 7琍
/// *********芅琜:5加 0 9琍

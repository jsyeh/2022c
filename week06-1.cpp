//秅礶琍琍
// ***** 芅琜 5
// **** 芅琜 4
// *** 芅琜 3
// ** 芅琜 2
// * 芅琜 1
#include <stdio.h>
int main()
{
    //for(int i=5; i>=1; i--){ ///糶材1オも癹伴,芅琜絋﹚OK,
    //    for(int k=0; k<i; k++) printf("*");

    //    printf("\n");
    //    ///printf("芅琜 %d\n", i); 糶材1オも癹伴,芅琜絋﹚OK,
    //}
    for(int i=1; i<=5; i++){
        int star= i*2-1;
        printf("芅琜:%d加 %d琍\n", i, star);///糶材1オも癹伴,芅琜絋﹚OK
    }

}
///  Τ翴钩2 2-1
///     *    芅琜:1加 1琍
///    ***   芅琜:2加 3琍
///   *****  芅琜:3加 5琍
///  ******* 芅琜:4加 7琍
/// *********芅琜:5加 9琍

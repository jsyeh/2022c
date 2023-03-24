///Week06-5.cpp step03-2 想要用更簡單呼叫的sort方法
/// std::sort()
#include <stdio.h>
#include <algorithm>  ///便會有 std::sort()能用
int a[10] = {9,8,7,1,2,3,6,5,4,0};
int main()
{
    std::sort(a, a+10);

    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }
}


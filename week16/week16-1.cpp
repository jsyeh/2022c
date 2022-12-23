///了解 scanf()的細節
#include <stdio.h> ///Wait!!! 真的有這個檔案
int main()
{
    char line[300];
    ///scanf("%s", line ); ///Q: 為什麼沒加 &
    char * p = line;
///整數
    int n=10;///值是 10  有3個性質, 第4個性質 &n 位置/地址
    ///名字
    int *p2 = &n;

    float f=3.1415926;
    float *p3 = &f;
    /// scanf("%d", &n);
    char c='A';
    char *p4 = &c;
}///請同學,把程式 copy 到 C Tutor Python 要執行, 看它的結果

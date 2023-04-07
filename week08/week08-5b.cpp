///Week08-5b (SOIT107_ADVANCE_013_C_C++)
///秈顶肈ノ璹ㄧΑ程max籔程min―ㄢぇ畉 : 块タ俱计
///ノㄧΑ耞程籔程块程搭程ぇ畉
#include<iostream>
using namespace std;
//Todo: Write
//int max(int a, int b, int c, int d) {..}
//int min(int a, int b, int c, int d) {..}
int max(int a, int b, int c, int d)
{
	if(a>=b && a>=c && a>=d) return a;
	if(b>=a && b>=c && b>=d) return b;
	if(c>=a && c>=b && c>=d) return c;
	if(d>=a && d>=b && d>=c) return d;
}
int min(int a, int b, int c, int d)
{
	if(a<=b && a<=c && a<=d) return a;
	if(b<=a && b<=c && b<=d) return b;
	if(c<=a && c<=b && c<=d) return c;
	if(d<=a && d<=b && d<=c) return d;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* よC++ main ㄧΑ 单 よ C  main ㄧΑ
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/

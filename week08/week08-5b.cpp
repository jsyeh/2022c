///Week08-5b (SOIT107_ADVANCE_013_C_C++)
///�i���D�G�Q�Φۭq�禡�̤j��max�P�̤p��min�D�X��̤��t : ��J�|�ӥ���ƫ�A
///�Q�Ψ禡�P�_�̤j�ȻP�̤p�ȡA�ÿ�X�̤j�ȴ�̤p�Ȥ��t
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
/* �W��C++ main �禡 ���P�� �U�� C �� main �禡
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/

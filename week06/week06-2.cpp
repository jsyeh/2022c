#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){ ///(1)�Ӽh�N�[
        int space = 5-i;///(2)�Ʀ��X�ӪŮ�
        int star = i*2-1;///(2)�Ʀ��X�ӬP�P
        for(int k=0; k<space; k++){ ///(3)�j��зǫ�
            printf(" ");
        }
        for(int k=0; k<star; k++){
            printf("*");
        }

        printf(" �N�[:%d�� %d�Ů� %d�P\n", i, space, star);
    } ///(1)�Ӽh�N�[
}
///     *    �N�[:1�� 4�Ů� 1�P
///    ***   �N�[:2�� 3�Ů� 3�P
///   *****  �N�[:3�� 2�Ů� 5�P
///  ******* �N�[:4�� 1�Ů� 7�P
/// *********�N�[:5�� 0�Ů� 9�P

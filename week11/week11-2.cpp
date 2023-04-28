///LeetCode 205 �r������
bool isIsomorphic(char * s, char * t){
    int N1 = strlen(s), N2 = strlen(t);
    if(N1!=N2) return false; //���פ��@��, ���X��

    char table1[256] = {}; //��Ӫ� c1 => c2
    char table2[256] = {}; //��Ӫ� c2 => c1

    for(int i=0; i<N1 ; i++) {
        char c1 = s[i], c2 = t[i];
        if(table1[c1]==0 && table2[c2]==0){
            table1[c1] = c2; //��ӳ���,�i�H����Ӫ�
            table2[c2] = c1;
        }

        if(table1[c1]!=c2) return false;//���X��
        if(table2[c2]!=c1) return false;//���X��
    }

    return true; //�X���ˬd���X��
}
//�{�����D,����5�Ӽh��
//1. �^��ݤ���
//2. �^��N�����,���D���٬O����(½Ķ�L��)
//3. �F���D��,�����|�g(�S����V)
//4. ���D��V,�|�g,���g�X�ӬO����)
//5. �g�X�ӤF

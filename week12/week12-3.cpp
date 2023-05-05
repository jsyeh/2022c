//LeetCode 451. Sort Characters By Frequency
char * frequencySort(char * s){ //LeetCode 451�r���W�v
    int N = strlen(s);
    int H[62]={};//�j�g26��,�p�g26��,�Ʀr10��,�C�ӳ��X�{0��
    char alphabet[62];//�W���έp�Ʀr,�������r��
    for(int i=0; i<26; i++) alphabet[i] = 'A'+i;
    for(int i=0; i<26; i++) alphabet[i+26] = 'a'+i;
    for(int i=0; i<10; i++) alphabet[i+26+26] = '0'+i;
    //�έp�C�Ӧr���X�{������
    for(int i=0; i<N; i++){
        char c = s[i];
        if(c>='A' && c<='Z') H[c-'A']++;//�h1��
        if(c>='a' && c<='z') H[c-'a'+26]++;//�׶}�e��26�Ӥj�g
        if(c>='0' && c<='9') H[c-'0'+52]++;//�׶}�e��26+26�Ӥj�p�g
    } //�n�Ƨ�
    for(int i=0; i<62; i++){
        for(int j=i+1; j<62; j++){
            if(H[i]<H[j]){ //�Ʊ�j��p, �ҥH����p,�N�n�洫
                int temp=H[i];
                H[i] = H[j];
                H[j] = temp;
                char c = alphabet[i];
                alphabet[i] = alphabet[j];
                alphabet[j] = c;
            }
        }
    }
    int len=0;
    for(int i=0; i<62; i++){
        for(int k=0; k<H[i]; k++) s[len++] = alphabet[i];
    }
    return s;
}

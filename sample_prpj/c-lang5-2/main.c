#include <stdio.h>

void main()
{
    int n[] = { 5,4,3,2,1,0 };
    int i;
    //  for�̌J��Ԃ���i<6���錾���Ă���int n[]�̔z��̂�葽���ƁA���s�G���[�ɂȂ�B
    for (i = 0; i < 6; i++) {
        printf("n[%d]=%d ", i, n[i]);
    }
    printf("\n");
}
#include <stdio.h>

//���� ������ ������ ȯ���ϴ� �Լ�
float change_score(char *a)
{
	float res;
	//�迭 ������ ���������� loop������.
	//switch��� �Ұ�. �ֳ��ϸ� switch�� ��ȯ���� �������϶��� ��밡���ϱ⶧��
	//�����ʹ� "A+"�� �ϳ��� �����ʰ� 'A'�� '+'�� ������ ����.
	//���� �������� a�� 'A'�� �����Ѵ�.  
    if (*a == 'A' && *(a + 1) == '+') {
        res = 4.5;
    } else if (*a == 'A' && *(a + 1) == '0') {
        res = 4.0;
    } else if (*a == 'B' && *(a + 1) == '+') {
        res = 3.5;
    } else if (*a == 'B' && *(a + 1) == '0') {
        res = 3.0;
    } else if (*a == 'C' && *(a + 1) == '+') {
        res = 2.5;
    } else if (*a == 'C' && *(a + 1) == '0') {
        res = 2.0;
    } else if (*a == 'D' && *(a + 1) == '+') {
        res = 1.5;
    } else if (*a == 'D' && *(a + 1) == '0') {
        res = 1.0;
    } else if (*a == 'F') {
        res = 0.0;
    }
	return res;
} 
// ����ü ����
struct Data {
    char classname[50];
    float hakjam;
    char mygrade[3];
};

int main(void) {
    // 20�� 3��¥�� 2���� �迭 ����
    struct Data myArray[20][3];
	int i;
	float grade,sum1=0.0,sum2=0.0;
    // ������ �Է� �ޱ�
    for (i = 0; i < 20; i++) 
	{
        scanf("%s %f %s", myArray[i][0].classname, &myArray[i][1].hakjam, myArray[i][2].mygrade);
    }
    // �Էµ� ������ ���
    printf("\n�Էµ� ������:\n");

    for (i = 0; i < 20; i++) 
	{
        // ������ �������� ���ڿ� ���Ͽ� ���� ȯ��
        //p�� �ƴ϶�� �Լ��� ��ȯ
        
		if(myArray[i][2].mygrade[0] != 'P') /*���⼭ mygrade[0]�� ����� ������
											�ڷ����� ���ڿ��� ���ÿ� ������ ���� 'P'�ΰ��� �ǹ��Ѵ�.
											���� myArray[][].mygrade[index]�� ��°��� ���ڰ� �ȴ�.
											*/ 
		{
			//���� ���ϱ� ������ �� 
			grade = change_score(&myArray[i][2].mygrade);
			sum1 += (myArray[i][1].hakjam * grade);
			sum2 +=  myArray[i][1].hakjam ;
		}
        //printf("%f %f\n", sum1,sum2);
    }
	//sum1�� ���� * ������ ����
	printf("%f",(sum1/sum2));
	//������ ����
	 

    return 0;
}

#include <stdio.h>

//영어 학점을 점수로 환산하는 함수
float change_score(char *a)
{
	float res;
	//배열 선언후 맞을때까지 loop돌린다.
	//switch사용 불가. 왜냐하면 switch는 반환값이 정수형일때만 사용가능하기때문
	//포인터는 "A+"를 하나로 보지않고 'A'와 '+'로 나누어 본다.
	//따라서 포인터인 a는 'A'를 지목한다.  
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
// 구조체 정의
struct Data {
    char classname[50];
    float hakjam;
    char mygrade[3];
};

int main(void) {
    // 20행 3열짜리 2차원 배열 선언
    struct Data myArray[20][3];
	int i;
	float grade,sum1=0.0,sum2=0.0;
    // 데이터 입력 받기
    for (i = 0; i < 20; i++) 
	{
        scanf("%s %f %s", myArray[i][0].classname, &myArray[i][1].hakjam, myArray[i][2].mygrade);
    }
    // 입력된 데이터 출력
    printf("\n입력된 데이터:\n");

    for (i = 0; i < 20; i++) 
	{
        // 포인터 개념으로 문자열 비교하여 학점 환산
        //p가 아니라면 함수로 변환
        
		if(myArray[i][2].mygrade[0] != 'P') /*여기서 mygrade[0]을 사용한 이유는
											자료형이 문자열인 동시에 데이터 값이 'P'인것을 의미한다.
											따라서 myArray[][].mygrade[index]의 출력값은 문자가 된다.
											*/ 
		{
			//학점 곱하기 평점의 합 
			grade = change_score(&myArray[i][2].mygrade);
			sum1 += (myArray[i][1].hakjam * grade);
			sum2 +=  myArray[i][1].hakjam ;
		}
        //printf("%f %f\n", sum1,sum2);
    }
	//sum1은 평점 * 학점의 총합
	printf("%f",(sum1/sum2));
	//학점의 총합
	 

    return 0;
}

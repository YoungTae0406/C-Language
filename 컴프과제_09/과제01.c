#include <stdio.h>

struct student {
	char name[10]; //student의 이름
	int schoolnumber; //student의 학번
	double mean; //student의 평균

};
void main() {
	int seq; //가장 최고점의 student 인덱스
	double totalmean=0; //전체 학생의 평균
	struct student student[5]; // 구조체 배열
	double mmean = 0; //최고점을 계산하기 위해 잠시 필요한 변수
	for (int i = 0; i < 5; i++) {
		printf("이름, 학점, 평점을 입력하세요. \n");
		scanf_s("%s", student[i].name,10);
		scanf_s("%d", &student[i].schoolnumber);
		scanf_s("%lf", &student[i].mean);
		totalmean += student[i].mean;

	}
	for (int i = 0; i < 5; i++) {
		if (mmean < student[i].mean) {
			mmean = student[i].mean;
			seq = i; //최고점의 인덱스를 저장
		}
	}
	printf("가장 평점이 높은 학생의 이름, 학번, 평점 : %s %d %lf\n", student[seq].name,
		student[seq].schoolnumber, student[seq].mean); //평균이 높은 학생의 이름 학번 평점을 출력
	totalmean = totalmean / 5; //전체 학생의 평균을 구함
	printf("전체 학생의 평균과 최고점 : %lf %lf", totalmean, student[seq].mean); //출력
}
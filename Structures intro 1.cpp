#include<stdio.h>
struct student {
	char roll[20];
	char name[90];
	int age;
	float cpga;
};
int main() {
	struct student s1,s3;
	scanf("%s",s1.roll);
	scanf("%s",s1.name);
	scanf("%d",&s1.age);
	scanf("%f",&s1.cpga);
	scanf("%s",s3.roll);
	scanf("%s",s3.name);
	scanf("%d",&s3.age);
	scanf("%f",&s3.cpga);
	printf("%s %s %d %.2f\n",s1.roll,s1.name,s1.age,s1.cpga);
	printf("%s %s %d %.2f",s3.roll,s3.name,s3.age,s3.cpga);
}

# structure
#include <stdio.h>
struct name_str
{
	char name[10];
	int age;
	int dob;
	float gpa;
}

int main()
{
	printf("\n\t enter name");
	scanf("%s",&name);
	printf("\n\t enter age");
	scanf("%d",&age);
	printf("\n\t enter date of birth");
	scanf("%d",&dob);
	printf("\n\t enter gpa");
	scanf("%.2f",&gpa);
	printf("\n\tName:%s",&name);
	printf("\n\tAge:%d",&age);
	printf("\n\tD.O.B:%d",&dob);
	printf("\n\tGPA:%.2f",&gpa);

	return 0;
}

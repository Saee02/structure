#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct name_str 
{
  char name[50];
  int prn;
  float gpa;
} 
name_str1;

int main() {

{
	printf("Enter Name :\n");
	scanf("%s",&name_str1.name);
	printf("Enter PRN :\n");
	scanf("%d",&name_str1.prn);
	printf("Enter GPA:\n");
	scanf("%.2f",&name_str1.gpa);

}

  // print struct variables
  printf("Name: %s\n", name_str1.name);
  printf("PRN: %d\n", name_str1.prn);
  printf("GPA: %.2f",name_str1.gpa);

  return 0;
}

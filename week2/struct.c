#include<stdio.h>

typedef struct {

    char* name;
    int age;
    char* profession;

} student;

void main(){

    student st1= {"shadi", 26, "student"};
    printf("%s, %d, %s", st1.name, st1.age, st1.profession );
}

void changethename(struct student st1){

    st1.name= "fredo";
    printf("%s", st1.name);
}



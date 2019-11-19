#include<stdio.h>

 struct student{
    char* name;
    int age;
    char* profession;

};

void main(){

    struct student st1= {"shadi", 26, "student"};
    printf("%s, %d, %s \n", st1.name, st1.age, st1.profession );

    struct student *ptr_st1= &st1;

    changethename(st1);
    changethenamewithpointer(ptr_st1);
}

void changethename(struct student st1){

    st1.name= "fredo";
    st1.age= "12";
    st1.profession="dasd";
    printf("\n%s, %d, %s", st1.name, st1.age, st1.profession);
}


void changethenamewithpointer(struct student *ptr_st1){

    ptr_st1->name= "nyttnamn";
    ptr_st1->age= "1342";
    ptr_st1->profession="bdjbfjdsfj";

    printf("\n%s, %d, %s", ptr_st1->name, ptr_st1->age, ptr_st1->profession);

}

#include <stdio.h>
#define pp printf

struct {
    char *name;
    int age;
    int salary;
}emp1={"Shubendu Das",27,90000};

int main(){
    pp("Name : %s \tAge : %d \tSalary : %d",emp1.name,emp1.age,emp1.salary);
}

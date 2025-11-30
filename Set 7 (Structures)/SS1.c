#include <stdio.h>
#define pp printf
#define sf scanf
struct employee{
    char *name;
    int age;
    int salary;
};
int manager(){
    struct employee manager;
    manager.age=27;
    if(manager.age>30)
        manager.salary=65000;
    else
        manager.salary=55000;
    return manager.salary;
}
int main(){
    struct employee emp1;
    struct employee emp2;
    pp("Enter the salary of emp1 : ");
    sf("%d",&emp1.salary);
    pp("Enter the salary of emp2 : ");
    sf("%d",&emp2.salary);
    pp("The salary of emp1 : %d\n",emp1.salary);
    pp("The salary of emp2 : %d\n",emp2.salary);
    pp("The salary of manager : %d\n",manager());
}

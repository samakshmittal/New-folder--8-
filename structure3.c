#include<stdio.h>
#include<string.h>
struct kavu{
    int age;
    char fullname[100];
    float cgpa;
    
};
int main(){
    struct kavu s1;
    s1.age=18;
    strcpy (s1.fullname,"kavya dangi");
    s1.cgpa=4;
    printf("%s", s1.fullname);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
struct s{
    int code;
    char name[30];
};
int main(){
    struct s *ptr;
    int i, no;
    printf("Enter the number of subjects");
    scanf("%d", &no);
    ptr = (struct s *)malloc(no*sizeof(struct s));
    for (i=0; i<no; ++i){
        printf("Enter the name of the subject and code respectively:\n");
        scanf("%s %d", (ptr+i)->name, &(ptr+i)->code);
    }
    printf("Displaying Information\n");
    for(i=0; i<no; ++i){
        printf("%s\t%d\n", (ptr+i)->name, (ptr+i)->code);
    }
    return 0;
}
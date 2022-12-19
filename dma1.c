#include <stdio.h>
struct a{
    int x;
    char y;
    struct a* link;
};
int main(){
    struct a o1;
    o1.link=NULL;
    o1.x=1;
    o1.y=2;
    struct a o2;
    o2.link=NULL;
    o2.x=3;
    o2.y=4;
    o1.link=&o2;
    printf("%d\n", o1.link->x);
    printf("%d", o1.link->y);
    return 0;
}
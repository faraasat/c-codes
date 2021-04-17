#include<stdio.h>

struct student {
    int id;
    int marks;
    char fav_c;
};

    struct student harry, ravi, surma;

int main(){

    harry.id = 1;
    ravi.id = 2;
    surma.id = 3;
    harry.marks=466;
    ravi.marks=466;
    surma.marks=466;
    harry.fav_c='p';
    ravi.fav_c='p';
    surma.fav_c='p';



    return 0;
}

/* struct employee {
    int id;
    char name[53];
    float marks;
};
  struct employee e1, e2;
*/

/* struct employee {
    int id;
    char name[53];
    float marks;
} e1, e2;
*/

/* way of initializing:

    int main(){

        struct employee e1;
        e1.id = 12;
        e1.marks=34.3;

        struct employee e1 = {12, 34.3};

        return 0;

    }

*/
#include<stdio.h>

struct driver{
    char name[34];
    char dlNo[43];
    char route[47];
    int kms;
};

int main(){

    struct driver d1, d2;
    printf("Enter the detail of first drivers:\n");
    printf("Enter the name of first driver:\t\t");
    scanf("%s", &d1.name);
    printf("Enter the dlno of first driver:\t\t");
    scanf("%s", &d1.dlNo);
    printf("Enter the route of first driver:\t");
    scanf("%s", &d1.route);
    printf("Enter the number of kms of first driver:\t");
    scanf("%d", &d1.kms);

    printf("Enter the detail of first drivers:\n");
    printf("Enter the name of second driver:\t\t");
    scanf("%s", &d2.name);
    printf("Enter the dlno of second driver:\t\t");
    scanf("%s", &d2.dlNo);
    printf("Enter the route of second driver:\t");
    scanf("%s", &d2.route);
    printf("Enter the number of kms of second driver:\t");
    scanf("%d", &d2.kms);

    printf("******Printing information of drivers******\n\n");
    printf("Name of first driver is %s\n", d1.name);
    printf("DlNo. of first driver is %s\n", d1.dlNo);
    printf("Route of first driver is %s\n", d1.route);
    printf("kms of first driver is %d\n", d1.kms);

    printf("Name of second driver is %s\n", d2.name);
    printf("DlNo. of second driver is %s\n", d2.dlNo);
    printf("Route of second driver is %s\n", d2.route);
    printf("kms of second driver is %d\n", d2.kms);

    return 0;
}
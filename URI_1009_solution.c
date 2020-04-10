#include <stdio.h>
int main(){
    char name ;
    double salary , value  ;


    scanf("%s %lf %lf",&name , &salary ,&value);

    double total = salary + (value *.15 );
    printf("TOTAl = R$ %.2lf\n",total);
    return 0;

}


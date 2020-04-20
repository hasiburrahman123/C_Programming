#include<stdio.h>

int main()
{
  double A ,B , C ;

  scanf("%lf  %lf  %lf" , &A , &B , &C);

  printf("triangle:%.3lf\n" , (A * C) / 2) ;
  printf("radius's circle:%.3lf\n", 3.14159 * C * C );
  printf("trapezium:%.3lf\n",((A + B)/2 ) * C  )  ;
  printf("square:%.3lf\n", B * B ) ;
  printf("rectangle:%.3lf\n", A * B);
return 0 ;

}


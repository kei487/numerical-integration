#include <stdio.h>

double func(double x){
  double y=(x*x + 2*x -1);
  return y;
}

int main(){
  double x,dx,a,b,S=0;
  int n;
  a = 0;
  b = 4;
  n = 2;
  x = a;
  dx = (b-a)/(2*n);
  for(int i=0;i<n;i++){
    S = S + func(x) + 4*func(x+dx) + func(x+2*dx);
    x = x + 2*dx;
  }
  S = S*dx/3;
  printf("S = %lf\n",S);

  return 0;
}

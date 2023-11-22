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
  n = 4;
  x = a;
  dx = (b-a)/n;
  for(int i=0;i<n;i++){
    S = S + func(x) + func(x+dx);
    x = x + dx;
  }
  S = S*dx/2;
  printf("S = %lf\n",S);

  return 0;
}

#include <stdio.h>

int power(int m , int n)
{ if (n==0)
    {return 1 ;}
  else
  { return m * power (m, n-1) ;
  }
}

int main() {
    int a, b;
    printf("enter number\t");
    scanf("%d", &a);
    printf("enter power\t");
    scanf("%d", &b);

    int result= power(a, b);
    printf("ans= %d", result);

}

#include <stdio.h>

int gcd(int a, int b)
{
        if(b==0)
        { return a; }
        else
        {
            return gcd(b,a%b);
        }
}
int main() {
    int x, y;
    printf("enter number 1:  ");
    scanf("%d", &x);

    printf("enter number 2:  ");
    scanf("%d", &y);
    int result= gcd(x , y);
    printf("ans= %d", result);

}

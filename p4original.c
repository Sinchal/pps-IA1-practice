#include <stdio.h>
int input()
{
int n;
printf("Enter a number");
scanf("%d", &n);
return n;
}
int calculate(int n)
{
int i, sum = 0;
for (i = 1; i <=n; ++i)
{
sum += i;
}
return sum;
}
int output(int n, int sum)
{
printf("Sum = %d", sum);
return 0;
}
int main()
{
int a = input();
int b = calculate(a);
output(a, b);
  return 0;
}

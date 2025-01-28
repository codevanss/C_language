#include <stdio.h>
#include <conio.h>

int main()
{

  int a[3][3], b[3][3], c[3][3];
  printf("Enter the first Matrix \n");
  for (int i = 0; i <= 2; i++)
  {
    for (int j = 0; j <= 2; j++)
    {
      scanf("%d ", &a[i][j]);
    }
  }
  printf("your array is \n");
  for (int i = 0; i <= 2; i++)
  {
    for (int j = 0; j <= 2; j++)
    {
      printf("%d  \n", a[i][j]);
    }
  }

  printf("Enter the second Matrix \n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d ", &b[i][j]);
    }
  }

  printf("your array is \n");
  for (int i = 0; i <= 2; i++)
  {
    for (int j = 0; j <= 2; j++)
    {
      printf("%d  ", b[i][j]);
    }
  }

  for (int i = 0; i <= 2; i++)
  {
    for (int j = 0; j <= 2; j++)
    {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
  printf("The sum is \n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d  ", c[i][j]);
    }
  }

  getch();
  return 0;
}
#include <stdio.h>
#include <conio.h>
main(void)
{
    int n, square, cube;
    clrsrc();
    printf("Enter number: ");
    scanf("%d ,&n");
    square = n * n;
    cube = n * n * n;
    printf("\nsquare: %d\ncube: %d",square,cube);
    getch();
}


#include <stdio.h>

int main()
{
    int a;
    printf("enter the number to whether it is even or odd:");
    scanf("%d",&a);
    printf("%d",a);
    
    if(a%2==0)
    {
        printf("\n%d is even number",a);
    }
    
    else
    {
        printf("\n%d is odd number",a);
    }

    return 0;
}

/*
test case:1
input: 1
output:enter the number to whether it is even or odd:1
1 is odd number

test case:2
input: 2
output:enter the number to whether it is even or odd:2
2 is even number

test case:3
input: 176
output:enter the number to whether it is even or odd:176
176 is even number

test case:4
input: 6795
output:enter the number to whether it is even or odd:6795
6795 is odd number

test case:5
input: 8367519
output:enter the number to whether it is even or odd:8367519
8367519 is odd number

*/
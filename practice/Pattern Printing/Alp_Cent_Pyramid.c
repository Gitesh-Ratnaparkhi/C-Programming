#include <stdio.h>
int main()
{
    int height;
    printf("Enter the height of the triangle : ");
    scanf("%d", &height);
    for (int i = 1; i <= height; i++)
    {
        int alp = 65;
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c", alp);
            alp++;
        }

        int a = alp - 1;
        for (int q = 1; q <= i - 1; q++)
        {
            a--;
            printf("%c", a);
        }
        printf("\n");
    }
    return 0;
}

// The entered height is 5
// main loop (i)--> first itration
// i = 1 and alp = 65
//                1] loop j --> first itration
//     j will run till height - 1; height is 5 and now i is 1 so j will run till 4 it will print 4 spaces
//     end of loop j
//                 2]loop k --> first itration
//     k will run till i now i is 1 so it will print A
//     now value of alp is increased by 1 now value of will become 66
//     end of loop k
//     a = alp -1 where alp is 66 - 1 = 65
//                 3]loop q -->  first itration
//     a-- ; now a is 65 so we will decrement a by 1 so the value will be 64
//     this loop will run till i - 1 initially value of i is 1 so 1 - 1 = 0
//     end of loop q
//     -----//----- end of first itration of main loop

// main loop (i)--> second itration
// i = 2 and alp = 65
//                1] loop j
//     j will run till height - 1; height is 5 and now i is 2 so j will run till 3 it will print 3 spaces
//     end of loop j
//                 2]loop k
//     k will run till i now i is 2 so it will print AB
//     now value of alp is increased by 1 now value of will become 67
//     end of loop k
//     a = alp -1 where alp is 67 - 1 = 66
//                 3]loop q
//     a-- ; now a is 65 so we will decrement a by 1 so the value will be 66 --> 65
//     this loop will run till i - 1 initially value of i is 2 so 2 - 1 = 1
//     this loop will print A so the final op after second itration of main loop will be ABA
//     end of loop q
//     -----//----- end of second itration of main loop

// main loop (i)--> third itration
// i = 3 and alp = 65
//                1] loop j
//     j will run till height - 1; height is 5 and now i is 3 so j will run till 2 it will print 2 spaces
//     end of loop j
//                 2]loop k
//     k will run till i now i is 3 so it will print ABC
//     now value of alp is increased by 1 now value of will become 68
//     end of loop k
//     a = alp -1 where alp is 68 - 1 = 67
//                 3]loop q
//     a-- ; now a is 67 so we will decrement a by 1 so the value will be 67 --> 66 --> 65
//     this loop will run till i - 1 initially value of i is 3 so 3 - 1 = 2  So it will print --> BA
//     this loop will print A so the final op after second itration of main loop will be  --> ABCBA
//     end of loop q
//     -----//----- end of third itration of main loop

// main loop (i)--> forth itration
// i = 4 and alp = 65
//                1] loop j
//     j will run till height - 1; height is 5 and now i is 4 so j will run till 1 it will print 1 spaces
//     end of loop j
//                 2]loop k
//     k will run till i now i is 4 so it will print ABCD
//     now value of alp is increased by 1 now value of will become 69
//     end of loop k
//     a = alp -1 where alp is 69 - 1 = 68
//                 3]loop q
//     a-- ; now a is 67 so we will decrement a by 1 so the value will be 68 --> 67 --> 66 --> 65
//     this loop will run till i - 1 initially value of i is 4 so 4 - 1 = 3  So it will print --> CBA
//     this loop will print A so the final op after second itration of main loop will be  --> ABCDCBA
//     end of loop q
//     -----//----- end of Forth itration of main loop
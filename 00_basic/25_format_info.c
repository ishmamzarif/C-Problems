//random problem to practice printf output formatting
#include <stdio.h>

int main (void)
{
    unsigned int roll1, roll2, roll3;
    float cgpa1, cgpa2, cgpa3;
    float b1, b2, b3;

    scanf("%u %f %f", &roll1, &cgpa1, &b1);
    scanf("%u %f %f", &roll2, &cgpa2, &b2);
    scanf("%u %f %f", &roll3, &cgpa3, &b3);

    printf("  ROLL\tCGPA\tBALANCE\t\n");
    printf("%5u    %.1f     %.2f\n", roll1, cgpa1, b1);
    printf("%5u    %.1f     %.2f\n", roll2, cgpa2, b2);
    printf("%5u    %.1f     %.2f\n", roll3, cgpa3, b3);

    return 0;
}
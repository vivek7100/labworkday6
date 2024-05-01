#include <stdio.h>

void main() {
    int angle1, angle2, angle3;

    printf("Enter the first angle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle: ");
    scanf("%d", &angle2);

    angle3 = 40 - (angle1 + angle2);

    printf("Third angle: %d\n", angle3);

}
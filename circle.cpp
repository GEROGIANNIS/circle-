#include <stdio.h>
#include <math.h>

void circle(int radius) {
    for (int y = radius; y >= -radius; y--) {
        for (int x = -radius; x <= radius; x++) {
            if (round(sqrt(x * x + y * y)) == radius) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int radius;
    int area;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("\n");
    if (radius <= 0) {
        printf("Please enter a valid positive radius.\n");
        return 1;
    }

    circle(radius);
    
    area = M_PI * radius * radius;

    printf("The area of this circle is : %d\n", area);
    return 0;
}

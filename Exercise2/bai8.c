#include <stdio.h>

int main() {
    float quiz, mid_term, final, GPA;
    printf("Enter the quiz score: ");
    scanf("%f", &quiz);
    printf("Enter the mid-term score: ");
    scanf("%f", &mid_term);
    printf("Enter the final score: ");
    scanf("%f", &final);

    GPA = 0.2*quiz + 0.3*mid_term + 0.5*final;
    printf("GPA: %.2f\n", GPA);

    if (GPA >= 8.5) {
        printf("Grade: A\n");
    } else if (GPA >= 7.0 && GPA < 8.5) {
        printf("Grade: B\n");
    } else if (GPA >= 5.5 && GPA < 7.0) {
        printf("Grade: C\n");
    } else if (GPA >= 4.0 && GPA < 5.5) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

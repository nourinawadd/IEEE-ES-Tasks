#include <stdio.h>
int main(){
    int phy, chem, bio, math, comp;
    float perc;
    char grade;

    printf("Input marks of the five subjects: ");
    scanf("%d %d %d %d %d", &phy, &chem, &bio, &math, &comp);

    perc = (phy + chem + bio + math + comp) / 5.0;

    if(perc >= 90)
        grade = 'A';
    else if(perc >= 80)
        grade = 'B';
    else if(perc >= 70)
        grade = 'C';
    else if(perc >= 60)
        grade = 'D';
    else if(perc >= 40)
        grade = 'E';
    else
        grade = 'F';

    printf("Percentage = %.2f\nGrade %c", perc, grade);
}

#include <stdio.h>
#include <string.h>

int main(){
    char name[100][100];
    int scores[100], num, i, total, top;
    float avg;

    printf("How many students are there?\n");
    scanf("%d", &num);

    for(i=0; i<num; i++){
        printf("\nEnter name of student no. %d: ", i+1);
        scanf("%s", &name[i]);
        printf("\nEnter score of %s: ", name[i]);
        scanf("%d", &scores[i]);
    }

    // Finding average score
    total = 0;
    for(i=0; i<num; i++){
        total += scores[i];
    }
    avg = (float)total/ num;
    printf("\nAverage of students = %.2f\n", avg);

    // Displaying below average students
    printf("\nBelow Average Students: \n");
    for(i=0; i<num; i++){
        if(scores[i] < avg){
            printf("%s: %d\n", name[i], scores[i]);
        }
    }

    // Displaying highest score
    top = scores[0];
    for(i=0; i<num; i++){
        if(scores[i] > top)
            top = scores[i];
    }

    printf("\nHighest Test Score: %d\n", top);

    // Congratulating top student
    for(i=0; i<num; i++){
        if(scores[i] == top){
            printf("\nTop Student: %s - Congratulations!\n", name[i]);
        }
    }

}

//week 3 Assignment 1:exam eligibility
//Author: DEBORAH MBATIA
//REG: BCS-05-0555/2026
//Date: 29/09/2026

#include<stdio.h>

int main(){
float attendance;
float average_marks;

printf("Enter attendance percentage:");
scanf("%f",&attendance);

printf("Enter average marks:");
scanf("%f",&average_marks);

//check eligibility: attendance >=75 AND marks >=40
if(attendance >=75&& average_marks >=40){
printf("\nEligible for final exams.\n");
}
else{
printf("\nNot eligible.\n");
}
return 0;
}

/*
** EPITECH PROJECT, 2023
** gpa
** File description:
** gpa
*/

#include "my.h"

int gpa_calcul(int ac, char **av)
{
    float total_credits = 0; float total_pts = 0; char grade;
    for (int i = 1; i < ac; i++) {
        grade = av[i][0];
        int credit = atoi(av[i] + 2); int pts = 0;
        if (grade == 'A')
            pts = 4;
        if (grade == 'B')
            pts = 3;
        if (grade == 'C')
            pts = 2;
        if (grade == 'D')
            pts = 1;
        if (grade == 'E')
            pts = 0;
        total_credits = total_credits + credit;
        total_pts = total_pts + pts * credit;
    }
    float total_gpa = total_pts / total_credits;
    printf("%.2f\n", total_gpa);
    return 0;
}

int main (int ac, char **av)
{
    if (ac == 1) {
        return 84;
    } else {
        gpa_calcul(ac, av);
    }
}

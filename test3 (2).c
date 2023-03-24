#include<stdio.h>

struct employee {
    int eno;
    char ename[20];
    float salary;
};

int main() {
    int n, i, max_index;
    printf("Enter Limit: ");
    scanf("%d", &n);

    struct employee emp[n];
    printf("Enter details for %d employees:\n", n);
    for(i=0; i<n; i++) {
        printf("Employee Number: ");
        scanf("%d", &emp[i].eno);
        printf("Name           : ");
        scanf("%s", emp[i].ename);
        printf("Salary         : ");
        scanf("%f", &emp[i].salary);
    }

    max_index = 0;
    for(i=1; i<n; i++) {
        if(emp[i].salary > emp[max_index].salary) {
            max_index = i;
        }
    }

    printf("Details of employee with highest salary:\n");
    printf("Employee Number: %d\n", emp[max_index].eno);
    printf("Name           : %s\n", emp[max_index].ename);
    printf("Salary         : %.2f\n", emp[max_index].salary);

    return 0;
}

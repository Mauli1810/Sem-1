#include <stdio.h>

#define MAX_EMPLOYEES 50
#define MAX_NAME_LENGTH 100


struct Employee {
    int empNo;
    char empName[MAX_NAME_LENGTH];
    float basicPay;
};

int main() {
    struct Employee employ[MAX_EMPLOYEES];
    struct Employee *ptr;
    int n;

    
    printf("Enter the number of employees (max %d): ", MAX_EMPLOYEES);
    scanf("%d", &n);

    
    if (n > MAX_EMPLOYEES) {
        printf("The number of employees exceeds the maximum limit of %d.\n", MAX_EMPLOYEES);
        return 1;
    }

    // Read employee details
    for (int i = 0; i < n; i++) {
        ptr = &employ[i];
        printf("Enter details for employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &ptr->empNo);

        printf("Employee Name: ");
        scanf(" %[^\n]", ptr->empName); 

        printf("Basic Pay: ");
        scanf("%f", &ptr->basicPay);
    }

    
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        ptr = &employ[i];
        printf("Employee %d:\n", i + 1);
        printf("Employee Number: %d\n", ptr->empNo);
        printf("Employee Name: %s\n", ptr->empName);
        printf("Basic Pay: %.2f\n", ptr->basicPay);
    }

    return 0;
}


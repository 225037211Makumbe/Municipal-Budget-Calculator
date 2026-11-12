
#include <stdio.h>

int main(void)
{
    // Declare variables
    double revenue;
    double expenses;
    double balance;

    // Extension variables
    int departments;
    double payroll;
    double procurement;
    double assets;

    // Display system title
    printf("\n============================================\n");
    printf("          MUNICIPAL BUDGET CALCULATOR\n");
    printf("============================================\n");

    // Get total revenue
    printf("\nEnter Total Revenue (N$): ");
    if (scanf("%lf", &revenue) != 1 || revenue < 0)
    {
        printf("Invalid revenue amount.\n");
        return 1;
    }

    // Get total expenses
    printf("Enter Total Expenses (N$): ");
    if (scanf("%lf", &expenses) != 1 || expenses < 0)
    {
        printf("Invalid expenses amount.\n");
        return 1;
    }

    // Calculate balance
    balance = revenue - expenses;

    // Extension exercise
    printf("\n============================================\n");
    printf("          EXTENSION EXERCISE\n");
    printf("============================================\n");

    printf("\nEnter Number of Departments: ");
    if (scanf("%d", &departments) != 1 || departments < 0)
    {
        printf("Invalid number of departments.\n");
        return 1;
    }

    printf("Enter Payroll Amount (N$): ");
    if (scanf("%lf", &payroll) != 1 || payroll < 0)
    {
        printf("Invalid payroll amount.\n");
        return 1;
    }

    printf("Enter Procurement Amount (N$): ");
    if (scanf("%lf", &procurement) != 1 || procurement < 0)
    {
        printf("Invalid procurement amount.\n");
        return 1;
    }

    printf("Enter Assets Value (N$): ");
    if (scanf("%lf", &assets) != 1 || assets < 0)
    {
        printf("Invalid assets value.\n");
        return 1;
    }

    // Display municipal financial summary
    printf("\n\n============================================\n");
    printf("       MUNICIPAL FINANCIAL SUMMARY\n");
    printf("============================================\n");

    printf("Total Revenue       : N$ %.2f\n", revenue);
    printf("Total Expenses     : N$ %.2f\n", expenses);
    printf("--------------------------------------------\n");
    printf("Balance             : N$ %.2f\n", balance);

    printf("\n============================================\n");
    printf("          DEPARTMENT SUMMARY\n");
    printf("============================================\n");

    printf("Number of Departments : %d\n", departments);
    printf("Payroll               : N$ %.2f\n", payroll);
    printf("Procurement           : N$ %.2f\n", procurement);
    printf("Assets Value          : N$ %.2f\n", assets);

    printf("============================================\n");
    printf("             END OF REPORT\n");
    printf("============================================\n");

    return 0;
}

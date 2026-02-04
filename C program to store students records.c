#include <stdio.h>

struct student {
    int id;
    char name[30];
    int sem;
    char branch[10];
    char dept[20];
};

int main() {
    // 1. Give the array a name 's'
    struct student s[5];
    int i;

    // --- INPUT LOOP ---
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &s[i].id);

        printf("Name: ");
        // 2. Add a space before % to consume the newline from previous input
        scanf(" %[^\n]", s[i].name);

        printf("Semester: ");
        scanf("%d", &s[i].sem);

        printf("Branch: ");
        scanf(" %s", s[i].branch); // Added space here too for safety

        printf("Department: ");
        scanf(" %[^\n]", s[i].dept); // Added space here too
    }

    // --- OUTPUT SECTION ---
    // Moved outside the input loop so the table prints only once at the end
    printf("\n------------------------------------------------------------------\n");
    // Corrected format specifiers in the header
    printf("%-10s %-20s %-10s %-10s %-20s\n", "ID", "Name", "Sem", "Branch", "Department");
    printf("------------------------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        // 3. Changed %s to %d for ID and Sem
        printf("%-10d %-20s %-10d %-10s %-20s\n",
               s[i].id, s[i].name, s[i].sem, s[i].branch, s[i].dept);
    }

    return 0;
}





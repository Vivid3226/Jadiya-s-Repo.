#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];  // Assuming each student's name has a maximum length of 50 characters

    // Input names from the user
    printf("Enter the names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Sort the names in alphabetical order using for loop.
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[50];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Display the sorted names
    printf("\nSorted Names:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d: %s\n", i + 1, names[i]);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char cmd[50];

    while (1) {
        printf("> ");
        fgets(cmd, sizeof(cmd), stdin);
        cmd[strcspn(cmd, "\n")] = 0;  // убираем \n

        if (strcmp(cmd, "word") == 0) {
            printf("hello\n");
        }
        else if (strcmp(cmd, "exit") == 0) {
            break;
        }
        else {
            printf("unknown command\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    printf("Hello world from PID %d\n", (int) getpid());
    int rc = fork();
    if (rc < 0) { // fork failed; exit
        fprintf(stderr, "fork failed :(\n");
        exit(1);
    } else if (rc == 0) { // we're the child (new process)
        printf("Hello world from child PID %d\n", (int) getpid());
    } else {
        printf("Hello world from PID %d, parent of PID %d\n", (int) getpid(), rc);
    }
    return 0;
}

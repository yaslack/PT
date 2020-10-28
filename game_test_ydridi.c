#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void usage(int argc, char *argv[]) {
  fprintf(stderr, "Usage: %s <testname> [<...>]\n", argv[0]);
  exit(EXIT_FAILURE);
}

int main(int argc, char *argv[]){
    if (argc == 1) usage(argc, argv);
    if (strcmp("dummy", argv[1]) == 0){
        fprintf(stderr, "Test \"%s\" finished: SUCCESS\n", argv[1]);
        exit(EXIT_SUCCESS);
    }
    else {
        fprintf(stderr, "Error: test \"%s\" not found!\n", argv[1]);
        exit(EXIT_FAILURE);
  }

}

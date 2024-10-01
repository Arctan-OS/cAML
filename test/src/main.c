#include <stdio.h>
#include <stdlib.h>

#include <caml/caml.h>

int main(int argc, char **argv) {
        printf("Hello World\n");
	printf("%d\n", init_caml(NULL));

        return 0;
}

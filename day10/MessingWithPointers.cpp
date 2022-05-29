#include <cstdio>
#include <cstdlib>

int main() {

    void *sebastian = malloc(sizeof(char *) * 5);
    void* ptr = &sebastian;
    void* ahana = &sebastian;

    *(int*)ptr = 40;
    ptr = (char*)ptr + sizeof(int);
    *(char*)ptr = 90;

    printf("%i \n",sizeof(sebastian));
    printf("%i \n", *(int*)ahana);
    printf("%p \n", (int*)ahana);
    ahana = (int*)ahana + 1;
    printf("%c\n", *(char*)ahana);
    printf("%p \n", (char*)ahana);
    ahana = (char*)ahana + 1;

    printf("%c \n", *(char*)ahana);
    printf("%p \n", (char*)ahana);
    free(sebastian);
}
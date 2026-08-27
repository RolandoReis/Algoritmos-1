#include <stdio.h>

int main(){

    int current, birth, age;

    age = current - birth;

    printf("Digite o ano atual e o seu ano de nascimento\n");
    scanf("%d, %d", &current, &birth);

    if (age < 16){
        printf("ABLE TO VOTE");

    } else {
        printf("UNABLE TO VOTE");
    }

return 0;




}

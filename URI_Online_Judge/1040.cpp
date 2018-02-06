#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float N1, N2, N3, N4;
    float final_media = 0;
    cin >> N1 >> N2 >> N3 >> N4;

    float media = (N1*2 + N2*3 + N3*4 + N4*1) / (2+3+4+1);
    printf("Media: %0.1f\n", media);

    if (media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0){
        printf("Aluno reprovado.\n");
    }
    else if (media >= 5.0 && media <= 6.9){
        printf("Aluno em exame.\n");

        float N5;
        cin >> N5;
        printf("Nota do exame: %0.1f\n", N5);

        final_media = (media + N5) / 2;
        if (final_media >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");

        printf("Media final: %0.1f\n", final_media);
    }
    return 0;
}

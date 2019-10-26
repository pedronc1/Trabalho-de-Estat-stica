#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void zeravet(int *vet, int quant){
    for(int n=0; n<quant; n++){
        vet[n]=0;
    }
}

void zeravetf(float *vet, int quant){
    for(int n=0; n<quant; n++){
        vet[n]=0;
    }
}

float calcmedia(float *numeros, int quant){

    float media=0;
    for(int n=0;n<quant;n++){
        media += numeros[n];
    }

    if(media!=0){media/=quant;}
    return media;
}

int contavet(int * vet, int aotodo, int tipo){
    int x=0;
    for(int n=0;n<aotodo;n++){
        if(vet[n]==tipo){x++;}
    }
    return x;
}
/*
void ordenavet(int *vetor, int tamanho){

    //int *organizado; organizado = (int *) malloc(tamanho*sizeof(int));
    int troca = 0, temporario = 0;
    for (int i=0;i<tamanho - 1; i++){
        troca=0;
        for (int j = 0;j<tamanho-1-i; j++){
            if (vetor[j]   > vetor[j+1]){

                temporario = vetor[j];
                vetor[j]   = vetor[j+1];
                vetor[j+1] = temporario;
                troca = 1;
            }
        }
        if (troca = 0){break;}
    }
}*/

void ordenavetf(float *vetor, int tamanho){
    float troca = 0, temporario = 0;
    for (int i=0;i<tamanho - 1; i++){
        troca=0;
        for (int j = 0;j<tamanho-1-i; j++){
            if (vetor[j]   > vetor[j+1]){

                temporario = vetor[j];
                vetor[j]   = vetor[j+1];
                vetor[j+1] = temporario;
                troca = 1;
            }
        }
        if (troca = 0){break;}
    }
}



void ordenacopiavet(int *desorganizado, int *organizado, int tamanho){

    //int *organizado; organizado = (int *) malloc(tamanho*sizeof(int));
    int troca = 0, temporario = 0;
    for (int n = 0; n < tamanho; n++){
        organizado[n] = desorganizado[n];
    }
    for (int i=0;i<tamanho - 1; i++){
        troca=0;
        for (int j = 0;j<tamanho-1-i; j++){
            if (organizado[j] > organizado[j+1]){
                temporario = organizado[j];
                organizado[j] = organizado[j+1];
                organizado[j+1] = temporario;
                troca = 1;
            }
        }
        if (troca = 0){break;}
    }
}

void copiavet(int *original, int *copia, int tamanho){
    for(int n = 0; n<tamanho; n++){
        copia[n]=original[n];
    }
}

void copiavetf(float *original, float *copia, int tamanho){
    for(int n = 0; n<tamanho; n++){
        copia[n]=original[n];
    }
}

void adequavet(int *especifico, int quantidade, int *geral, int *vetparametro, int parametro){
    int m=0;
    for(int n=0; n<30; n++){
        if(m>=quantidade){break;}
        if(vetparametro[n]==parametro){
            //printf("|geral: %02d|especifico: %02d|parametro: %02d|\n", geral[n], especifico[m], vetparametro[n]);
            especifico[m]=geral[n];
            //printf("|geral: %02d|especifico: %02d|parametro: %02d|\n", geral[n], especifico[m], vetparametro[n]);
            m++;
        }
    }
    //adequavet(horaspsicologia, tamanhocursopsicologia, horas, cursos, 1);

}


void adequavetf(float *especifico, int quantidade, float *geral, int *vetparametro, int parametro){
    int m=0;
    for(int n=0; n<30; n++){
        if(m>=quantidade){break;}
        if(vetparametro[n]==parametro){
            //printf("|geral: %02d|especifico: %02d|parametro: %02d|\n", geral[n], especifico[m], vetparametro[n]);
            especifico[m]=geral[n];
            //printf("|geral: %02d|especifico: %02d|parametro: %02d|\n", geral[n], especifico[m], vetparametro[n]);
            m++;
        }
    }
    //adequavet(horaspsicologia, tamanhocursopsicologia, horas, cursos, 1);

}



float calcmediana(float *numeros, int quant){
    int meio = quant / 2;
    float mediana = 0;
    if (quant % 2 == 0){
        mediana = ((numeros[meio] + numeros[meio+1])/2);
    }else{
        mediana = numeros[meio];
    }
    return mediana;
}

float amplitudef(float *vetor,int tamanho){
    float menor = 24;
    float maior = 0;
    for (int n = 0; n < tamanho; n++){
        if(vetor[n] < menor){menor = vetor[n];}
        if(vetor[n] > maior){maior = vetor[n];}
    }
    float amplitude = maior - menor;
    return amplitude;
}

float menor(float *vetor, int tamanho){
    float menor=100;
    for(int n=0; n<tamanho; n++){
        if(vetor[n] < menor){menor = vetor[n];}
    }
    return menor;
}


/*
void tabeladefrequencias(float *vetor, int classes, int quantidade){

    //cria um vetor pra armazenar as 4 frequencias
    //float *limsup;                      limsup                      = (float*) malloc((classes)  *sizeof(float)); zeravetf(limsup, classes);
    float *frequencia;                  frequencia                  = (float*) malloc((classes)  *sizeof(float)); zeravetf(frequencia, classes);
    float *frequenciaacumulada;         frequenciaacumulada         = (float*) malloc((classes)  *sizeof(float)); zeravetf(frequenciaacumulada, classes);
    float *frequenciarelativa;          frequenciarelativa          = (float*) malloc(classes      *sizeof(float)); zeravetf(frequenciarelativa, classes);
    float *frequenciaacumuladarelativa; frequenciaacumuladarelativa = (float*) malloc(classes      *sizeof(float)); zeravetf(frequenciaacumuladarelativa, classes);


    //cria o minimo, amplitude e define o tamanho de cada classe

    float menor = vetor[0], maior = vetor[0];
    for(int n=0; n<quantidade; n++){
        if(vetor[n]<menor){menor=vetor[n];}
        if(vetor[n]>maior){maior=vetor[n];}
        //printf("<%f\n>%f\n", menor, maior);
    }
    float amplitude=maior-menor;
    int tamanhodasclasses=ceil(amplitude/classes);




    //Loop das frequencias não-percentuais
    for(int n=0; n<=classes; n++){
        limsup[n]=(menor+((n+1)*tamanhodasclasses));
       // printf("LIMSUP %f\n",limsup[n]);
    }
    for(int n=0; n<classes; n++){ //corre as casas dos vetores pra armazenar mais coisas
        //if(menor>=)
        //if(menor>=razao[n]&&<razao[n]);
    }

    for(int n=0; n<classes;n++){
        if(n==0)        {frequenciaacumulada[n]=frequencia[n];}
        if(n>0)         {frequenciaacumulada[n]=frequencia[n]+frequenciaacumulada[n-1];}

    }




    //Loop das frequencias percentuais
    for(int n=0; n<classes; n++){ //corre as casas dos vetores pra armazenar mais coisas. Porém, como já tenho as quantidades no vetor frequencias, posso apenas olhar ele para o cálculo.
        //frequenciarelativa[n]=(100*frequencia[n])/frequencia[5];
       // printf("lalala\n");

    }




    ///Desenha a Tabela

    //Titulo
        printf(" _________________________________________________ \n");
        printf("|  Intervalo  |Freq....|Freq.Rel|Fre.Acum|Fr.Ac.Re|\n");
        printf("|-------------|--------|--------|--------|--------|\n");

    //Corpo
    for(int n=0;n<=classes;n++){
        printf("| [%4.1f,%4.1f) |% 7d |% 7.3f |% 7d |% 7.3f |\n",(menor+(n*tamanhodasclasses)),limsup[n],frequencia[n],frequenciarelativa[n],frequenciaacumulada[n],frequenciaacumuladarelativa[n]);

    }
        printf(" _____________________________________________ \n\n");









}*/

void tabeladefrequencias(float *vet, int classes, int quantidade){

    //cria vetor identico ao original, pra poder manipular.
    float *vetor; vetor  = (float*) malloc(quantidade*sizeof(float)); copiavetf(vet, vetor, quantidade);
    for(int n=0; n<quantidade; n++){
        //printf("[%f][%f]\n",vet[n],vetor[n]);
    }

    //cria um vetor pra armazenar as 4 frequencias
    //int *razao;                         razao                       = (int*)   malloc(classes*sizeof(int));   zeravet(razao, classes);

    float *frequencia;                  frequencia                  = (float*) malloc(classes*sizeof(float)); zeravetf(frequencia, classes);
    float *frequenciaacumulada;         frequenciaacumulada         = (float*) malloc(classes*sizeof(float)); zeravetf(frequenciaacumulada, classes);
    float *frequenciarelativa;          frequenciarelativa          = (float*) malloc(classes*sizeof(float)); zeravetf(frequenciarelativa, classes);
    float *frequenciaacumuladarelativa; frequenciaacumuladarelativa = (float*) malloc(classes*sizeof(float)); zeravetf(frequenciaacumuladarelativa, classes);


    //cria o minimo, amplitude e define o tamanho de cada classe

    float menor = vetor[0], maior = vetor[0];
    for(int n=0; n<quantidade; n++){
        if(vetor[n]<menor){menor=vetor[n];}
        if(vetor[n]>maior){maior=vetor[n];}
    }
    float amplitude=maior-menor;
    int tamanhodasclasses=ceil(amplitude/classes);
    if(tamanhodasclasses)

    //Loop das frequencias não-percentuais
    for(int n=0; n<classes; n++){ //corre as casas dos vetores pra armazenar mais coisas
        for(int m=0; m<quantidade; m++){ //Corre os números ao todo das horas de sono
            if(        vet[m]>=(menor+(n*tamanhodasclasses))     &&      vet[m]<(menor+(n+1)*tamanhodasclasses)   ){
                frequencia[n]++;

            }
        }
        if(n==0)        {frequenciaacumulada[n]=frequencia[n];}
        if(n>0)         {frequenciaacumulada[n]=frequencia[n]+frequenciaacumulada[n-1];}


    }
    //printf("ASDASDASD");




    //Loop das frequencias percentuais
    for(int n=0; n<classes; n++){ //corre as casas dos vetores pra armazenar mais coisas. Porém, como já tenho as quantidades no vetor frequencias, posso apenas olhar ele para o cálculo.
        frequenciarelativa[n]=frequencia[n]/quantidade;
        if(n==0)        {frequenciaacumuladarelativa[n]=frequenciarelativa[n];}
        if(n>0)         {frequenciaacumuladarelativa[n]=frequenciarelativa[n]+frequenciaacumuladarelativa[n-1];}
    }




    ///Desenha a Tabela

    //Titulo
        printf(" _____________________________________________ \n");
        printf("|Intervalo|Freq....|Freq.Rel|Fre.Acum|Fr.Ac.Re|\n");
        printf("|---------|--------|--------|--------|--------|\n");

    //Corpo
    for(int n=0;n<classes;n++){
        printf("| [%02.f,%02.f) |% 8.f|% 7.2f%%|% 8.f|% 7.2f%%|\n",(menor+(n*tamanhodasclasses)),(menor+(n+1)*tamanhodasclasses),frequencia[n],frequenciarelativa[n]*100,frequenciaacumulada[n],frequenciaacumuladarelativa[n]*100);

    }
        printf("|_____________________________________________|\n\n");
}



float desviopadrao(float *vetor, float media, int quantidade){
    float soma=0, variancia, desvio;

    for(int n=0; n<quantidade; n++){
        vetor[n]=vetor[n]-media;
        vetor[n]*=vetor[n];
    }

    for(int n=0; n<quantidade; n++){
        soma+=vetor[n];
        //printf("[SOMA: % .3f]", soma);
       // printf("\n");
    }
    variancia = soma/quantidade;
    desvio = sqrtf(variancia);
    return desvio;
}

int comparavetor(int *vetor1, int parametro1, int *vetor2, int parametro2, int quantidade){
    int quant=0;
    for(int n=0;n<quantidade;n++){
        //printf("Vet1 %d, Par1 %d, Vet2 %d, Par2 %d", vetor1[n], parametro1, vetor2[n], parametro2);
        if((vetor1[n]==parametro1)&&(vetor2[n]==parametro2)){
        //printf("       ++");
        quant++;
        }
        //printf("\n");
    }
    return quant;
}


int main(){

    /*info entrevista*/ int entrevistados=30; //int *horas, *tabaco, *curso;

    ///DADOS ENTREVISTADOS:
                     //01,02,03,04,05,06,07,08,09,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30
    float horas[30] = { 7, 6, 6, 8, 5, 5, 6, 8, 7, 8,10, 6,10, 8, 8, 4, 7, 5, 8, 7, 4, 4, 8, 6, 7, 6,10, 7, 5, 6};
    int  tabaco[30] = { 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2};
    int   curso[30] = { 1, 1, 1, 1, 1, 3, 1, 1, 1, 3, 4, 3, 1, 1, 1, 3, 4, 4, 3, 2, 3, 4, 2, 2, 2, 2, 2, 1, 4, 3};

    //printf("Digite a quantidade de entrevistados: "); scanf("%d", &entrevistados);

	//horas = (int *) malloc(entrevistados); tabaco = (int *) malloc(entrevistados); curso = (int *) malloc(entrevistados); /*cria vetores com os tamanhos adequados*/

    system("clear");system("cls");

    ///LOOP DE AQUISICAO DE DADOS
    /*for (int n = 0; n < entrevistados; n++){

        //Curso
        printf("\n  Qual o curso do entrevistado %d? \n   |Digite:\n   |1 para Psicologia\n   |2 para Procult\n   |3 para CC\n   |4 para enfermagem\n  Curso: ",n+1);
        while (curso[n] != 1 || curso[n] != 2 || curso[n] != 3 || curso[n] != 4){
            scanf("%d", &curso[n]);
            if (curso[n] == 1 || curso[n] == 2 || curso[n] == 3 || curso[n] == 4){break;}
            else{printf("\nNumero invalido. Digite somente 1, 2, 3 ou 4, de acordo com o curso: ");}
        }

        //Horas de Sono
        printf("\n  Quantas horas de sono o entrevistado %d costuma dormir a cada noite, durante a semana? \n  Horas: ",n+1);
        scanf("%d", &horas[n]);

        //Fuma?
        printf("\n  O entrevistado %d fuma tabaco? \n   |Digite:\n   |1 para Sim\n   |2 para Nao\n  Fuma: ",n+1);
        while (tabaco[n] != 1 || tabaco[n] != 2){
            scanf("%d", &tabaco[n]);
            if (tabaco[n] == 1 || tabaco[n] == 2){break;}
            else{printf("\nNumero invalido. Digite somente 1 ou 2: ");}
        }
    }*/


    ///Frequ�ncias
    int classes = 4;
    tabeladefrequencias(horas, classes, entrevistados);
    //amplitude(horas, entrevistados);





    ///Calcula o tamanho dos cursos, para iniciar os vetores de tamanhos
    int tamanhocursopsicologia = contavet(curso, entrevistados, 1); //printf("Alunos de Psicologia...........: %02d\n", tamanhocursopsicologia);
    int tamanhocursoprocult    = contavet(curso, entrevistados, 2); //printf("Alunos de Procult..............: %02d\n", tamanhocursoprocult);
    int tamanhocursocc         = contavet(curso, entrevistados, 3); //printf("Alunos de Ciencia da Computacao: %02d\n", tamanhocursocc);
    int tamanhocursoenfermagem = contavet(curso, entrevistados, 4); //printf("Alunos de Enfermagem...........: %02d\n", tamanhocursoenfermagem);
    //printf("\n");


    ///Cria vetores com o tamanho de cada um
    float *horaspsicologia;  horaspsicologia  = (float*) malloc(tamanhocursopsicologia*sizeof(float)); zeravetf(horaspsicologia,  tamanhocursopsicologia);
    float *horasprocult;     horasprocult     = (float*) malloc(tamanhocursoprocult   *sizeof(float)); zeravetf(horasprocult,     tamanhocursoprocult);
    float *horascc;          horascc          = (float*) malloc(tamanhocursocc        *sizeof(float)); zeravetf(horascc,          tamanhocursocc);
    float *horasenfermagem;  horasenfermagem  = (float*) malloc(tamanhocursoenfermagem*sizeof(float)); zeravetf(horasenfermagem,  tamanhocursoenfermagem);

    int *tabacopsicologia; tabacopsicologia = (int*) malloc(tamanhocursopsicologia*sizeof(int)); zeravet(tabacopsicologia, tamanhocursopsicologia);
    int *tabacoprocult;    tabacoprocult    = (int*) malloc(tamanhocursoprocult   *sizeof(int)); zeravet(tabacoprocult,    tamanhocursoprocult);
    int *tabacocc;         tabacocc         = (int*) malloc(tamanhocursocc        *sizeof(int)); zeravet(tabacocc,         tamanhocursocc);
    int *tabacoenfermagem; tabacoenfermagem = (int*) malloc(tamanhocursoenfermagem*sizeof(int)); zeravet(tabacoenfermagem, tamanhocursoenfermagem);


    ///Passa os valores adequados aos vetorizinhos
    adequavetf(horaspsicologia, tamanhocursopsicologia, horas, curso, 1);
    adequavetf(horasprocult   , tamanhocursoprocult,    horas, curso, 2);
    adequavetf(horascc        , tamanhocursocc,         horas, curso, 3);
    adequavetf(horasenfermagem, tamanhocursoenfermagem, horas, curso, 4);


    //system("clear");system("cls");

    ///RESULTADOS MEDIAS:
    float mediageral      = calcmedia(horas, entrevistados);
    float mediapsicologia = calcmedia(horaspsicologia, tamanhocursopsicologia);
    float mediaprocult    = calcmedia(horasprocult, tamanhocursoprocult);
    float mediacc         = calcmedia(horascc, tamanhocursocc);
    float mediaenfermagem = calcmedia(horasenfermagem, tamanhocursoenfermagem);

    printf(" Media de Horas de Sono Geral...: %.3f\n", mediageral);
    printf(" Media de Horas em Psicologia...: %.3f\n", mediapsicologia);
    printf(" Media de Horas em Procult......: %.3f\n", mediaprocult);
    printf(" Media de Horas em CC...........: %.3f\n", mediacc);
    printf(" Media de Horas em Enfermagem...: %.3f\n", mediaenfermagem);
    printf("\n");

    ///Organiza os vetorzinhos
    ordenavetf(horaspsicologia, tamanhocursopsicologia);
    ordenavetf(horasprocult   , tamanhocursoprocult);
    ordenavetf(horascc,         tamanhocursocc);
    ordenavetf(horasenfermagem, tamanhocursoenfermagem);

    ///RESULTADOS MEDIANAS

    printf(" Mediana de Horas de Sono Geral.: %.3f\n", calcmediana(horas, entrevistados));
    printf(" Mediana de Horas em Psicologia.: %.3f\n", calcmediana(horaspsicologia, tamanhocursopsicologia));
    printf(" Mediana de Horas em Procult....: %.3f\n", calcmediana(horasprocult   , tamanhocursoprocult));
    printf(" Mediana de Horas em CC.........: %.3f\n", calcmediana(horascc        , tamanhocursocc));
    printf(" Mediana de Horas em Enfermagem.: %.3f\n", calcmediana(horasenfermagem, tamanhocursoenfermagem));
    printf("\n");

    ///RESULTADOS DESVIO PADRAO

    float desviopadraogeral      = desviopadrao(horas,              mediageral,         entrevistados);
    float desviopadraopsicologia = desviopadrao(horaspsicologia,    mediapsicologia,    tamanhocursopsicologia);
    float desviopadraoprocult    = desviopadrao(horasprocult,       mediaprocult,       tamanhocursoprocult);
    float desviopadracc          = desviopadrao(horascc,            mediacc,            tamanhocursocc);
    float desviopadraoenfermagem = desviopadrao(horasenfermagem,    mediaprocult,       tamanhocursoenfermagem);

    printf(" Desvio Padrao de Sono Geral....: %.3f\n", desviopadraogeral);
    printf(" Desvio Padrao em Psicologia....: %.3f\n", desviopadraopsicologia);
    printf(" Desvio Padrao em Procult.......: %.3f\n", desviopadraoprocult);
    printf(" Desvio Padrao em CC............: %.3f\n", desviopadracc);
    printf(" Desvio Padrao em Enfermagem....: %.3f\n", desviopadraoenfermagem);
    printf("\n");

    ///SEGUNDA PARTE

    //crio as probabilidades SIM de fumar. nao é *-1


    float quantidadefumageral      = contavet(tabaco, entrevistados, 1);
    float quantidadefumapsicologia = comparavetor(curso, 1, tabaco, 1, entrevistados);
    float quantidadefumaprocult    = comparavetor(curso, 2, tabaco, 1, entrevistados);
    float quantidadefumacc         = comparavetor(curso, 3, tabaco, 1, entrevistados);
    float quantidadefumaenfermagem = comparavetor(curso, 4, tabaco, 1, entrevistados);

    float probabilidadefumargeral      = quantidadefumageral/entrevistados;
    float probabilidadepsicologiafumar = quantidadefumapsicologia/tamanhocursopsicologia;
    float probabilidadeprocultfumar    = quantidadefumaprocult/tamanhocursoprocult;
    float probabilidadeccfumar         = quantidadefumacc/tamanhocursocc;
    float probabilidadeenfermagemfumar = quantidadefumaenfermagem/tamanhocursoenfermagem;

    printf(" A probabilidade de fumar geral........: %.3f\n", probabilidadefumargeral);
    printf(" A probabilidade de fumar em Psicologia: %.3f\n", probabilidadepsicologiafumar);
    printf(" A probabilidade de fumar em Procult...: %.3f\n", probabilidadeprocultfumar);
    printf(" A probabilidade de fumar em CC........: %.3f\n", probabilidadeccfumar);
    printf(" A probabilidade de fumar em Enfermagem: %.3f\n", probabilidadeenfermagemfumar);

    printf("\n");

    system("pause");
    return 0;
















}

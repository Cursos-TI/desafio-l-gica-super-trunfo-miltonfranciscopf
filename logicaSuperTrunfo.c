#include <stdio.h>
float calcularDensidadePopulacional(int populacao,float area){
    return (populacao/area);
}
float calcularPIBPerCapita(float pib,int populacao){
    pib *= 1000000000; //transformar de fato em pib em bilhoes
    return (pib/populacao);
}
int compararPopulacao(int populacaoA,int populacaoB){
    //comparar duas populacoes 
    return (populacaoA>populacaoB);
}
int compararArea(float areaA,float areaB){
    return (areaA>areaB);
}
int compararPIB(float pibA,float pibB){
    return (pibA>pibB);
}
int compararNumeroDePontosTuristicos(int numeroPontosTuristicosA,int numeroPontosTuristicosB){
    return (numeroPontosTuristicosA>numeroPontosTuristicosB);
}
int comparardensidadePopulacional(float densidadePopulacionalA,float densidadePopulacionalB){
    //densidade populacional a menor vencera
    return(densidadePopulacionalA<densidadePopulacionalB);
}
int compararpibPerCapita(float pibPerCapitaA,float pibPerCapitaB){
    return (pibPerCapitaA>pibPerCapitaB);
}

int main(){
    int cartaVencedora=0; 
    //variaveis do menu
    int opcaoUm=0; 
    int opcaoDois=0; 
    int resultadoUm=0; 
    int resultadoDois=0; 

    //iniciando variaveis da primeira carta
    char estadoA; 
    char codigoCartaA[3]; 
    char nomeCidadeA[70];
    int populacaoA;
    float areaA;
    float pibA; 
    int numeroPontosTuristicosA;
    float densidadePopulacionalA;
    float pibPerCapitaA;
    //iniciando variaveis da segunda carta
    char estadoB; 
    char codigoCartaB[3]; 
    char nomeCidadeB[70];
    int populacaoB;
    float areaB;
    float pibB; 
    int numeroPontosTuristicosB;
    float densidadePopulacionalB;
    float pibPerCapitaB;

    printf("Desafio Cartas Super Trunfos\n");
    
    printf("--CADASTRAR PRIMEIRA CARTA--\n");
    //digitando a primeira carta
    printf("Digite o NOME do Estado da primeira carta:");
    scanf("%s",&estadoA);

    printf("Digite o CODIGO da primeira carta:");
    scanf("%s",&codigoCartaA);

    printf("Digite o NOME da Cidade da primeira carta:");
    scanf("%s",&nomeCidadeA);

    printf("Digite o NUMERO da Populacao da primeira carta:");
    scanf("%d",&populacaoA);

    printf("Digite a AREA da primeira carta:");
    scanf("%f",&areaA);

    printf("Digite o PIB da primeira carta:");
    scanf(" %f",&pibA);

    printf("Digite o NUMERO de Pontos Turisticos da primeira carta:");
    scanf("%d",&numeroPontosTuristicosA);
    
    densidadePopulacionalA=calcularDensidadePopulacional(populacaoA,areaA);
    pibPerCapitaA=calcularPIBPerCapita(pibA,populacaoA);

    printf("--CADASTRAR SEGUNDA CARTA--\n");
    //digitando a segunda carta
    printf("Digite o NOME do Estado da segunda carta:");
    scanf("%s",&estadoB);

    printf("Digite o CODIGO da segunda carta:");
    scanf("%s",&codigoCartaB);

    printf("Digite o NOME da Cidade da segunda carta:");
    scanf("%s",&nomeCidadeB);

    printf("Digite o NUMERO da Populacao da segunda carta:");
    scanf("%d",&populacaoB);

    printf("Digite a AREA da segunda carta:");
    scanf("%f",&areaB);

    printf("Digite o PIB da segunda carta:");
    scanf(" %f",&pibB);

    printf("Digite o NUMERO de Pontos Turisticos da segunda carta:");
    scanf("%d",&numeroPontosTuristicosB);
    
    densidadePopulacionalB=calcularDensidadePopulacional(populacaoB,areaB);
    pibPerCapitaB=calcularPIBPerCapita(pibB,populacaoB);

    printf("---------\n");
    printf("<MENU de COMPARACAO>\n");
    printf("1- Comparar a POPULACAO das duas cartas\n");
    printf("2- Comparar a AREA das duas cartas\n");
    printf("3- Comparar o PIB das duas cartas\n");
    printf("4- Comparar o NUMERO DE PONTOS TURISTICOS das duas cartas\n");
    printf("5- Comparar a DENSIDADE POPULACIONAL das duas cartas\n");
    printf("6- Comparar o PIB PER CAPITA das duas cartas\n");
    printf("\n");
    printf("Escolha o PRIMEIRO atributo a ser comparado:");
    scanf("%d",&opcaoUm);
    printf("Escolha o SEGUNDO atributo a ser comparado:");
    scanf("%d",&opcaoDois);
    if(opcaoUm==opcaoDois){
        printf("VC SELECIONOU O MESMO ATRIBUTO!\n");
        printf("Escolha OUTRO atributo a ser comparado:");
        scanf("%d",&opcaoDois);

        if(opcaoUm==opcaoDois){
        printf("VC SELECIONOU O MESMO ATRIBUTO!\n");
        printf("Escolha OUTRO atributo a ser comparado:");
        scanf("%d",&opcaoDois);
        }
    }

    //comparando o primeiro atributo
    switch (opcaoUm)
    {
    case 1:
        resultadoUm = compararPopulacao(populacaoA,populacaoB);
        break;
    case 2:
        resultadoUm = compararArea(areaA,areaB);
        break;
    case 3:
        resultadoUm = compararPIB(pibA,pibB);
        break;
    case 4:
        resultadoUm = compararNumeroDePontosTuristicos(numeroPontosTuristicosA,numeroPontosTuristicosB);
        break;
    case 5:
        resultadoUm = comparardensidadePopulacional(densidadePopulacionalA,densidadePopulacionalB);
        break;
    case 6:
        resultadoUm = compararpibPerCapita(pibPerCapitaA,pibPerCapitaB);
        break;
    default:
        printf("Numero nao listado.\n");
        break;
    }
    //comparando o segundo atributo
    switch (opcaoDois)
    {
    case 1:
        resultadoDois = compararPopulacao(populacaoA,populacaoB);
        break;
    case 2:
        resultadoDois = compararArea(areaA,areaB);
        break;
    case 3:
        resultadoDois = compararPIB(pibA,pibB);
        break;
    case 4:
        resultadoDois = compararNumeroDePontosTuristicos(numeroPontosTuristicosA,numeroPontosTuristicosB);
        break;
    case 5:
        resultadoDois = comparardensidadePopulacional(densidadePopulacionalA,densidadePopulacionalB);
        break;
    case 6:
        resultadoDois = compararpibPerCapita(pibPerCapitaA,pibPerCapitaB);
        break;
    default:
        printf("Numero nao listado.\n");
        break;
    }

    printf("---------\n");
    printf("Comparação de cartas\n");
    printf("---------\n");
    printf("IMPRIMINDO...\n");
    //imprimir
    printf("Carta 1\nEstado: %c\n",estadoA);
    printf("Codigo: %s\n",codigoCartaA);
    printf("Cidade: %s\n",nomeCidadeA);
    printf("Populacao: %d\n",populacaoA);
    printf("Area: %.2f\n",areaA);
    printf("PIB: %.2f\n",pibA);
    printf("Pontos Turisticos: %d\n",numeroPontosTuristicosA);
    printf("Densidade Populacional\n: %.2f",densidadePopulacionalA);
    printf("PIB per Capita: %.2f\n",pibPerCapitaA);
    printf("---------\n");
    printf("<Carta 2>\nEstado: %c\n",estadoB);
    printf("Codigo: %s\n",codigoCartaB);
    printf("Cidade: %s\n",nomeCidadeB);
    printf("Populacao: %d\n",populacaoB);
    printf("Area: %.2f\n",areaB);
    printf("PIB: %.2f\n",pibB);
    printf("Pontos Turisticos: %d\n",numeroPontosTuristicosB);
    printf("Densidade Populacional: %.2f\n",densidadePopulacionalB);
    printf("PIB per Capita: %.2f\n",pibPerCapitaB);
    printf("---------\n");
        
    //resultado de carta vencedora DA PRIMEIRA ESCOLHA
    resultadoUm ? cartaVencedora++ : cartaVencedora--;
    
    //resultado de carta vencedora DA SEGUNDA ESCOLHA
    resultadoDois ? cartaVencedora++ : cartaVencedora--;
   
    if(cartaVencedora==0){
        printf("CARTA VENDORA: EMPATE!\n");
    }else if(cartaVencedora>0){
        printf("CARTA VENDORA: Carta 1!\n");
    }else{
        printf("CARTA VENDORA: Carta 2!\n");
    }
    return 0;
}


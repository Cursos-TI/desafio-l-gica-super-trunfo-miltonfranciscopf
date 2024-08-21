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
int main(){
    //iniciando variaveis da primeira carta
    char estadoA;//uma letra
    char codigoCartaA[3];//letra + numero de dois digitos(ex. 01)
    char nomeCidadeA[70];
    int populacaoA;
    float areaA;
    float pibA; 
    int numeroPontosTuristicosA;
    float densidadePopulacionalA;
    float pibPerCapitaA;
    //iniciando variaveis da segunda carta
    char estadoB;//uma letra
    char codigoCartaB[3];//letra + numero de dois digitos(ex. 01)
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
    scanf("%s",codigoCartaA);

    printf("Digite o NOME da Cidade da primeira carta:");
    scanf("%s",nomeCidadeA);

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
    scanf("%s",codigoCartaB);

    printf("Digite o NOME da Cidade da segunda carta:");
    scanf("%s",nomeCidadeB);

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

    printf("Comparação de cartas\n");
    printf("---------\n");

    //imprimir  no padrão do TEMA 2 Inciante
    printf("Carta 1 - Estado: %c",estadoA);
    printf(", Codigo: %s",codigoCartaA);
    printf(", Cidade: %s",nomeCidadeA);
    printf(", Populacao: %d",populacaoA);
    printf(", Area: %.2f",areaA);
    printf(", PIB: %.2f",pibA);
    printf(", Pontos Turisticos: %d",numeroPontosTuristicosA);
    printf(", Densidade Populacional: %.2f",densidadePopulacionalA);
    printf(", PIB per Capita: %.2f\n",pibPerCapitaA);
    printf("---------\n");
    printf("Carta 2 - Estado: %c",estadoB);
    printf(", Codigo: %s",codigoCartaB);
    printf(", Cidade: %s",nomeCidadeB);
    printf(", Populacao: %d",populacaoB);
    printf(", Area: %.2f",areaB);
    printf(", PIB: %.2f",pibB);
    printf(", Pontos Turisticos: %d",numeroPontosTuristicosB);
    printf(", Densidade Populacional: %.2f",densidadePopulacionalB);
    printf(", PIB per Capita: %.2f\n",pibPerCapitaB);
    printf("---------\n");
   
    //comparacao de populacao (um dos atributos escolhidos no exercicio)
    if(compararPopulacao(populacaoA,populacaoB)){
        printf("Resultado: Carta 1 é a vencedora!\n");
    }else{
        printf("Resultado: Carta 2 é a vencedora!\n");
    }

    return 0;
}


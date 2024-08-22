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
    int opcao=0; // variavel de entrada de dados do menu
    int resultado=0; //resultado da carta vencedora
    int atributo; //numero do atributo no menu
    //iniciando variaveis da primeira carta
    char estadoA; //uma letra
    char codigoCartaA[3]; //letra + numero de dois digitos(ex. 01)
    char nomeCidadeA[70];
    int populacaoA;
    float areaA;
    float pibA; 
    int numeroPontosTuristicosA;
    float densidadePopulacionalA;
    float pibPerCapitaA;
    //iniciando variaveis da segunda carta
    char estadoB; //uma letra
    char codigoCartaB[3]; //letra + numero de dois digitos(ex. 01)
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

    printf("---------\n");
    printf("<MENU de COMPARACAO>\n");
    printf("1- Comparar a POPULACAO das duas cartas\n");
    printf("2- Comparar a AREA das duas cartas\n");
    printf("3- Comparar o PIB das duas cartas\n");
    printf("4- Comparar o NUMERO DE PONTOS TURISTICOS das duas cartas\n");
    printf("5- Comparar a DENSIDADE POPULACIONAL das duas cartas\n");
    printf("6- Comparar o PIB PER CAPITA das duas cartas\n");
    printf("\n");
    printf("Escolhar um numero de entrada no MENU(1-6):");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        resultado = compararPopulacao(populacaoA,populacaoB);
        atributo=1;
        break;
    case 2:
        resultado = compararArea(areaA,areaB);
        atributo=2;
        break;
    case 3:
        resultado = compararPIB(pibA,pibB);
        atributo=3;
        break;
    case 4:
        resultado = compararNumeroDePontosTuristicos(numeroPontosTuristicosA,numeroPontosTuristicosB);
        atributo=4;
        break;
    case 5:
        resultado = comparardensidadePopulacional(densidadePopulacionalA,densidadePopulacionalB);
        atributo=5;
        break;
    case 6:
        resultado = compararpibPerCapita(pibPerCapitaA,pibPerCapitaB);
        atributo=6;
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

    //imprimir qual o atributo comparado
    if(atributo==1){
        printf("Atributo da comparacao:POPULACAO\n");
    }else if(atributo==2){
        printf("Atributo da comparacao:AREA\n");
    }else if(atributo==3){
        printf("Atributo da comparacao:PIB\n");
    }else if(atributo==4){
        printf("Atributo da comparacao:NUMERO DE PONTOS TURISTICOS\n");
    }else if(atributo==5){
        printf("Atributo da comparacao:DENSIDADE POPULACIONAL\n");
    }else if(atributo==6){
        printf("Atributo da comparacao:PIB PER CAPITA\n");
    }else{
        printf("Nenhum atributo foi comparado.\n");
    }
    //resultado de carta vencedora
    //1 verdadeiro e 0 falso
    //1 primeira carta e 0 segunda carta
    if(resultado){
        printf("Resultado: Carta 1 é a vencedora!\n");
        
    }else{
        printf("Resultado: Carta 2 é a vencedora!\n");
    }
    

    return 0;
}


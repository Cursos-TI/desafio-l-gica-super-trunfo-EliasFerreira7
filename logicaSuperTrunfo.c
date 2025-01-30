#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

//Declaração global das variavéis

//Definição do atributos que possuem valor inteiro carta A
int city_code, number_off_tourist_attractions, points;

//Definição do atributos que possuem valor inteiro carta B
int city_codeB, number_off_tourist_attractionsB, pointsB;

//Definição do atributo nome, sendo ele do tivpo char como um vetor de 100 posições carta A
char city_name[100];

//Definição do atributo nome, sendo ele do tivpo char como um vetor de 100 posições Carta B
char city_nameB[100];

//Definição do atributos float carta A
float city_population, city_area, city_pib, population_density, pib_per_capita, super_power;

//Definição do atributos float carta B
float city_populationB, city_areaB, city_pibB, population_densityB, pib_per_capitaB, super_powerB;


//Funcao para obter os dados carta A
void get_dataA() {
    //Entrada do código da cidade
    printf("\nInforme o código da cidade: \n");
    scanf("%d", &city_code);

    //Entrada do numero de pontos turisticos
    printf("\nInforme o número de pontos turisticos: \n");
    scanf("%d", &number_off_tourist_attractions);

    //Entrada do nome da cidade
    printf("\nInforme o nome da cidade: \n");
    scanf("%s", city_name);

    //Entrada a poupulacao
    printf("\nInforme a poupulação: \n");
    scanf("%f", &city_population);

    //Entrada a area da cidade
    printf("\nInforme a area da cidade: \n");
    scanf("%f", &city_area);

    //Entrada o PIB
    printf("\nInforme o PIB: \n");
    scanf("%f", &city_pib);
}

//Funcao para obter os dados carta B
void get_dataB() {
    //Entrada do código da cidade
    printf("\nInforme o código da cidade: \n");
    scanf("%d", &city_codeB);

    //Entrada do numero de pontos turisticos
    printf("\nInforme o número de pontos turisticos: \n");
    scanf("%d", &number_off_tourist_attractionsB);

    //Entrada do nome da cidade
    printf("\nInforme o nome da cidade: \n");
    scanf("%s", city_nameB);

    //Entrada a poupulacao
    printf("\nInforme a poupulação: \n");
    scanf("%f", &city_populationB);

    //Entrada a area da cidade
    printf("\nInforme a area da cidade: \n");
    scanf("%f", &city_areaB);

    //Entrada o PIB
    printf("\nInforme o PIB: \n");
    scanf("%f", &city_pibB);
}

//Funcao para obter a densidade poupulacional da carta A
float obtain_population_density() {
    return city_population / city_area;
}

//Funcao para obter o pib per cabita da carta A
float obtain_pib_per_capita() {
    return city_pib / city_population;
}

//Funcao para obter a densidade poupulacional da carta B
float obtain_population_densityB() {
    return city_populationB / city_areaB;
}

//Funcao para obter o pib per cabita da carta B
float obtain_pib_per_capitaB() {
    return city_pibB / city_populationB;
}

//Funcao para calcular o super poder da carta A
float calculate_super_powerA() {
    return city_area + city_code + city_pib + city_population + 
    number_off_tourist_attractions + population_density + pib_per_capita;
}

//Funcao para calcular osuper poder da carta B
float calculate_super_powerB() {
    return city_areaB + city_codeB + city_pibB + city_populationB + 
    number_off_tourist_attractionsB + population_densityB + pib_per_capitaB;
}

//Funcao para comparar atributos e calcular quem será o vencedor e exibir os dados
void compare_attributes_and_show_winner() {

    //condicional para calcular o maior codigo
    if (city_code > city_codeB) {
        points++;
    } else {
        pointsB++;
    }
    printf("\n\nO valor do codigo da carta A é : %d\n", city_code);
    printf("\n\nO valor do codigo da carta B é : %d\n", city_codeB);

    //condicional para calcular o maior PIB
    if (city_pib > city_pibB) {
        points++;
    } else {
        pointsB++;
    }
    printf("\n\nO valor do pib da carta A é : %.2f\n", city_pib);
    printf("\n\nO valor do PIB da carta B é : %.2f\n", city_pibB);

    //condicional para calcular a maior area
    if (city_area > city_areaB) {
        points++;
    } else {
        pointsB++;
    }
    printf("\n\nO valor da area da carta A é : %.2f\n", city_area);
    printf("\n\nO valor da area da carta B é : %.2f\n", city_areaB);

    //condicional para calcular o maior numero de atracoes
    if (number_off_tourist_attractions > number_off_tourist_attractionsB) {
        points++;
    } else {
        pointsB++;
    }
    printf("\n\nO numero de atracoes turiticas da carta A é : %d\n", number_off_tourist_attractions);
    printf("\n\nO numero de atracoes turiticas da carta B é : %d\n", number_off_tourist_attractionsB);

    //condicional para calcular a maior poupulacao
    if (city_population > city_populationB) {
        points++;
    } else {
        pointsB++;
    }
    printf("\n\nO valor da poupulacao da carta A é : %.2f\n", city_population);
    printf("\n\nO valor da poupulacao da carta B é : %.2f\n", city_populationB);

    //condicional para calcular o maior pib per capita
    if (pib_per_capita > pib_per_capitaB) {
        points++;
    } else {
        pointsB++;
    }
    printf("\n\nO valor do PIB per capita da carta A é : %.2f\n", pib_per_capita);
    printf("\n\nO valor do PIB per capita da carta B é : %.2f\n", pib_per_capitaB);

    //condicional para calcular a menor densidade poupulacional
    if (population_density < population_densityB) {
        points++;
    } else {
        pointsB++;
    }
    printf("\n\nO valor da densidade poupulacional da carta A é : %.2f\n", population_density);
    printf("\n\nO valor da densidade poupulacional da carta B é : %.2f\n", population_densityB);

    //condicional para calcular o maior super poder
    if (super_power > super_powerB) {
        points++;
    } else {
        pointsB++;
    }
    printf("\n\nO valor do super poder da carta A é : %.2f\n", super_power);
    printf("\n\nO valor do super poder da carta B é : %.2f\n", super_powerB);

    //condiciona para exebir o vencedor
    if (points > pointsB) {
        printf("\n\nO vencedor é a cidade: %s", city_name);
    } else {
        printf("\n\nO vencedor é a cidade: %s", city_nameB);
    }
}


//VRF
void show_data() {
    //Exibição do codigo da cidade
    printf("\n\nO código da cidade é : %d\n", city_code);

    //Exibição do numero de atracoes turisticas
    printf("\nO numero de pontos turisticos da cidade é : %d\n", number_off_tourist_attractions);

    //Exibição do nome da cidade
    printf("\nO nome da cidade é : %s\n", city_name);

    //Exibição da poupulacao da cidade (aproximacao de 2 casas decimais)
    printf("\nA poupulação da cidade é : %.2f\n", city_population);

    //Exibição da area da cidade (aproximacao de 2 casas decimais)
    printf("\nA area da cidade é : %.2f\n", city_area);

    //Exibição do PIB da cidade (aproximacao de 2 casas decimais)
    printf("\nO PIB da cidade é : %.2f\n", city_pib);

    //Exibição da densidade poupulacional da cidade (aproximacao de 2 casas decimais)
    printf("\nA densidade poupulacional da cidade é : %.2f\n", population_density);

    //Exibição do pib per cpita da cidade (aproximacao de 2 casas decimais)
    printf("\nO PIB per capita da cidade é : %.2f\n\n", pib_per_capita);
}

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    //Invocacao do metodo para obter os dados
    get_dataA();

    get_dataB();

    //Invocacoes dos calculos de densidade poupulacional
    population_density = obtain_population_density();

    population_densityB = obtain_population_densityB();

    //Invocacoes do metod para calcular o pib per apita
    pib_per_capita = obtain_pib_per_capita();

    pib_per_capitaB = obtain_pib_per_capitaB();

    //Invocacoes do metodo para obter o super poder

    super_power = calculate_super_powerA();

    super_powerB = calculate_super_powerB();

    //Invocacao do metodo para calculos e exebicao da comparacao entre as cartas e do vencedor
    compare_attributes_and_show_winner();

    return 0;
}

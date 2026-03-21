#include <stdio.h> 
  //===CAIXA DE FERRAMENTAS(PRINTF,SCANF)Standard Input Output"(Entrada e Saída Padrão)



int main() {
  //===ENTRADA: Caixas de Variaveis "RESERVA"(CHAR,INT,FLOAT)
  
 
  //===\\PASSO1:abrir as gavetas (declarar as variáveis).

    char estado1;                               //EX: "A"
    char codigo1[4];                             //EX: "A1"
    char nome_da_cidade1[50];               //EX: "são paulo"
    int populacao1;                         //EX: 1000000
    float area1;                            //EX: 1221.11 KM²
    float pib1;                             //EX: 811.38 bilhões de reais
    int quantidade_de_pontos_turisticos1;   //30


  // === PROCESSO: CAIXA DE ENTRADA DE DADOS (SCANF "&"") 


  //especificadores de formato/operador de endereço

  // ===%s (String/Texto)                 //EX:VAI LER TEXTO? Use %s (sem &) CIDADE
  // ===%d (Decimal/Inteiro)              //EX:VAI LER NÚMERO INTEIRO? Use %d (com &).POPULACAO1
  // ===%f	Float (Decimal                //EX:VAI LER NÚMERO COM VÍRGULA? Use %f (com &).Na Área e no PIB 
  // ===%c	Char (Letra)                  //EX:VAI LER UMA LETRA SÓ? Use %c (com &).No Estado "A"

  
  // ===\\PASSO2:Um printf para perguntar 
  // ===\\PASSO3:Um scanf (&) para guardar a resposta na gaveta

    printf("Qual_o_nome_Estado?\n");
    scanf(" %c ", &estado1);

    printf("Qual_o_codigo?\n");
    scanf(" %s ", codigo1);


    printf("Qual o Nome da Cidade?\n");
    scanf(" %s ", &nome_da_cidade1);

    printf("Qual_a_Populacao?\n"); 
    scanf(" %d ", &populacao1);

    printf("Qual_a_Area_Real?\n");
    scanf(" %f", &area1);

    printf("Qual_o_Pib?\n");
    scanf("%f"  , &pib1);

    printf("Qual_a_Quantidade_de_Ponto_Turistico?\n");
    scanf(" %d", &quantidade_de_pontos_turisticos1);

  





  // === PROCESSO: CAIXA SAÍDA DE DADOS (PRINTF %d,%f,%c) 
  // ===Aqui é onde você exibe o resultado final organizado



  // === SAÍDA FINALIZADO COM SUCESSO/ PROGRAMA EXECUTADO/
  // === Sinal de Sucesso". 
return 0;
} 

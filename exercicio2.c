#include <stdio.h>

float funcao_reajuste(float valor_aluguel, float percentual_reajuste) {
  float valor_aluguel_inicial = valor_aluguel;
  float valor_reajuste = valor_aluguel * (percentual_reajuste / 100);
  float valor_aluguel_final = valor_aluguel + valor_reajuste;

  printf("\nAluguel atual: R$%.2f", valor_aluguel_inicial);
  printf("\nPercentual de reajuste: %.1f por cento", percentual_reajuste);
  printf("\nValor do reajuste: R$%.2f * %.1f / 100 = R$%.2f",
         valor_aluguel_inicial, percentual_reajuste, valor_reajuste);
  printf("\nValor do aluguel Atualizado: R$%.2f + R$%.2f = R$%.2f",
         valor_aluguel_inicial, valor_reajuste, valor_aluguel_final);

  return valor_aluguel_final;
}

int main() {
  float valor_aluguel;
  float percentual_reajuste;

  printf("\nInsira o valor do aluguel: ");
  scanf("%f", &valor_aluguel);
  printf("\nInsira o percentual de reajuste anual: ");
  scanf("%f", &percentual_reajuste);

  valor_aluguel = funcao_reajuste(valor_aluguel, percentual_reajuste);

  printf("\n----------------------------\n");
  printf("\nValor do aluguel: R$%.2f", valor_aluguel);

  return 0;
}
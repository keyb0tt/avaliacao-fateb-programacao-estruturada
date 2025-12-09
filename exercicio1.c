#include <stdio.h>
float funcao_saldo(float saldo, float valor_operacao, int tipo_operacao) {
  float taxa = 0.02 * valor_operacao;
  float saldo_inicial = saldo;

  printf("\nSaldo Inicial: R$%.2f", saldo);
  printf("\nValor da taxa a ser cobrada: R$%.2f", taxa);

  if (tipo_operacao == 1) {
    printf("\nOperação: (1-Viagem)");
    saldo -= valor_operacao - taxa;
    printf("\nAtualização do saldo: R$%.2f - R$%.2f - R$%.2f", saldo_inicial,
           valor_operacao, taxa);
  } else if (tipo_operacao == 2) {
    saldo += valor_operacao - taxa;
    printf("\nOperação: (2-Recarga)");
    printf("\nAtualização do saldo: R$%.2f + R$%.2f - R$%.2f", saldo_inicial,
           valor_operacao, taxa);
  }

  printf("\nSaldo atualizado: R$%.2f", saldo);
  printf("\nValor da taxa: R$%.2f\n", taxa);

  return saldo;
}

int main() {
  int tipo_operacao;
  float saldo;
  float valor_operacao;

  printf("\nInsira o saldo de créditos atual: ");
  scanf("%f", &saldo);
  printf("\nInsira o tipo da operação\n1. Viagem\n2. Recarga\nTipo: ");
  scanf("%d", &tipo_operacao);

  if (tipo_operacao != 1 && tipo_operacao != 2) {
    printf("\nOperação Inválida!\nEncerrando...\n");
    return 0;
  }

  printf("\nInsira o valor da operação: ");
  scanf("%f", &valor_operacao);

  saldo = funcao_saldo(saldo, valor_operacao, tipo_operacao);

  return 0;
}
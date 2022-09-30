#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL,"Portuguese");  
  float horapaga, horasem;
  float desconto; 
  
  printf("<<< CÁLCULO SALÁRIO PROGRAMADOR >>>\n\n"); 
  
  printf("Valor pago por hora trabalhada: R$");
  scanf("%f", &horapaga);
  
  printf("Quantas horas trabalhadas na semana: ");
  scanf("%f", &horasem);
  
  printf("Entre com valor do desconto do INSS: ");
  scanf("%f", &desconto);
  float salariob =  (horapaga * horasem) * 4.5;
  float salariol = salariob - (salariob * desconto / 100);
  
  printf("\nSeu salário bruto é R$%.2f\n\nJá seu salário liquido descontando o INSS será de %.2f", salariob, salariol);  
  

  return 0;
} 
  
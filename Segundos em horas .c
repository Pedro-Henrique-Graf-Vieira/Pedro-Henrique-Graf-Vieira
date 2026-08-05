float segundos;
float horas = 0.0002777778;
float minutos = 0.01666667;

int main(){
    printf("Digite o numero de segundos: ");
    scanf("%f", &segundos);
    
    float resultado_horas = segundos * horas;
    float resultado_minutos = segundos * minutos;
    
    printf("O resultado em horas e: %.2f\n", resultado_horas);
    printf("O resultado em minutos e: %.2f\n", resultado_minutos);
    printf("O resultado em segundos e: %.2f\n", segundos);
     
  return 0;
}
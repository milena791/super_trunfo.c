int main() {
    char codigo1[3], codigo2[3];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
   
    printf("Digite o código da primeira cidade (ex: A1): ");
    scanf("%2s", codigo1);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
 
    printf("\nDigite o código da segunda cidade (ex: B2): ");
    scanf("%2s", codigo2);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\nCartas cadastradas:\n");
    printf("\nCidade 1:\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    
    printf("\nCidade 2:\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    
    return 0;
}

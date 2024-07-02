void bubbleSort(int vet[], int tam){
    int i,j, temp;
    for(i=tam-1; i>0; i--){
        for(j=0; j < i; j++)
            if( vet[j] > vet[j+1] ){
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        printf("Iteracao %d: ", tam-i);
        for(int k=0; k<tam; k++){
            printf("%d ", vet[k]);
        }
        printf("\n");
    }
}

int main(){
    int vet[] = {5, 3, 2, 4, 7, 1, 0, 6};
    int tam = 8;
    printf("Vetor original: ");
    for(int i=0; i<tam; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
    bubbleSort(vet, tam);
    printf("Vetor ordenado: ");
    for(int i=0; i<tam; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}

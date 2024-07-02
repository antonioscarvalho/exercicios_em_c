void insertionSort(int list[], int n)
{
    int i, j;
    int next;
    for (i=1; i<n; i++) {
        next= list[i];
        for (j=i-1; j>=0&&next<list[j];j--)
            list[j+1] = list[j];
        list[j+1] = next;
        printf("Iteracao %d: ", i);
        for(int k=0; k<n; k++){
            printf("%d ", list[k]);
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
    insertionSort(vet, tam);
    printf("Vetor ordenado: ");
    for(int i=0; i<tam; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
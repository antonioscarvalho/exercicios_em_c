// Recebe vetor v[p..r] com p <= r. Rearranja
// os elementos do vetor e devolve j em p..r
// tal que v[p..j-1] <= v[j] < v[j+1..r].

int separa (int v[], int p, int r) {
    int c = v[r]; // pivô
    int t, j = p;
    for (int k = p; k < r; ++k)
        if (v[k] <= c) {
            printf("v[%d] = %d <= %d\n", k, v[k], c);
            t = v[j], v[j] = v[k], v[k] = t;
            ++j;
        }
    t = v[j], v[j] = v[r], v[r] = t;
    return j;
}

// Recebe vetor v[p..r] com p <= r. Rearranja
// os elementos do vetor em ordem crescente.
void quickSort (int v[], int p, int r) {
    if (p < r) {
        int j = separa (v, p, r);
        quickSort (v, p, j-1);
        quickSort (v, j+1, r);
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
    quickSort(vet, 0, tam-1);
    printf("Vetor ordenado: ");
    for(int i=0; i<tam; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
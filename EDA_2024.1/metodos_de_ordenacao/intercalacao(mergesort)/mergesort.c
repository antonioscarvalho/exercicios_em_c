// A função recebe vetores crescentes v[p..q-1] e v[q..r-1]
// e rearranja v[p..r-1] em ordem crescente.
void intercala (int p, int q, int r, int v[]){
    int *w;
    w = malloc ((r-p) * sizeof (int));
    int i = p, j = q;
    int k = 0;

    while (i < q && j < r) {
    if (v[i] <= v[j]) w[k++] = v[i++];
    else w[k++] = v[j++];
    }
    while (i < q) w[k++] = v[i++];
    while (j < r) w[k++] = v[j++];
    for (i = p; i < r; ++i) v[i] = w[i-p];
    free (w);
}


// A função mergesort rearranja o vetor
// v[p..r-1] em ordem crescente.
void mergesort (int p, int r, int v[]){
    if (p < r-1) {
        int q = (p + r)/2;
        mergesort (p, q, v);
        mergesort (q, r, v);
        for (int i = 0; i < 8; i++) {
            printf("%d ", v[i]);
        }
        printf("\n");
        intercala (p, q, r, v);
    }   
}

int main() {
    int v[8] = {5, 2, 4, 6, 1, 3, 0, 7};
    mergesort(0, 8, v);
    for (int i = 0; i < 8; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}


// Selecionando um item minimo.
int selmin(int v[], int i, int n) {
  int j, k = i;
  for (j = i + 1; j < n; j++)
    if (v[k] > v[j])
      k = j;
  return k;
}

// Exemplo 5.35. Ordenação por seleção.
void selecao(int v[], int n) {
  int i, k, x;
  for (i = 0; i < n - 1; i++) {
    k = selmin(v, i, n);
    x = v[i];
    v[i] = v[k];
    v[k] = x;
  }
}

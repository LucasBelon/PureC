// Selecionando um item minimo.
int selmin(int v[], int i, int n) {
  int j, k = i;
  for (j = i + 1; j < n; j++)
    if (v[k] > v[j])
      k = j;
  return k;
}

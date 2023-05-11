# include <stdio.h>
# include <stdlib.h>

# ifndef GENERIC_FUNCTIONS_H
# define GENERIC_FUNCTIONS_H
# ifdef Int_Ver
typedef int generic_Type;
# define prefix int
# endif

# ifdef Float_Ver
typedef float generic_Type;
# define prefix float
# endif

# ifdef Long_Ver
typedef long generic_Type;
# define prefix long
# endif

# ifdef Double_Ver
typedef double generic_Type;
# define prefix double
# endif

# ifdef LDouble_Ver
typedef long double generic_Type;
# define prefix long_double
# endif

# ifndef Int_Ver
# else
# ifndef Float_Ver
# else
# ifndef Long_Ver
# else
# ifndef Double_Ver
# else
# ifndef LDouble_Ver
typedef int generic_Type;
# define prefix int
# endif
# endif
# endif
# endif
# endif

typedef struct {
    int n_linhas;
    int n_colunas;
    generic_Type * array;
} prefix_array;

#endif // !GENERIC_FUNCTIONS_H

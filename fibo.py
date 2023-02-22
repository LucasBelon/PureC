def main():
    a = 1
    b = 1
    n = 1474
    n_copia = n

    print("Fibo n°1: %.0Lf\n", a)
    for n in range(n, 0, -1):
        print(f"Fibo n°{(n_copia-n+2)}: {a}")
        temp = a
        a += b
        b = temp

    print(f"O {n_copia+2}-esimo termo da \n\
    \rsequencia de fibonacci eh:\n\
    \rFibo:{a} \n")


if __name__ == "__main__":
    main()

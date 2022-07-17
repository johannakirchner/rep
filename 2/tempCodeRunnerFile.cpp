       fib1 = fib2;
        fib2 = fibnext;
        fibnext = fib1 + fib2;

        if(num == fibnext) {
            printf("\n%d pertence a sequencia de fibonacci", num);
            return 0;
        }
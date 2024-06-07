void ft_print_comb(void);

void ft_print_comb(void) {
    char comb1 = '0';
    char comb2;
    char comb3;

        while (comb1 <= '7') {
                comb2 = comb1 + 1;
    while(comb2 <= '8') {
      comb3 = comb2 + 1;
                  while(comb3 <= '9') {

                  write(1, &comb1, 1);
                  write(1, &comb2, 1);
                  write(1, &comb3, 1);

                        if (comb1 != '7' || comb2 != '8' || comb3 != '9') {
        write(1, ", ", 2);
      }
                        comb3++;
                  }
                comb2++;
          }
        comb1++;
        }
}

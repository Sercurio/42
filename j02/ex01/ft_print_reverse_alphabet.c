#include <unistd.h>

void ft_putchar (char);
void ft_print_alphabet (void);

int
main (void)
{
  ft_print_alphabet ();
  return 0;
}

void
ft_print_alphabet (void)
{
  int lettre = 'z';
  while (lettre >= 'a')
    ft_putchar (lettre--);
}

void
ft_putchar (char c)
{
  write (1, &c, 1);
}

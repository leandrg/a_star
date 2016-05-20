/*
** utils.c for utils in /Users/leandr_g/Documents/Shared folder/dante/utils/
**
** Made by Gaëtan Léandre
** Login   <leandr_g@epitech.eu>
**
** Started on  Wed May 18 02:08:39 2016 Gaëtan Léandre
** Last update Fri May 20 02:01:31 2016 Gaëtan Léandre
*/

#include		"astar.h"

int			my_strlen(char *str)
{
  int			i;

  i = 0;
  while (str[i++]);
  return (i);
}

void			my_putchar(char c, int fd)
{
  write(fd, &c, 1);
}

int			my_putstr(char *str, int fd)
{
  int			i;

  i = 0;
  while (str[i])
    my_putchar(str[i++], fd);
  return (0);
}

int			my_getnbr(char *str)
{
  int			i;
  int			sign;
  int			nbr;

  i = 0;
  nbr = 0;
  sign = 1;
  while (str[i] && (str[i] == '+' || str[i] == '-'))
    {
      if (str[i] == '-')
	sign *= -1;
      i++;
    }
  while (str[i])
    {
      if (str[i] > '9' || str[i] < '0')
	return (-1);
      nbr *= 10;
      nbr += str[i] - 48;
      i++;
    }
  return (nbr * sign);
}

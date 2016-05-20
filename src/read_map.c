/*
** read_map.c for read_map in /Users/leandr_g/Documents/Shared folder/dante/utils/
**
** Made by Gaëtan Léandre
** Login   <leandr_g@epitech.eu>
**
** Started on  Thu May 19 17:28:54 2016 Gaëtan Léandre
** Last update Fri May 20 01:37:41 2016 Gaëtan Léandre
*/

#include		"astar.h"

static char		*my_strcat(char *a, char *b, int fre)
{
  char			*str;
  int			i;
  int			j;

  i = -1;
  if ((str = malloc(my_strlen(a) + my_strlen(b) + 1)) == NULL)
    return (NULL);
  while (a[++i])
    str[i] = a[i];
  j = -1;
  while (b[++j])
    str[i++] = b[j];
  str[i] = '\0';
  if (fre == 1)
    free(a);
  return (str);
}

static char		*read_inf(int fd)
{
  char			buffer[1025];
  char			*str;
  int			pos;

  str = my_strcat("", "", 0);
  while ((pos = read(fd, buffer, 1024)) > 0)
    {
      buffer[pos] = '\0';
      if ((str = my_strcat(str, buffer, 1)) == NULL)
	return (NULL);
    }
  if (pos < 0)
    {
      free(str);
      return (NULL);
    }
  return (str);
}

static int		cpy_map(char *str, t_read *laby)
{
  int			i;
  int			j;

  if ((laby->lab = malloc(laby->size.x * laby->size.y + 1)) == NULL)
    return (0);
  i = 0;
  j = 0;
  while (str[i])
    {
      if (str[i] == '\n')
	i++;
      else
	laby->lab[j++] = str[i++];
    }
  return (1);
}

static int		parse_map(char *str, t_read *laby)
{
  int			i;
  int			test;

  laby->size.x = 0;
  while (str[laby->size.x] && str[laby->size.x] != '\n')
    laby->size.x = laby->size.x + 1;
  i = laby->size.x;
  laby->size.y = 0;
  while (str[i])
    {
      if (str[i] == '\n')
	i++;
      laby->size.y = laby->size.y + 1;
      test = 0;
      while (str[i] && str[i] != '\n' && (str[i] == 'X' || str[i] == '*'))
	{
	  i++;
	  test++;
	}
      if (test != laby->size.x && (test != 0  && str[i]))
	{
	  return (0);
	}
    }
  return (cpy_map(str, laby));
}

int			read_map(char *path, t_read *lab)
{
  int			fd;
  char			*str;

  if ((fd = open(path, O_RDONLY)) < 0 || (str = read_inf(fd)) == NULL)
    return (my_putstr("Erreur dans l'ouverture ou la lecture du fichier\n", 2));
  else if (parse_map(str, lab) == 0)
    {
      free(str);
      return (my_putstr("Format de carte invalide\n", 2));
    }
  free(str);
  close(fd);
  return (1);
}

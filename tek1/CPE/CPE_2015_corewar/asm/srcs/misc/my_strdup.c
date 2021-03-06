/*
** my_strdup.c for my_strdup in /home/keyrise/Work/Repositories/Epitech/PSU/PSU_2015_tetris/srcs/misc
** 
** Made by Anas Buyumad
** Login   <anas.buyumad@epitech.eu>
** 
** Started on  Thu Feb 25 18:41:13 2016 Anas Buyumad
** Last update Mon Mar 21 11:55:26 2016 Gauthier Cler
*/

#include	<stdlib.h>
#include	"asm.h"

char		*my_strdup(char *str)
{
  char		*res;
  int		i;

  i = 0;
  if ((res = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
    return (NULL);
  while (str[i])
    {
      res[i] = str[i];
      i++;
    }
  res[i] = '\0';
  return (res);
}


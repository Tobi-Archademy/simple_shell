#include "shell.h"

/**
 * check_match - checks if a character matches any in a string
 * @c: character to check
 * @str: string to check
 *
 * Return: 1 if match, 0 if not
 */
unsigned int check_match(char c, const char *str)
{
<<<<<<< HEAD
unsigned int i;
for (i = 0; str[i] != '\0'; i++)
{
if (c == str[i])
return (1);
}
return (0);
=======
  unsigned int i;

  for (i = 0; str[i] != '\0'; i++)
    {
      if (c == str[i])
	return (1);
    }
  return (0);
>>>>>>> 49df85aab2257b88e08acd7f582f07942e42b75f
}

/**
 * new_strtok - custom strtok
 * @str: string to tokenize
 * @delim: delimiter to tokenize against
 *
 * Return: pointer to the next token or NULL
 */
char *new_strtok(char *str, const char *delim)
{
<<<<<<< HEAD
static char *token_start;
static char *next_token;
unsigned int i;
if (str != NULL)
next_token = str;
token_start = next_token;
if (token_start == NULL)
return (NULL);
for (i = 0; next_token[i] != '\0'; i++)
{
if (check_match(next_token[i], delim) == 0)
break;
}
if (next_token[i] == '\0' || next_token[i] == '#')
{
next_token = NULL;
return (NULL);
}
token_start = next_token + i;
next_token = token_start;
for (i = 0; next_token[i] != '\0'; i++)
{
if (check_match(next_token[i], delim) == 1)
break;
}
if (next_token[i] == '\0')
next_token = NULL;
else
{
next_token[i] = '\0';
next_token = next_token + i + 1;
if (*next_token == '\0')
next_token = NULL;
}
return (token_start);
=======
  static char *token_start;
  static char *next_token;
  unsigned int i;

  if (str != NULL)
    next_token = str;
  token_start = next_token;
  if (token_start == NULL)
    return (NULL);
  for (i = 0; next_token[i] != '\0'; i++)
    {
      if (check_match(next_token[i], delim) == 0)
	break;
    }
  if (next_token[i] == '\0' || next_token[i] == '#')
    {
      next_token = NULL;
      return (NULL);
    }
  token_start = next_token + i;
  next_token = token_start;
  for (i = 0; next_token[i] != '\0'; i++)
    {
      if (check_match(next_token[i], delim) == 1)
	break;
    }
  if (next_token[i] == '\0')
    next_token = NULL;
  else
    {
      next_token[i] = '\0';
      next_token = next_token + i + 1;
      if (*next_token == '\0')
	next_token = NULL;
    }
  return (token_start);
>>>>>>> 49df85aab2257b88e08acd7f582f07942e42b75f
}

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    
    char *str;
    int i;

    i = 0;
    str = malloc(len + 1);
    if (str == NULL)
        return (NULL);
    while (len >= 0 && s[start] != '\0')
    {
        str[i] = s[start]; 
        start++;
        i++;
        len--;
    }
    str[i] = '\0';
    return (str);
}
int	main(void)
{
    char	*str = "testar substr";
    char	*result = ft_substr(str, 2, 2);
    printf("substring: %s\n", result);    
    free(result);
    return 0;
}
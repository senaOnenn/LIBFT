#include "libft.h"
#include <stdio.h>

// int main()
// {
//     printf("%d\n",ft_isalpha('a'));
// }

// int main()
// {
//     char *str = "selam";
//     char *str1 = ft_strdup(str);
    
//     printf("%s",str1);
    
//     free(str1);
// }


// int main()
// {
//     char dest[] = "selam";
//     char src[]  = "naber";
//     printf("%ld\n", ft_strlcat(dest, src, 8));
// }

// int main()
// {
//     char dest[20] = "abc";
//     char src[] = "defghijkl";

//     printf("%ld\n",ft_strlcpy(dest,src,7));
//     printf("dest: %s\n", dest);
//     printf("src: %s\n", src);
// }

int main(){
    char s1[] = "sena";
    char s2[] = "onen";

    printf("%d", ft_strncmp(s1, s2, 3));
}

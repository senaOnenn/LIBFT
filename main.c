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

/*
int main(){
    char s1[] = "sena";
    char s2[] = "onen";

    printf("%d", ft_strncmp(s1, s2, 3));
}*/

/*
int main ()
{
    char haystack[] = "selam dunya";
    char needle [] = "";

    printf ("%s \n", ft_strnstr(haystack,needle,5));

}*/


// int main (){
//     char s[] = "selam naber";

//     printf("%s \n", ft_strrchr(s,'\0'));
// }

// int main ()
// {
//     int buffer1;

//     //bir char dizisini belirli bir karakterle doldurma
//     //ft_memset(&buffer1, 255, 4);
//     //  ft_memset(&buffer1, 227, 2);
//     //  ft_memset(&buffer1, 224, 1);

//     //ft_memset(&buffer1, 255, 4);
//     ft_memset(&buffer1, 1, 2);
//     ft_memset(&buffer1, 0, 1);



//     printf("buffer1: %d",buffer1);
// }

// int main()
// {
//     char src[] = "selam cnm";
//     char dest[20];

//     //ft_memset(dest,0,20);
//     ft_memcpy(dest,src, 7);

//     printf("%s",dest);
// }

// int main()
// {
//     char str[] = "selammm";
//     char str1[] = "akari";

//     printf("%d", ft_memcmp(str, str1, 2));
// }

// int main()
// {
//     char s[10] = "selam";
//     ft_bzero(s,5);

//     for (size_t i = 0; i < 10; i++)
//     {
//         printf("%d ", (unsigned char)s[i]);
//     }
// }


// int main()
// {
//     char s[] = "merhaba";
//     char *sonuc;
//     sonuc = ft_substr(s, 2,3);
//     printf("%s \n", sonuc);
// } 

// char	to_upper_char(unsigned int index, char c)
// {
//     (void)index; 
//     if (c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }

// int main ()
// {
//     char str[] = "Selamün";
//     char *mapstr;

//     mapstr = ft_strmapi(str, &to_upper_char);
//     printf("%s",mapstr);
// }

// void to_upper(unsigned int index, char *ptr)
// {
//     (void)index;
//     if (*ptr >= 'a' && *ptr <= 'z')
//         *ptr -= 32;
// }
// int main()
// {
//     char s[]= "dfhsDDSDFDSDkh";
//     char *ptr;
//     ft_striteri(s, &to_upper);
//     printf("%s", s);
// }
// int main()
// {
//     char str[] = "hello ";
//     ft_putendl_fd(str, STDERR_FILENO);
//     ft_putstr_fd(str, STDOUT_FILENO);
// }

int main()
{
    int fd;
    ft_putnbr_fd(12345,STDOUT_FILENO);
    ft_putchar_fd('\n',STDOUT_FILENO);
    ft_putnbr_fd(-123, STDOUT_FILENO);
}


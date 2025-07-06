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

//     ft_memset(&buffer1, 255, 4);
//     ft_memset(&buffer1, 227, 2);
//     ft_memset(&buffer1, 224, 1);

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

/*
int main()
{
    int fd;
    ft_putnbr_fd(12345,STDOUT_FILENO);
    ft_putchar_fd('\n',STDOUT_FILENO);
    ft_putnbr_fd(-123, STDOUT_FILENO);
}*/

/*
int main()
{
   //ft_atoi char str[] = "\n\t\v245728--+++";
    //printf("%d",ft_atoi(str));

    //ft_bzero 
    char s[10] = "adtyyztv";
    ft_bzero(s,3);
    for (size_t i = 0; i < 7; i++)
    {
        printf("arr[%zu] = %d\n",i, s[i]);
    }
}*/
/*
int main()
{
    int *arr;
    size_t n = 5;

    arr =(int *)ft_calloc(n, sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        printf("arr[%zu] = %d\n",i, arr[i]);
    }
    free(arr);  
}*/
/*
int main() //memler
{
    //int buffer1;
    //ft_memset(&buffer1, 255, 4);
    //ft_memset(&buffer1, 1,2);
    //ft_memset(&buffer1, 0,1);
    //printf("%d",buffer1);

    /*char src[10] = "selam";
    char dest[10];

    ft_memcpy(dest, src, 2);
    printf("%s",dest);*/

    /*
    int src[5] = {5,9,8,2};
    int dest[50];

    ft_memmove(dest, src, 3*sizeof(int));

    for (int i = 0; i < 3 ; i++)
    {
        printf("d[%d] = %d \n",i , dest[i]);
    }
    char str[10] = "hello";
    printf("%p",ft_memchr(str,'a',8));
}*/

//str ler
/*int main()
{
    //char str[] = "selam gays";
    //printf("%s", ft_strchr(str,'a'));

    //char s[] = "sena";
    //char *d;
    //d= ft_strdup(s);
    //printf("%s", d);
    //free(d);

    //char src[20] = "onen ";
    //char dst[20] = "sena ";
    //printf("%ld", ft_strlcat(dst,src, 15));

    //char src[] = "s";
    //char *dst = '\0';
    //printf("%ld",ft_strlcpy(dst, src, 4));

    //char s1[] = "sena";
    //char s2[] ="seda";
    //printf("%d", ft_strncmp(s1,s2,3));

    char big[] = "abcdef";
    //char little[] = "bcd";
    //printf("%s",ft_strnstr(big, little,8));

    //printf("%s",ft_strrchr(big, 'd'));
}*/

//2. part
//int main()
//{
    //char s[] = "selam";
    //printf("%s", ft_substr(s, 2, 8));

    //char s1[] = " kanka";
    //printf("%s", ft_strjoin(s, s1));

    //char s[] = "---!!!!--hello--***--";
    //char *set = "-*!";
    //printf("%s", ft_strtrim(s, set));

    /*
    char **splitted;
    char s[] = "selam ben sena nbr";
    splitted = ft_split(s, ' ');

    int i = 0;
    while (splitted[i])
    {
        printf("%s\n",splitted[i]);
        i++;
    }
    int c = 95;
    printf("%s",ft_itoa(c));
}*/

/*char upperwword(unsigned int index, char c)
{
    (void) index;
	if (c <= 'z' && c >= 'a')
		return (c - 32);
	return (c);
}
int main()
{
    char s[]="hello";
    printf("%s",ft_strmapi(s,&upperwword));
}*/

/*
void upperword(unsigned int index, char *c)
{
    (void) index;
	if (*c <= 'z' && *c >= 'a')
        *c -= 32;
}
int main()
{
    char s[] = "hello";
    ft_striteri(s, &upperword);
    printf("%s",s);
}*/

/*
#include <fcntl.h>
int main()
{
    char file[] = "my_fd" ;
    int fd;
    fd  = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    //ft_putchar_fd('A',fd);
    //ft_putchar_fd('e',fd);

    ft_putnbr_fd(123,fd);
    close(fd);
}*/
//18446744073709551615 long long int 

// int main()
// {
//     // char s[] = "214748aaaa3647";
//     // printf("%d\n", ft_atoi(s));

//     // char s[15] = "ssdfhhllsdf";
//     // printf("%s\n", s);

//     // size_t i = 0;
//     // ft_bzero(s, 12);

//     // while (i <= 5 )
//     // {
//     //     printf("%ld     %d\n",i,s[i]);
//     //     i++;
//     // }

//     // size_t s[] = {8,1,6,2} ;
//     // size_t i = 0;
//     // ft_calloc(s,sizeof(int));
//     // while (i < 4)
//     // {
//     //     printf("%ld", s[i]);
//     //     i++;
//     // }

// }


// int main()
// {
//     int *arr;
//     size_t n = 5;

//     arr =(int *)ft_calloc(n, sizeof(int));
//     for (size_t i = 0; i < n; i++)
//     {
//         printf("arr[%zu] = %d\n",i, arr[i]);
//     } 
// }

//int main() 
//{
    //printf("%s",ft_itoa(95));

//    char s[20] = "dfkfh";
//    ft_memset(s, 'a', 4);
//     printf("%s\n", s);
// int buf[6] = {0,5,6};
// ft_memset(&buf[0], 3,2);
// ft_memset(&buf[0], 184,1);

// ft_memset(&buf[1], 255,4);
// ft_memset(&buf[1], 219,2);
// ft_memset(&buf[1], 16,1);

// ft_memset(&buf[3], 24,2);
// ft_memset(&buf[3], 56,1);

// ft_memset(&buf[2], 1,2);
// ft_memset(&buf[2], 0,1);


// ft_memset(&buf[4], 255,4);
// ft_memset(&buf[4], 255,2);
// ft_memset(&buf[4],255,1);

// printf("%d\n", buf[0]);
// printf("%d\n", buf[1]);
// printf("%d\n", buf[2]);
// printf("%d\n", buf[3]);
// printf("%d\n", buf[4]);

// int buf[] = {5,7,9,6};
// int buf1[] = {5,7,9,6};
// printf("%d",ft_memcmp(buf, buf1, 3));

// char src[10] = "sena";

// printf ("%s\n", src );

// printf("%p\n",ft_memcpy(src +2 , src, 5));
// printf("%s\n", src);

// //printf("%p\n", ft_memmove(src+2, src, 5));
// //printf("%s\n", src);
//}

// #include <fcntl.h>
// int main()
// {
//     int fd;
//     //fd = open ("file", O_WRONLY | O_CREAT | O_TRUNC,0777);
//     //ft_putchar_fd('S',fd);
//     fd = open ("output.txt", O_WRONLY | O_CREAT | O_TRUNC,0777);
//     ft_putendl_fd("selam",fd);
//     ft_putnbr_fd(-2147483648,fd);
//     ft_putchar_fd('\n',fd);
//     ft_putnbr_fd(978,fd);
//     close (fd);
// }

// int main()
// {
//     char s[] = "selam ben sena";
//     char **splitted = ft_split(s, ' ');

//     int i = 0;
//     while(splitted[i])
//     {
//       printf("%s ",splitted[i]); 
//       i++; 
//     }  
// }

// int main()
// {
//     char s[] = "dsdffghj";
//     printf("%s\n", ft_strchr(s, 'f'));
// }

// void upper(unsigned int a, char *c)
// {
//     if(*c <= 'z' || *c >='a')
//         *c -=32;
// }

// char lower(unsigned int a, char c)
// {
//     if(c <= 'Z' || c >='A')
//         return (c +=32);
// }

// int main()
// {
//     char s[] = "dhjkshdfh";
//     ft_striteri(s,&upper);
//     printf("%s",s);

//     char *new = ft_strmapi(s,&lower);
//     printf("\n%s", new);
// }

// int main()
// {
//     char s1[] = " naber";
//     char s[] = "selam";
//     char str[] = " elma, armut, kiraz, muz, ";
//     printf("%s\n", ft_strdup(s));
//     printf("%s\n", ft_strjoin(s,s1));
//     ft_strtrim(str, " ");

//     char **splitted = ft_split(str, ',' );
//     int i = 0;
//     while(splitted[i])
//     {
//         printf("%s\n", splitted[i]);
//         i++;
//     }
// }

// int main()
// {
//     char nptr[]="     -436  574";
//     printf("%d\n",ft_atoi(nptr));
// }

// int main()
// {
//     char s[] = "djkssls";
//     ft_bzero(s, 5);
//     int i = 0;
//     while (i < 8)
//     {
//         printf("%d\n", s[i]);
//         i++;
//     }
// }

int main()
{
    int *arr;
    size_t n= 5;
    arr = ft_calloc(5,sizeof(int));
    size_t i = 0;
    while (i<5)
    {
        printf("%d\n",arr[i]);
        i++;
    }  
}
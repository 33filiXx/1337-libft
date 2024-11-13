#include "libft.h"

char *ft_itoa(int c)
{
    int i;
    int j;
    unsigned int n; 
    unsigned int value;
    char *p;

    i = 0;
    j = 0;
    if (c < 0)
    {
      n =  -c;
    }
    else 
      n = c;                   
    while (n >= 10)
    {
        n /= 10;
        i++;
    }
    
    if (c >= 0) 
    {
      p = (char *)malloc((i + 2) * sizeof(char));
       if(!p)
          return NULL;
      p[i + 1] = '\0';
      }
    else
    {
        p = (char *)malloc((i + 3) * sizeof(char));
        if(!p)
          return NULL;
        p[0] = '-';  
        p[i + 2] = '\0';
        i++;
    }
  
   
    n = (c < 0) ? -c : c;
    
    
    j = i;
    if(c >= 0)
    {
    while (j >= 0)  
    {
        value = n;
        p[j] = (value % 10) + '0';  
        n /= 10;  
        j--;  
    }
    }
    else
    {
        while (j > 0) 
    {
        value = n;
        p[j] = (value % 10) + '0'; 
        n /= 10;  
        j--;  
    }
    }
    return p;
}
// int main()
// {
//     int test_values[] = {
//         0,
//         1,
//         -1,
//         42,
//         -42,
//         2147483647,      // INT_MAX
//         -2147483648,     // INT_MIN
//         100,             // Positive number
//         -100,            // Negative number
//         999999,          // Large positive number
//         -999999          // Large negative number
//     };

//     size_t num_tests = sizeof(test_values) / sizeof(test_values[0]);
//     for (size_t i = 0; i < num_tests; i++)
//     {
//         int val = test_values[i];
//         char *result = ft_itoa(val);
//         if (result)
//         {
//             printf("ft_itoa(%d) = %s\n", val, result);
//             free(result); // Free the allocated memory
//         }
//         else
//         {
//             printf("ft_itoa(%d) returned NULL\n", val);
//         }
//     }

//     return 0;
// }
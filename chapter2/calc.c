#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    int mod;
    if (argc == 4 )
    {
        float result = atof(argv[1]);

        for (i = 3; i < argc; i = i + 2)
            switch (*argv[i-1]) {
            case '+':
            result = result + atof(argv[i]);
             break;
            case '-':
            result = result - atof(argv[i]);
            break;
            case 'x':
            result = result * atof(argv[i]);
            break;
            case '/':
            result = result / atof(argv[i]);
            break;
            case '%':
            mod =(int) result / atof(argv[i]);
            result = result -(atof(argv[i])*mod);
            break;
            default:
            return 1;
        }
        printf("%f\n", result);
        return 0;
    }
    return 1;
}
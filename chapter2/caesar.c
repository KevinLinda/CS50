#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        int x = atoi(argv[1]) % 26;
        string text = get_string("plaintext: ");
        int len = strlen(text);

        for(int i = 0; i < len ; i++)
        {
            if(text[i] + x < 122 && text[i] > 96)
            {
                text[i]=text[i] + x;
            }
            else if(text[i] + x < 91)
            {
                text[i]=text[i] + x;
            }
            else
            {
                text[i]=text[i] + x - 26;
            }
        }
        printf("ciphertext: %s\n", text);
        return 0;
    }
    else
    {
        return 1;
    }
}


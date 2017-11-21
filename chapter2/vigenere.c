#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]){

    if(argc != 2)
    {

        return 1;
    }
    else
    {
        for(int y = 0; y < strlen(argv[1]); y++)
        {
            if((argv[1][y] > 90 && argv[1][y] < 97) || argv[1][y] < 65 || argv[1][y] > 122)
            {
                return 1;
            }
        }
        printf("%s %s\n", argv[0],argv[1]);
        int x[strlen(argv[1])];
        for(int z = 0; z < strlen(argv[1]); z++)
        {
            if(argv[1][z] > 64 && argv[1][z] < 92)
            {
                x[z] = (int) argv[1][z] - 65;
            }
            else if(argv[1][z] > 96 && argv[1][z] < 123)
            {
                x[z] = (int) argv[1][z] - 97;
            }
        }
        string before = get_string("plaintext: ");
        int len = strlen(before);
        string after = before;
        for(int i = 0; i < len ; i++){
            if((before[i] > 90 && before[i] < 97) || before[i] < 65 || before[i] > 122)
            {

            }
            else if(before[i] < 91)
            {
                if(before[i] +  (x[i % strlen(argv[1])]) > 91)
                {
                    after[i] = before[i] + (x[i % strlen(argv[1])] - 26);
                }
                else
                {
                    after[i] = before[i] + (x[i % strlen(argv[1])]);
                }
            }
            else{
                if(before[i] +  (x[i % strlen(argv[1])]) > 123)
                {
                    after[i] = before[i] + (x[i % strlen(argv[1])] - 26);
                }
                else
                {
                    after[i] = before[i] + (x[i % strlen(argv[1])]);
                }
            }
        }
        printf("ciphertext: %s\n", after);
        return 0;
    }
}
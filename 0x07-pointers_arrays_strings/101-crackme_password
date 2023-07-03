#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void generate_password(char *char_ptr, int i);

int generate_number_in_range(int min, int max);

int encrypt_login(char *char_ptr);

int encrypt_password(char *char_ptr, int len);

int main()
{
    int input_login_len, encrypted_login, encrypted_password, i = 0;
    char login[20];
    char password[21];

    printf("\nYour login can't be more longer than 20 characters");
    printf("\nEnter your login:");
    scanf("%s", login);

    input_login_len = strlen(login);
    encrypted_login = encrypt_login(login) & 0xFF;

    while(encrypted_login != encrypted_password)
    {
        if (i == input_login_len)
            i = 0;
        generate_password(password, i);
        encrypted_password = encrypt_password(password, i + 1) & 0xFF;
        ++i;
    }

    printf("\n Your serial - [%.*s]\n", i, password);
}

void generate_password(char *char_ptr, int i)
{
    char_ptr[i] = generate_number_in_range(0x41, 0x5A);
}

int generate_number_in_range(int min, int max)
{
    srand(time(NULL));
    return (rand() % (max - min + 1)) + min;
}

int encrypt_login(char *char_ptr)
{
    long int i, var_2, j, current_char, var_38, eax, ecx;

    i = 0;
    var_2 = 0xFFFFFFFF;

    while(char_ptr[i])
    {
        var_2 ^= char_ptr[i];
        
        for (j = 0; j < 8; ++j)
        {
            eax = -(var_2 & 1);
            var_38 = eax;
            eax = var_2 >> 1;
            ecx = var_38 & 0xEDB88320;
            eax = eax ^ ecx;
            var_2 = eax;
        }

        i++;
    }

    return ~var_2;
}

int encrypt_password(char *char_ptr, int len)
{
    int cur_result, prev_result;
    cur_result = prev_result = 0;

    for(int i = 0; i < len; ++i)
    {
        cur_result = char_ptr[i] ^ 0x99;
        cur_result += prev_result;
        prev_result = cur_result;
    }

    return cur_result; // cur_result is equal prev_result on last iteration
}

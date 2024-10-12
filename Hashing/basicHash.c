#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct
{
    char name[MAX_NAME];
    int age;
} person;

person *hash_table[TABLE_SIZE];

unsigned int hash(char *name)
{
    unsigned int hash_value = 0;
    int length = strnlen(name, MAX_NAME);
    for (int i = 0; i < length; i++)
    {
        hash_value = hash_value + name[i];
        hash_value = hash_value * name[i];
        hash_value = hash_value % TABLE_SIZE;
    }
    return (hash_value);
}

void init_hash_tabel()
{
    for (int i = 0; i < TABLE_SIZE; i++)
        hash_table[i] = NULL;
}

void print_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (hash_table[i] == NULL)
            printf("%d. ---\t\n", i);
        else
            printf("%d. %s\t\n", i, hash_table[i]->name);
    }
}

// add a person to the hash table
bool hash_table_insert(person *p)
{
    if (p == NULL)
        return (false);
    int index = hash(p->name);
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        int try = (i + index) % TABLE_SIZE;
        if (hash_table[try] == NULL)
        {
            hash_table[try] = p;
            return (true);
        }
    }
    return (false);
}

// find a person in the hash table
person *hash_table_lookup(char *name)
{
    int index = hash(name);
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        int try = (i + index) % TABLE_SIZE;
        if (hash_table[try] != NULL && strncmp(hash_table[try]->name, name, TABLE_SIZE) == 0)
            return hash_table[try];
    }
    return NULL;
}

// delete a peson from the hash table
person *hash_table_delete(char *name)
{
    int index = hash(name);
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        int try = (i + index) % TABLE_SIZE;
        if (hash_table[try] != NULL && strncmp(hash_table[try]->name, name, TABLE_SIZE) == 0)
        {
            person *temp = hash_table[try];
            hash_table[try] = NULL;
            return temp;
        }
    }
    return NULL;
}

int main(void)
{
    init_hash_tabel();
    // print_table();
    printf("------------------------------------------\n");
    person Anna = {.name = "Anna", .age = 26};
    person Sherlock = {.name = "Sherlock", .age = 49};
    person Wotson = {.name = "Wotson", .age = 48};
    person Jacob = {.name = "Jacobe", .age = 29};
    person Sheldon = {.name = "Sheldon", .age = 28};
    person Lenord = {.name = "Lenord", .age = 28};
    hash_table_insert(&Anna);
    hash_table_insert(&Sherlock);
    hash_table_insert(&Wotson);
    hash_table_insert(&Jacob);
    hash_table_insert(&Sheldon);
    hash_table_insert(&Lenord);
    print_table();

    printf("------------------------------------------\n");
    person *temp = hash_table_lookup("Anna");

    if (temp == NULL)
        printf("Not found! \n");
    else
        printf("Found : %s\n", temp->name);

    temp = hash_table_lookup("Thiwanka");

    if (temp == NULL)
        printf("Not found! \n");
    else
        printf("Found : %s\n", temp->name);

    printf("------------------------------------------\n");
    person Thiwanka = {.name = "Thiwanka", .age = 36};
    hash_table_insert(&Thiwanka);

    temp = hash_table_lookup("Thiwanka");

    if (temp == NULL)
        printf("Not found! \n");
    else
        printf("Found : %s\n", temp->name);
    printf("------------------------------------------\n");
    print_table();
    printf("------------------------------------------\n");
    hash_table_delete("Thiwanka");

    temp = hash_table_lookup("Thiwanka");

    if (temp == NULL)
        printf("Not found! \n");
    else
        printf("Found : %s\n", temp->name);
    printf("------------------------------------------\n");
    print_table();
    printf("------------------------------------------\n");
    return (0);
}
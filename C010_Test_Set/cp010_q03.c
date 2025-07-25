// CP10.3. Read a text file character-wise from user and write its content twice in a separate file.

#include <stdio.h>

int main()
{
    // Init: File Pointers
    FILE *a, *b, *c;
    char ch; // to read characters in files

    a = fopen("a.txt", "r"); // Read a.txt
    b = fopen("b.txt", "w"); // Write b.txt
    c = fopen("c.txt", "w"); // Write c.txt

    while ((ch = fgetc(a)) != EOF)
    {
        fputc(ch, b);
        fputc(ch, b);
    }
    puts("\n'a.txt' content is written twice character-wise in 'b.txt'!");
  
    rewind(a);
    while ((ch = fgetc(a)) != EOF)
        fputc(ch, c);

    rewind(a);
    while ((ch = fgetc(a)) != EOF)
        fputc(ch, c);
    
    puts("\n'a.txt' whole content is written twice in 'c.txt'!");

    // Close all files
    fclose(a);
    fclose(b);
    fclose(c);
    return 0;
}
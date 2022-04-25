# C/C++
### Compiling a C file in Linux

```gcc program-source-code.c -o executable-file-name```
eg: ```main.c -o main```

### Running a C/C++ file in Linux
```./main```

### Compiling a C++ file in Linux

```g++ program-source-code.cpp -o executable-file-name```
eg: ```main.cpp -o main```


# LEX

### compiling lex program

run the following command `$ lex program1.l` 
this will generate a file called ```lex.yy.c```

### compiling and running the generated c file
run the following commands
- `$ gcc lex.yy.c -lfl`
- `$ ./a.out`

# YACC 

### Compiling YACC program
- lex file should be lex_prog.l and yacc file should be yacc_prog.y
- `$ lex lex_prog.l`
- `$ yacc -d yacc_prog.y`
- `$ cc lex.yy.c y.tab.h -ll` or ```$ gcc lex.yy.c y.tab.h -ll ```
- `$ ./a.out`
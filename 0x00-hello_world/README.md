README.md

C files go through 4 main process before they are ready for execution, that is, pre-processing, compilation, assembly and linking.

Pre-processing
This is the first stage which involves removal of comments from source code, expansion of macros, file inclusion and, conditional compilation.
#!/bin/bash
gcc -E $CFILE -o c
In the  code above, the use of a shebang shows its a bash script. Using gcc -E tells the compiler to stop immediately after pre-processing. -o directs the output of pre-processing to a file named c. Preprocessed files = intermediate files and have a .i suffix.

2. Compiler
The intermediate file is converted into an Assembly file (.s), which is a file that holds low level code, that is, assembly level instructions.

The program code undergoes parsing (displays any syntax errors or warning on the terminal).

To stop after compilation, use <gcc -c cfile>


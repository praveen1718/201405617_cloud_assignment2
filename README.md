Steps need to follow 

1. We will generate a 32 bit assembly code using gcc
    gcc -m32 -S hello.c -o hello_32bit.asm



2. We will generate 64 assembly code using gcc
    gcc -S hello.c -o hello_64bit.asm

2. We will run the translator.cpp on the generated 32-bit assembly code
    g++ translator.cpp -o translator.o
    ./translator.o < hello_32bit.asm > hello_64bit_output.asm

4. check whether "hello_64bit.asm"=hello_64bit_output.asm or not
# 201405617_cloud_assignment2

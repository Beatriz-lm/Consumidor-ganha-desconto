# Exercícios em C

Coleção de pequenos programas em C (condicionais, laços, etc.).  
Cada arquivo `.c` é um exercício independente.

## Como rodar (sem Makefile)
```bash
# exemplo para um arquivo específico
gcc -std=c11 -Wall -Wextra -O2 src/ex019_ano_bissexto.c -o build/ex019_ano_bissexto
./build/ex019_ano_bissexto

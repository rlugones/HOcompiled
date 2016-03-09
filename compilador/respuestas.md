## Respuestas para compilador

### Pregunta 1
1. `make preprocessing`: En este paso, el Makefile va a llevar a cabo
el pre-proceso, es decir, `gcc -E calculator.c -o calculator.pp_c`. Es
decir, se va a encargar de las directivas **#** (en este caso,
`include "calculator.h"`). A su vez, también se encarga de las
directivas **#** del archivo calculator.h.

2. `make assembler`: Es un paso más. El comando que, en última instancia,
se está ejecutando es `gcc -masm=intel -S calculator.c -o
calculator.asm`. Lo que hace este comando es llevar a cabo el
preproceso y traducir de C a assembler. Entonces, el output es un
archivo en assembler.

3. `make object`: En este caso, el comando es `gcc -c calculator.c -o
calculator.o`. Se preprocesa en archivo en C, se traduce a assembler
y, a partir de ahí, se traduce a binario. Entonces, el output va a ser
un archivo binario.

4. `make executable`: El comando resulta ser `gcc calculator.o -o
calculator.e`. O sea, preprocesa el archivo en C, lo traduce a
assembler, de ahí lo traduce a binario y, por último, se linkea con
todos los procesos necesarios para la ejecución.



### Pregunta 2

El preprocesador se encarga de todas las directivas **#** (en forma
anidada). O sea, copia el código necesario desde calculator.h y desde
<stdio.h> (llamado desde calculator.h).

### Pregunta 3

Las funciones vienen definidas sin intentación y seguidas de ":". Por
ejemplo, en la línea 10 de calculator.asm aparece **main:**, y en la
línea 39, **add_numbers:**.

### Pregunta 4

Los símbolos que aparece son la posición de memoria, el descriptor y
la entrada. Los dos descriptores que aparecen son *T* y *U*. Las
letras en mayúsculas indican que son accesbiles. La *U* indica que no
está definido y la *T*, que es texto (o sea, código ejecutable).

### Pregunta 5

En el caso del ejecutable aparecen mucha más líneas. Lo que sucede es
que para hacer que el binario sea ejecutable, necesito linkear las
órdenes pertinentes del sistema operativo.
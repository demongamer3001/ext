

ext: main.c
	gcc -Wall main.c -o ext
	strip ext

debug:
	gcc -Wall -g main.c -o ext
    # gdb ext
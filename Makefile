a8lst2unix: a8lst2unix.c
	cc a8lst2unix.c -o a8lst2unix

clean:
	rm -f a8lst2unix a8lst2unix.o

install: a8lst2unix
	cp a8lst2unix /usr/local/bin/

uninstall:
	rm -f /usr/local/bin/a8lst2unix


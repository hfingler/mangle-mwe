all: mwe.so

mwe.so: *.c
	g++ -fPIC -shared -rdynamic -I./include  mwe.c -o mwe.so -ldl

clean:
	rm -f mwe.so
stack: stack.o push.o pop.o display.o isempty.o isfull.o
	gcc -o stack stack.o push.o pop.o isempty.o isfull.o
stack.o: stack.c
	gcc -o stack.o -c stack.c
push.o: push.c
	gcc -o push.o -c push.c
pop.o: pop.c
	gcc -o pop.o -c pop.c
isempty.o: isempty.c
	gcc -o isempty.o -c isempty.c
isfull.o: isfull.c
	gcc -o isfull.o -c isfull.c
display.o: display.c
	gcc -o display.o -c display.c
clean:
	rm -rf *.o main

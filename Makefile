# The run.sh script wasn't efficient so here's a simple makefile
# Let's make this efficient gradually!!!

ezbsh : main.o ezbsh.o
	cc -o ezbsh main.o ezbsh.o -lreadline
main.o : src/main.c 
	cc -c src/main.c
ezbsh.o : src/headers/ezbsh.c
	cc -c src/headers/ezbsh.c
clean :
	rm ezbsh ezbsh.o main.o

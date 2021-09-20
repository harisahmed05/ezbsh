# The run.sh script wasn't efficient so here's a simple makefile
# Let's make this efficient gradually!!!

ezbsh : src/main.c
	gcc src/main.c -lreadline -o ezbsh
run : ezbsh
	./ezbsh

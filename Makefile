build:
	@cc -c regit.c cli.c 
	@cc -o regit regit.o cli.o
	@rm cli.o regit.o 


	

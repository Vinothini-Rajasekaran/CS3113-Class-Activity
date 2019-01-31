all:activity

activity: structure.c
	  gcc -o structure structure.c

clean: 
	rm structure

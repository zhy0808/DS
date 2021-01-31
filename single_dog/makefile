single_dog:main.o single_dog.o
	gcc -o $@ $^
%.o:%.c
	gcc -c $<
.PHONY:clean
clean:
	rm -f main.o single_dog.o single_dog

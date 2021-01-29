proc:main.o proc.o
	gcc -o $@ $^
%.o:%.c
	gcc -c $<
.PHONY:clean
clean:
	rm -f main.o proc.o proc

Rotate_arr:Rotate_arr.o main.o
	gcc -o $@ $^
%.o:%.c
	gcc -c $<
.PHONY:clean
clean:
	rm -f main.o Rotate_arr.o Rotate_arr

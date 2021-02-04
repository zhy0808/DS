mergearr:mergearr.o main.o
	gcc -o $@ $^
%.o:%.c
	gcc -c $^
.PHONY:clean
clean:
	rm -f main.o mergearr.o mergearr

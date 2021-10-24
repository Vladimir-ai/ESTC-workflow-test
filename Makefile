SRC = main.c vector3d/vector3d.c
OBJS = main.o vector3d/vector3d.o
INCPATH = -Ivector3d

program: $(OBJS)
	gcc	$(INCPATH) -o $@ $^ 

%.o: %.c
	gcc $(INCPATH) -c $^ -o $@

.depend: $(SRC)
	gcc $(INCPATH) -MM $^ -o $@

clean:
	rm -f $(OBJS) program

include .depend
.PHONY: clean
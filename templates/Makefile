source = a

CC = g++
cpp_ver = 14

CC_OPT = -std=c++$(cpp_ver)
CC_OPT += -g
CC_OPT += -O0

all: compile run

compile:
	$(CC) $(CC_OPT) $(source).cpp -o $(source).exec && echo compilation succeeded || echo compilation failed

run:
	./$(source).exec

clean:
	rm -rf *.exec.* *.exec *.o
CC=clang
FLAGS=Wall
MAIN=anotacoes.c
MAIN2=anotacoes2.c
OUTPUT=programa
OUTPUT2=programa2

compile1:
	$(CC) -$(FLAGS) $(MAIN) -o $(OUTPUT)

compile2:
	$(CC) -$(FLAGS) $(MAIN2) -o $(OUTPUT2)

clean:
	rm $(OUTPUT)

clear:
	rm teste; rm teste2; rm novo;

exe: $(OUTPUT)
	./$(OUTPUT)

exe2: $(OUTPUT2)
	./$(OUTPUT2)


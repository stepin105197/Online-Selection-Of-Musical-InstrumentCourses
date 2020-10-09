SRC = unity/unity.c\
src/sai.c\
test/test_sai.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = Sai.out

BUILD = build

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}


clean:
	rm -rf $(PROJECT_NAME)

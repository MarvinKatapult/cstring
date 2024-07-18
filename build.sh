C_FLAGS="-Wall -Werror -pedantic -g"
BIN_NAME="example"

execute() {
    echo "$1"
    eval "$1"
}

if [ "$1" = "clean" ]; then
    execute "rm $BIN_NAME"
else
    execute "cc -o ${BIN_NAME} ${C_FLAGS} -I./ cstring.c main.c"
fi

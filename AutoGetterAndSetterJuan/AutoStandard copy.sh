#! /bin/zsh
cd "/Users/juancisneros/Documents/C++/AutoGetterAndSetterJuan"
pbpaste > temp.txt
./main
cat temp.txt | pbcopy

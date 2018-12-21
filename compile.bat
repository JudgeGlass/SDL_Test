@echo off

clang src\*.c -o bin\Program.exe -Wall -g -IC:\Users\JudgeGlass\VM\Test\includes -LC:\Users\JudgeGlass\VM\Test\lib -w -Xlinker /subsystem:console -lSDL2main -lSDL2
 
bin\Program.exe
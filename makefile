clear:
	rm -rf a.out
	@echo "clear done"
obj:
	g++ -c my_string/my_string.cpp my_string/test_my_string.cpp 
	g++ -c stdlib/test_stdlib.cpp
main:
	g++ -c main.cpp -I my_string/ -I stdlib/
link:
	g++ main.o my_string.o test_my_string.o test_stdlib.o 
a:
	g++ main.cpp my_string/my_string.cpp my_string/test_my_string.cpp stdlib/test_stdlib.cpp ctype/test_ctype.cpp -I my_string/ -I stdlib/ -I ctype/ -o myclib.out 

clear:
	rm -rf a.out
	@echo "clear done"
obj:
	g++ -Wall main.cpp my_string.o -I my_string

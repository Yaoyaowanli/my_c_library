clear:
	rm -rf a.out
	@echo "clear done"
obj:
	g++ main.cpp my_string/my_string.cpp -I my_string/

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
	g++ main.cpp my_string/my_string.cpp my_string/test_my_string.cpp stdlib/test_stdlib.cpp ctype/test_ctype.cpp errno/test_errno.cpp math/test_math.cpp setjmp/test_setjmp.cpp signal/test_signal.cpp stdarg/test_stdarg.cpp stdbool/test_stdbool.cpp stddef/test_stddef.cpp cpp_ios/test_ios_base.cpp stl_array/test_array.cpp -I my_string/ -I stdlib/ -I ctype/ -I errno/ -I limits/ -I math/ -I setjmp/ -I signal/ -I stdarg/ -I stdbool/ -I stddef/ -I cpp_ios -I stl_array -o a.out

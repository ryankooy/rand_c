def py_fib(n):
	a, b = 0, 1
	for i in range(n):
		a, b = a+b, a
	return a
	
print('3:', py_fib(3))
print('4:', py_fib(4))
print('5:', py_fib(5))
print('6:', py_fib(6))
print('7:', py_fib(7))
print('8:', py_fib(8))
print('9:', py_fib(9))
print "This is a program for calculating (a-b)^2"

def add(a, b):
	print "ADDING %d + %d" %(a, b)
	return a + b

def subtract(a, b):
	print "SUBTRACTING %d - %d" %(a, b)
	return a - b

def multiply(a, b):
	print "MULTIPLYING %d * %d" %(a, b)
	return a * b

a = int(raw_input("Enter A: "))
b = int(raw_input("Enter B: "))
result = subtract(add(multiply(a,a),multiply(b,b)),multiply(2,multiply(a,b)))

print "The result is %d" %result

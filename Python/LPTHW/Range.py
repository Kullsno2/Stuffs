lower=int(raw_input("Enter the lowerbound: "))
upper=int(raw_input("Enter the upperbound: "))
number=int(raw_input("Enter the number: "))

if number in range(lower,upper):
	print "IN RANGE"
else:
	print "OUT OF RANGE"
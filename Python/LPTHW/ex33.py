def appe(n,j):
	i=0
	numbers=[]

	while i<n:
		print "At the top i is %d" % i
		numbers.append(i)

		i=i+j
		print "Numbers now: ",numbers
		print "At the bottom i is %d" %i

	print "The numbers: "

	for num in numbers:
		print num

num=int(raw_input("Enter Number: "))
inc=int(raw_input("Enter Increment: "))
appe(num,inc)
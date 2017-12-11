#Imports argv module from sys package
from sys import argv

#Assigns comman line arguments to variables.The filename is stored in filename variable
script, filename = argv

#Open the file with the filename and store the file object in txt
txt = open(filename)

#Print the filename
print "Here's your file %r:" %filename
#Use the file obejct to read the file contents and print them out
print txt.read()

txt.close()

#Ask the name of the file from user
print "Type the filename again"
file_again = raw_input(">")

#Open the file having filename from user and store file object in txt_again
txt_again = open(file_again)

#Print the contents of the file pointed by txt_again file object
print txt_again.read()

txt_again.close()
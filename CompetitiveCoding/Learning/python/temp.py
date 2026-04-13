# from email_validator import validate_email, EmailNotValidError

# email = "manos99@@gmail.com"

# try:

#   # Check that the email address is valid. Turn on check_deliverability
#   # for first-time validations like on account creation pages (but not
#   # login pages).
#   emailinfo = validate_email(email, check_deliverability=False)

#   # After this point, use only the normalized form of the email address,
#   # especially before going to a database query.
#   email = emailinfo.normalized

# except EmailNotValidError as e:

#   # The exception message is human-readable explanation of why it's
#   # not a valid (or deliverable) email address.
#   print(str(e))

# myList = []
# for i in range(10):
#     myList.append(input("Enter a value: "))

# print(myList)

# print(len(myList))
# my_max = myList[0]
# for i in range(len(myList)):
#     if myList[i] > my_max:
#         my_max = myList[i]

# print("The maximum value is: ", my_max)

# string = "heTfl g as iicpCTo{7F4NRP051N5_16_35P3X51N3_V9AAB1F8}7"

# n  = 3

# out = []
# for i in range(0, len(string), n):
#     block = string[i:i+n]
#     if len(block) == 3:
#         block = block[2] + block[0] + block[1]
#         out.append(block)

#     result = "".join(out)
#     print(result)

# print(len("ZGSOCXPQUYHMILERVTBWNAFJDK"))

import os


# print(os.system("ifconfig"))


for line in os.popen("ifconfig"):
	if "inet" in line:
		print(line.strip())

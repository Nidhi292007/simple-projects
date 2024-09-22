def reverse(s):
    str=""
    for i in s:
        str=i+str
    return str
s=str(input("\nEnter a string"))
print("The original string is")
print(s)
print("The reverse of the string is")
print(reverse(s))

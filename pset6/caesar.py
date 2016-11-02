import sys
import cs50

if len(sys.argv) != 2:
    print("error")
    exit(0)

print("plaintext: ", end="")
text = cs50.get_string()

SIZE = 26
KEY = int(sys.argv[1])

print("ciphertext: ", end="")
for i in range (len(text)):
    if text[i].isalpha():
        if text[i].isupper():
            tmp = (ord(text[i]) - ord('A') + KEY) % 26 + ord('A')
            print(chr(tmp), sep='', end='')
            
        elif text[i].islower():
            tmp = (ord(text[i]) - ord('a') + KEY) % 26 + ord('a')
            print(chr(tmp), sep='', end='')
    else:
        print(text[i], sep='', end='')
print()        
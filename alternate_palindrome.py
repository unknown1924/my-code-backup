def is_vowel(ch):
    if ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch=='u': 
        return 1
    return 0

# s = "ababababab"
s = "greatness"
flag = False

if is_vowel(s[0]):
    flag = 1

result = [s[0]]

for ch in s[1:]:
    if is_vowel(ch) == flag:
        if ord(ch) > ord(result[-1]):
            result[-1] = ch

    else:
        result.append(ch)
        flag = not flag


print(s)
print(len(s))
print(result)
print(len(result))
# print("".join(result))

'''
Given the string and reverse the word such as:
This is the best
best the is This
'''

def strRev(string):
    return " ".join(reversed(string.split()))


print(strRev("Hello I am Nur"))
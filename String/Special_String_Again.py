# A string is said to be a special string if either of two conditions is met:

# All of the characters are the same, e.g. aaa.
# All characters except the middle one are the same, e.g. aadaa.
# A special substring is any substring of a string which meets one of those criteria. 
# Given a string, determine how many special substrings can be formed from it.

# Complete the substrCount function below.
def substrCount(n, s):
    count = len(s)
    for i, char in enumerate(s):
        diff_char_idx = None
        for j in range(i+1, n):
            if char == s[j]:
                if diff_char_idx is None:
                    count +=1
                elif j - diff_char_idx == diff_char_idx - i:
                    count += 1
                    break
            else:
                if diff_char_idx is None:
                    diff_char_idx = j
                else:
                    break
    return count

if __name__ == '__main__':
    n = int(input("ENTER LENGTH OF STRING : "))
    s = str(input("ENTER STRING : "))
    print("NUMBER OF SPECIAL SUBSTRING FORMED CAN BE FORMED : ",substrCount(n,s))
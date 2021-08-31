### Given two strings s and t, determine if they are isomorphic.

# Two strings s and t are isomorphic if the characters in s can be replaced to get t.

# All occurrences of a character must be replaced with another character while preserving the order of characters. 
# No two characters may map to the same character, but a character may map to itself.

def isIsomorphic(s, t):
    if len(s) != len(t):
        return False
    return len(set(s)) == len(set(t)) == len(set(zip(s,t)))

if __name__ == '__main__':
    s = str(input("ENTER FIRST STRING : "))
    t = str(input("ENTER SECOND STRING : "))
    print(isIsomorphic(s,t))
#### Given a string s, return the longest palindromic substring in s. 

def palexpand(s,l,r):
    while l>=0 and r<len(s) and s[l]==s[r]:
	        l-=1
	        r+=1
    return(s[l+1:r])

def longestPalindrome(s):
    mylist =[]
    n = len(s)
    for i in range(n):
        pal = palexpand(s,i,i)
        pal1 = palexpand(s,i-1,i)
        if pal !=None:
            mylist.append(pal)
        if pal1 !=None:
            mylist.append(pal1)
    return(max(sorted(mylist),key=len))

if __name__ == '__main__':
    s = input("Enter a string : ")
    st = longestPalindrome(s)
    print("Longest Palindromic string : ",st)

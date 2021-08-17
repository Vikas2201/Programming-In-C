### Harold is a kidnapper who wrote a ransom note, but now he is worried it will be traced back to him through his handwriting. 
# He found a magazine and wants to know if he can cut out whole words from it and use them to create an untraceable replica of 
# his ransom note. The words in his note are case-sensitive and he must use only whole words available in the magazine. 
# He cannot use substrings or concatenation to create the words he needs.

## Given the words in the magazine and the words in the ransom note, 
# print Yes if he can replicate his ransom note exactly using whole words from the magazine; otherwise, print No.

def checkMagazine(magazine, note):
    # Write your code here
    n = len(magazine)
    m = len(note)
    i=j=0
    count =0
    magazine.sort()
    note.sort()
    while(i<n and j<m):
        if magazine[i] == note[j]:
            j +=1
            count +=1
        i +=1
    if count == m:
        print("Yes")
    else:
        print("No")

if __name__ == '__main__':
    magazine = str(input())
    note = str(input())
    checkMagazine(magazine, note)
    
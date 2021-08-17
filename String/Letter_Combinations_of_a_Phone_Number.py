# Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.
# Return the answer in any order.

# A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

from itertools import product

def letterCombinations(digits):
    dist = {2:"abc" , 3:"def" , 4:"ghi" , 5:"jkl" , 6:"mno" , 7:"pqrs" , 8:"tuv" , 9:"wxyz" }
    if len(digits) == 0:
        return []
    elif len(digits) == 1:
        return [i for i in dist[int(digits)]]
    else:
        return list(map(lambda x: "".join(x),product(*map(lambda y: dist[int(y)], list(digits)))))
            
if __name__ == '__main__':
    digits = input("Enter Numeric String : ")
    print(letterCombinations(digits))


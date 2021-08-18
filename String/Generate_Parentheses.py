# Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

def generateParenthesis(n):
    dp = [[] for i in range(n + 1)]
    dp[0].append('')
    dp[1].append('()')
    for i in range(2, n+1):
        for j in range(0, i):
            for inside in dp[j]:
                for outside in dp[i-1-j]:
                    dp[i].append('('+inside+')'+outside)
    return dp[n]

if __name__ == "__main__":
    n = int(input("Enter pair of parentheses : "))
    print("All Possible Combinations Of Parentheses : ",generateParenthesis(n))
    
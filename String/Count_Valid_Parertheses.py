def longestValidParentheses(s):
    n = len(s)
    if n == 0:
        return 0
    stack = []
    ptr = -1
    for i in range(0,len(s)):
        if s[i] == "(":
            stack.append(s[i])
            ptr +=1
        else:
            if s[i] == ")" and ptr != -1:
                stack.pop()
                ptr -=1
            else:
                stack.append(s[i])
    return n - len(stack)

if __name__ == "__main__":
    s = input("Enter Parentheses String : ")
    count = longestValidParentheses(s)
    print("Total Valid Parentheses : ",count)
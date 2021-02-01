def sortString(str) : 
    str = ''.join(sorted(str)) 
    return str 

if __name__ == "__main__":
    test_cases = int(input("Enter test cases:\n"))
    for k in range(0,test_cases):
        s = input("enter string: \n")
        Ss = sortString(s)
        remove = 0
        for i in Ss:
            if 'x' in Ss:
                if 'y' in Ss:
                    Ss = Ss.replace('x',' ',1)
                    Ss = Ss.replace('y',' ',1)
                    remove+=1
        # print(Ss)
        print(remove)

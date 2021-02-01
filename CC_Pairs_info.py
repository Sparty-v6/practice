
def split(str):
    return list(str)

if __name__ == "__main__":
    pair = 0
    tc = int(input("test cases?? \n"))
    # ls = []
    sum = 0
    for i in range(0,tc):

        str = input()
        if 'xy' in str:
            sum += 1 
        else:
            break
        print(sum)



        # mylst = split(str)
        # print(mylst)

        # for j in range(len(str)):
        #     print(j, end= ' ')
        #     print(str[j])

        # for j,element in enumerate(mylst):
        #     previous_element = mylst[j-1] if j>0 else None
        #     current_element = element
        #     next_element = mylst[j+1] if j>len(mylst) - 1 else None
        #     print(previous_element,current_element,next_element, end= " ")

        # for j in range(0,len(mylst)):
        #     first = mylst[ :-j]
        # # print(first)
        #     for first in mylst:
        #         if first != mylst[:]:
        #             pair += 1
        #         else:
        #             pair = 0
        #         print(pair)
        

        
'''
1. input test cases and run a loop 
2. enter string
3. split a string and store in list
4. traverse through string and...
5. ...store the accessed variables 
6. compare the 0th variable with 1st then with 2nd then with 3rd and so on...
7. if the 0th variable is matched with anyone of the variable print it's 1 pair
8. for eg. if 0th variable is 'x' and suppose it matches with 2nd variable i.e. 'y' so it forms 1 pair.

'''
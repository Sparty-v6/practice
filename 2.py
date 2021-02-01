# t1 = input()
# t2 = input()
# s = t1+t1+t2+t2
# print(s)

# test = s.split(t2,1)[1]

# print(test)

# if t2 in test:
#     print(1)
# else:
#     print(0)



# def compare(a):
#     for x in zip(a):
#         if x == x:
#             print(1)
#         else:
#             print(0)
# if __name__ == "__main__":
#     ch = input()
#     compare(ch)



# def count(str1): 
   
#     set_string1 = set(str1) 
  
#     print("No. of matching characters are : " + str(len(set_string1)) ) 
  
  
# # Driver code 
# if __name__ == "__main__" : 
  
#     str1 = 'aabcddekll12@'  # first string 
#     # str2 = 'bb2211@55k'     # second string 
  
#     # call count function  
#     count( str1) 
     


# def allCharactersSame(s) : 
#     n = len(s) 
#     for i in range(1, n) : 
#         if s[i] != s[0] : 
#             return False
  
#     return True
  
# # Driver code 
# if __name__ == "__main__" : 
      
#     s = input()
#     if allCharactersSame(s) : 
#         print(1) 
#     else : 
#         print(0) 



# string = input()
   
# print("Duplicate characters in a given string:")
# for i in range(0, len(string)):  
#     count = 1  
#     for j in range(i+1, len(string)):  
#         if(string[i] == string[j] and string[i] != ' '): 
#             count = count + 1
#             string = string[:j] + '0' + string[j+1:]

#     if(count > 1 and string[i] != '0'):  
#         print(string[i]) 



t=int(input())
for f in range(t):
    s=input()
    true=1
    for i in range(len(s)-1):
        if(s[i+1]!=s[i]):
            true=0
            break
    if(true):
        print(int(len(s)/2)-1)
    else:
        i=1
        while(i<len(s) and s[i]!=s[0]):
            i+=1
        if(i==len(s)):
            print(0)
        else:
            j=i
            s1=s[0:i]
            count=1
            while((j+i)<=len(s) and s[j:j+i]==s1):
                count+=1
                j+=i
            if(j==len(s)):
                print(int(count/2)-1)
                
            else:
                
        
        
                count=0
                for i in range(1,int(len(s)/2)):
                    if(s[0:i]==s[i:i+i]):
                        if(s[2*i:i+int(len(s)/2)]==s[i+int(len(s)/2)::]):
                            count+=1
                print(count)
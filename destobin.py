integer=input()
integer=int(integer)
def binary(n): 
    if (n > 1):  
        binary(n >> 1) 
    print(n & 1, end = "") 
  

binary(integer)
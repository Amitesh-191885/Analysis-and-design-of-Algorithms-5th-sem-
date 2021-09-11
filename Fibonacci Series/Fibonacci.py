import time

num = int(input()) #Take input
starttime = time.time()
term1 = 0
term2 = 1
if(num<=0):
    print("Error",end='\n') #print Error when num is less than and equl to zero
elif(num==1):
    print(0,end='\n') #First term of fibonacci series
else:
    #When n is neither '1' or less than '0' then
    print(term1,end='\n') #This is first term
    print(term2,end='\n') #this is second term
    for n in range(2,num):
        term3=term1 + term2 #Third term
        print(term3,end='\n')
        #Update the value for print next value
        term1 = term2; 
        term2 = term3;

print(end='\n')
print(time.time()-starttime)
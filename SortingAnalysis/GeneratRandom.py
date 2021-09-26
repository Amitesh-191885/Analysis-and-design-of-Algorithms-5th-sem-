import random

list=[]
for i in range(1503):
  num = random.randint(1,100000)
  if num not in list: list.append(num)

list
from math import gcd

pd_l=list(map(int, input().split()))
min_q=min(pd_l)
pd_lcm=1
for i in pd_l:
  pd_lcm=pd_lcm*i 
pd_r=pd_lcm+min_q
a=2
while pd_r>a:
  if pd_r%a==0 & a!=pd_r:
    print("None", end="")
    a=a+1
    break
  else:
    print(pd_r, end="")
    a=(pd_r)+1

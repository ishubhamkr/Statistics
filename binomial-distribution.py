pp=str(input())
p1=float(pp[:pp.find(' ')])
p2=float(pp[pp.find(' ')+1:])
pf=0.0
#This is the probability of boy
p = p1/(p1+p2)
from math import factorial as f
def comb(n,r):
    return f(n) / f(r) / f(n-r)

#You have to sum the probabilities of 3,4,5 or 6 boys
for i1 in range(3,7):
    #You were not using the right formula (it's a multiplication, not a sum)
    prob_i1 = pow(p,i1)*pow(1-p,6-i1)*comb(6,i1)
    pf += prob_i1
print("%.3f"%(pf))
